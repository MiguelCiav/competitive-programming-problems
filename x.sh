#!/bin/bash
COMPILER="g++"
FLAGS="-std=c++17 -Wall -Wextra -O2"
if [ $# -eq 0 ]; then
    echo "Uso: ./run.sh <nombre_archivo>"
    exit 1
fi
BASE_NAME=$1
SOURCE_FILE="${BASE_NAME}.cpp"
BINARY_FILE="${BASE_NAME}"
INPUT_FILE="${BASE_NAME}.in"
if [ ! -f "$SOURCE_FILE" ]; then
    echo "Error: No existe $SOURCE_FILE"
    exit 1
fi
if [ ! -f "$INPUT_FILE" ]; then
    touch "$INPUT_FILE"
fi
if [ ! -f "$BINARY_FILE" ] || [ "$SOURCE_FILE" -nt "$BINARY_FILE" ]; then
    $COMPILER $FLAGS -o "$BINARY_FILE" "$SOURCE_FILE"
    if [ $? -ne 0 ]; then
        echo "Error de compilación."
        exit 1
    fi
fi
./"$BINARY_FILE" < "$INPUT_FILE"