#!/bin/bash

# Script to manage competitive programming problems
# Usage:
#   problem start <problem_name>  - Create a new problem workspace
#   problem finish <problem_name> - Move completed problem to SOLVED/<problem_name>

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TEMPLATES_DIR="$SCRIPT_DIR/TEMPLATES"
TO_SOLVE_DIR="$SCRIPT_DIR/TO_SOLVE"
SOLVED_DIR="$SCRIPT_DIR/SOLVED"

# Function to display usage
usage() {
    echo "Usage:"
    echo "  problem start <problem_name>  - Create a new problem workspace"
    echo "  problem finish <problem_name> - Move completed problem to SOLVED/<problem_name>"
    exit 1
}

# Function to start a new problem
start_problem() {
    local problem_name="$1"
    
    if [ -z "$problem_name" ]; then
        echo "Error: Problem name is required"
        usage
    fi
    
    local problem_dir="$TO_SOLVE_DIR/$problem_name"
    
    # Check if problem directory already exists
    if [ -d "$problem_dir" ]; then
        echo "Error: Problem '$problem_name' already exists in TO_SOLVE/"
        exit 1
    fi
    
    # Create problem directory
    echo "Creating problem directory: $problem_dir"
    mkdir -p "$problem_dir"
    
    # Copy template.cpp to <problem_name>.cpp
    if [ ! -f "$TEMPLATES_DIR/template.cpp" ]; then
        echo "Error: Template file not found at $TEMPLATES_DIR/template.cpp"
        exit 1
    fi
    cp "$TEMPLATES_DIR/template.cpp" "$problem_dir/${problem_name}.cpp"
    echo "Created ${problem_name}.cpp from template"
    
    # Create empty .in file
    touch "$problem_dir/${problem_name}.in"
    echo "Created ${problem_name}.in"
    
    # Copy x.sh to problem directory
    if [ ! -f "$TEMPLATES_DIR/x.sh" ]; then
        echo "Error: x.sh template not found at $TEMPLATES_DIR/x.sh"
        exit 1
    fi
    cp "$TEMPLATES_DIR/x.sh" "$problem_dir/x.sh"
    chmod +x "$problem_dir/x.sh"
    echo "Copied x.sh to problem directory"
    
    # Git operations
    cd "$SCRIPT_DIR" || exit 1
    git add .
    git commit -m "just started problem $problem_name"
    
    echo ""
    echo "Problem '$problem_name' created successfully!"
    echo "Directory: $problem_dir"
    echo ""
    echo "To work on this problem:"
    echo "  cd $problem_dir"
    echo "  alias x='./x.sh'"
    echo "  x $problem_name"
}

# Function to finish a problem
finish_problem() {
    local problem_name="$1"
    
    if [ -z "$problem_name" ]; then
        echo "Error: Problem name is required"
        usage
    fi
    
    local problem_dir="$TO_SOLVE_DIR/$problem_name"
    
    # Check if problem directory exists
    if [ ! -d "$problem_dir" ]; then
        echo "Error: Problem '$problem_name' not found in TO_SOLVE/"
        exit 1
    fi
    
    # Create destination directory SOLVED/<problem_name>
    local dest_dir="$SOLVED_DIR/$problem_name"
    mkdir -p "$dest_dir"
    
    # Move .cpp files to destination
    if [ -f "$problem_dir/${problem_name}.cpp" ]; then
        mv "$problem_dir/${problem_name}.cpp" "$dest_dir/"
        echo "Moved ${problem_name}.cpp to SOLVED/$problem_name"
    else
        echo "Note: ${problem_name}.cpp not found, trying ${problem_name}.py"
    fi

    # Move .py files to destination
    if [ -f "$problem_dir/${problem_name}.py" ]; then
        mv "$problem_dir/${problem_name}.py" "$dest_dir/"
        echo "Moved ${problem_name}.py to SOLVED/$problem_name"
    else
        echo "Warning: ${problem_name}.py not found"
    fi
    
    # Move .in files to destination
    if [ -f "$problem_dir/${problem_name}.in" ]; then
        mv "$problem_dir/${problem_name}.in" "$dest_dir/"
        echo "Moved ${problem_name}.in to SOLVED/$problem_name"
    else
        echo "Warning: ${problem_name}.in not found"
    fi
    
    # Delete the problem directory
    rm -rf "$problem_dir"
    echo "Deleted problem directory from TO_SOLVE/"
    
    # Git operations
    cd "$SCRIPT_DIR" || exit 1
    git add .
    git commit -m "just finished problem $problem_name"
    
    echo ""
    echo "Problem '$problem_name' finished successfully!"
    echo "Files moved to: $dest_dir"
}

# Main script logic
if [ $# -lt 2 ]; then
    usage
fi

command="$1"
shift

case "$command" in
    start)
        start_problem "$@"
        ;;
    finish)
        finish_problem "$@"
        ;;
    *)
        echo "Error: Unknown command '$command'"
        usage
        ;;
esac
