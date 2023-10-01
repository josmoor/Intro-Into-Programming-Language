#include <iostream>
#include "queue.h"

// Variables
Queue q;

// Main function
int main() {

    // Create Queue with 5 inputted values
    for(int i = 0; i < 5; i++)
        q.push(i + (i * 3));

    // Output the queue after pushing values
    std::cout << "First Print: " << std::endl;
    q.print();

    // Remove three data nodes
    q.pop();
    q.pop();
    q.pop();

    // Print Queue data
    std::cout << "Second Print: " << std::endl;
    q.print();

    // Remove three Data Nodes
    q.pop();
    q.pop();
    q.pop();

    // Output Queue data
    std::cout << "Last Print: " << std::endl;
    q.print();

    return 0;
}