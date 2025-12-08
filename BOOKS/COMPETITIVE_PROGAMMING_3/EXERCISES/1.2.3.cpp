#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<ii>;
using mati = vector<vector<int>>;
using matll = vector<vector<ll>>;

void task_1() {
    const double d = 25.1245656; // 1
    cout << setw(7) << fixed << setprecision(3) << d << endl; // 2
}

void task_2() {
    const int precision = 4; // 1
    cout << setprecision(precision) << M_PI << endl; // 2
}

void task_3() {
    
}

void task_4() {
    vi elements = {4,5,1,2,3,3,3,3,3,8,9,12,11,12,12,4,1}; // 1
    set<int> set; // 2
    for(int e : elements) set.insert(e); // 3
    for(int s : set) cout << s << " "; // 4
    cout << endl; // 5
}

void task_5() {
    
}

void task_6() {
    vi elements_2 = {1,2,3,4,5,7,7,8,9,10};
    cout << (binary_search(elements_2.begin(), elements_2.end(), 7) ? "YES" : "NO") << endl;
}

void task_7() {
    string alphabet = "ABCDEFGHIJ";
    do {
        for(char c : alphabet) cout << c << " ";
        cout << endl;
    } while (next_permutation(alphabet.begin(), alphabet.end()));
}

void task_8() {
    
}

void task_9() {
    
}

void task_10() {
    string text = "line: a70 and z72 will be replaced, aa24 and a872 will not";
    regex pattern(R"(\b\w\d{2}\b)");
    string replaced_text = regex_replace(text, pattern, "***");
    cout << replaced_text << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* Task 1: read in a double (e.g. 1.4732, 15.324547327, etc.) and echo it with a minimum field width of 7 and 3 digits after the decimal point */
    // task_1();

    /* Task 2: Given an integer n (n ≤ 15), print π to n digits after the decimal point (rounded). */
    // task_2();

    // Task 3

    /* Task 4: Given n random integers, print the distinct (unique) integers in sorted order. */
    // task_4();

    // Task 5

    /* Task 6: Given a list of sorted integers L of size up to 1M items, determine whether a value v exists in L with no more than 20 comparisons. */
    // task_6();

    // Task 7: Generate all possible permutations of {‘A’, ‘B’, ‘C’, . . . , ‘J’}, the first N = 10 letters in the alphabet.
    // task_7();

    // Task 8
    // task_8();

    // Task 9
    // task_9();

    // Task 10: Let’s define a ‘special word’ as a lowercase alphabet followed by two consecutive digits. Given a string, replace all ‘special words’ of length 3 with 3 stars “***”.
    task_10();

    // Task 11: Given a valid mathematical expression involving ‘+’, ‘-’, ‘*’, ‘/’, ‘(’, and ‘)’ in a single line, evaluate that expression. (e.g. a rather complicated but valid expression 3 + (8 - 7.5) * 10 / 5 - (2 + 5 * 7) should produce -33.0 when evaluated with standard operator precedence.)
    // This is possible with python, C++ can't do this in just a few lines of code, or at least not without using a library.
    // 1. expression = "3 + 4 * (2 - 1) / 2"
    // 2. result = eval(expression)
    // 3. print(result) # Output: 5.0

    return 0;
}