#include <iostream> // this is a include define to include needed frameworks or packages, and those frameworks is from a header file
#include <string>
#include <cmath>
using namespace std;                   // tell compiler that going to use this namespace
int main(int argc, char const *argv[]) // start function
{
    cout << "this is a first line of output from iostream framework's std" << "\n"; // use "\n" replace "endl"

    /* Comment */
    // this is a comment
    /* this is a comment */

    /* Variables
    basic types
    int
    double
    char
    string
    bool
    type variableName = value;
    */

    string thisIsAStringVar = "this is a string variable's value";
    cout << thisIsAStringVar << "\n";
    char thisIsACharVar;
    thisIsACharVar = 'C';
    cout << "this is an char" << thisIsACharVar;

    int thisIsAIntVar;
    double thisIsDoubleVar;
    bool thisIsBoolVar;
    char thisIsCharVar2;
    string thisIsStringVar2;

    cout << "show types default value" << "\n";
    cout << "int: " << thisIsAIntVar << ", double: " << thisIsDoubleVar << ", bool: " << thisIsBoolVar << "\n";
    cout << "char: " << thisIsCharVar2 << ", string: " << thisIsStringVar2 << "\n";

    /* Declare Many Variables */
    int thisIsIntA = 1, thisIsIntB = 2;
    cout << thisIsIntA + thisIsIntB << "\n";

    /* const */
    const int thisIsIntConstA = 2;

    /* cin to get user input */

    cin >> thisIsIntB;
    cout << thisIsIntB << "\n";

    /* Basic Types
        bool boolen 1 byte
        char 1byte
        int 2 or 4 bytes short or long
        float 4 bytes
        double 8 bytes
    */
    const bool thisIsBool = true; // const bool
    const char thisIsChar = 'C';  // const char
    string thisIsStringVarB = "this is a string";
    cout << thisIsStringVarB << "\n";

    /* Operators
    # arithmetic
    + addition
    - subtraction
    * multiplication
    / Division
    % Modulus
    ++ Increment
    -- Decrement

    # Assignment
    =
    +=
    -=
    *=
    /=
    %=
    &=
    |=
    ^=
    >>=
    <<=

    # Comparison Operators
    == Equal
    != Not Equal
    > Greater than
    < Less than
    >= Greater than or equal to
    <= Less than or equal to

    # Logical
    && Logical and
    || Logical or
    ! Logical not

    # Bitwise Operators
    & Bitwise AND
    | Bitwise OR
    ^ Bitwise XOR ( 00 = 0, 11 = 0, 10 = 1, 01 = 1)
    ~ Bitwise NOT
    << Left shift
    >> Right shift

    */
    cout << thisIsIntB % thisIsIntA << "\n";
    thisIsIntB ^= thisIsIntA;
    cout << thisIsIntB << "\n";

    unsigned int bitwiseShowcaseA = 14, bitwiseShowcaseB = 8;
    // 14 = 1110 8 = 1000
    int resultA = bitwiseShowcaseA & bitwiseShowcaseB;
    cout << resultA << "\n"; // 8
    int resultB = bitwiseShowcaseA | bitwiseShowcaseB;
    cout << resultB << "\n"; // 14
    int resultC = bitwiseShowcaseA ^ bitwiseShowcaseB;
    cout << resultC << "\n"; // 6
    unsigned int resultD = ~bitwiseShowcaseA;
    cout << resultD << "\n"; //
    int resultE = bitwiseShowcaseA << bitwiseShowcaseB;
    cout << resultE << "\n"; //
    int resultF = bitwiseShowcaseA >> bitwiseShowcaseB;
    cout << resultF << "\n"; //

    /* Strings
    + Concatenation
    .append() Append
    .length() Get string's length
    .size() Get string's length
    [int] Access index character & change it
    .at() Access character

    MARK: char use ''(Single quotes), string use ""(Double quotes)
    */
    string stringA = "stringA", stringB = "stringB";
    cout << stringA + stringB + "YES" << "\n";
    cout << stringA.append(stringB) << "\n";
    cout << stringA.length() << "\n";
    cout << stringA.size() << "\n";
    cout << stringA[10] << "\n";
    stringA[10] = 'f';
    cout << stringA.at(10) << "\n";

    /* Special Characters
    \' -> ' Single quote
    \" -> " Single quote
    \\ -> \ Backslash

    getline(,) to read string to var
    */
    cout << "type someting: ";
    getline(cin, stringB);
    cout << "change string B: " + stringB << "\n";

    /* Omitting Namespace and use std call in single line of code
    std::cout
    std::string
    */

    /* C-style of strings
     */
    char stringC[] = "this is stringC";
    cout << stringC << "\n";

    /* Math
    max(,)
    min(,)
    <cmath> Library
    */

    cout << sqrt(64) << "\n";
    cout << round(2.56) << "\n";
    cout << log(2) << "\n";

    /* Conditions
    if
    else
    else if
    switch
    &&
    ||
    */

    /* While loop
    while () {

    }

    execute one time beforce checking condition
    do {

    }
    while ();

    For loop
    for ( ; ; ) {

    }

    Foreach loop
    for (type variableName : arrayName) {
        // do something with variableName
    }

    break;
    continue;

    */

    /* Arrays
    type arrayName[length];
    type arrayName[length] = { content }
    type arrayName[] = { content }
    */

    string arrayWithStringElements[] = {"stringA", stringB, stringA};
    cout << arrayWithStringElements[2] << "\n";
    // arrayWithStringElements[3] = "stringC"; error[Fixed Size, can't add new]

    /* Dynamic size Vectors
    Vectors
    # include <vector>
    */


    return 0; // return a int value (function definition)
}

// use g++ to compile and run