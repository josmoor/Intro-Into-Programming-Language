#include<iostream>

// Functions
void passValue(int, int);
void passReference(int&, int&);

// Main Function
int main() {

    // Varibles
    int a = 15;
    int b = 7;

    // Value Call
    passValue(a, b);
    std::cout << "Pass By Value [a] = " << a << ", [b] = " << b << std::endl;

    // Reference Call
    passReference(a,b);
    std::cout << "Pass By Reference [a] = " << a << ", [b] = " << b << std::endl;
}

/**
 * Type: Function
 * Name: passValue
 * Parameters:
 *  first - INT
 *  second - INT
 * Description:
 *  Displays the values and swaps the value within the function.
*/
void passValue(int first, int second) {
    std::cout << "Original Values [a] = " << first << ", [b] = " << second << std::endl;
    int tmp = first;
    first = second;
    second = tmp;
}

/**
 * Type: Function
 * Name: passReference
 * Parameters:
 *  first - INT
 *  second - INT
 * Description:
 *  Displays the values and swaps the value within the function.
*/
void passReference(int &first, int &second) {
    std::cout << "Original Values [a] = " << first << ", [b] = " << second << std::endl;
    int tmp = first;
    first = second;
    second = tmp;
}