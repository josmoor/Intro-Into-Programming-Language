#include<iostream>
#include<string>

int main() {

    // Creates a new String object with a length of 4. Then a subtring of the
    // full string is attempted to get, but the length is Out of Bounds since
    // the string is not as long as the numerical value given.
    try {
        std::string("word").substr(100);
    } catch (const std::exception& e) {
        std::cout << "Error, the string within the Try-Block gives an OutOfBounds Exception.";
    }

    return 0;
}