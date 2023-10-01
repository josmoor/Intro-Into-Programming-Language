#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>

/**
 * Type: Class
 * Name: Queue
 * Description:
 *      Class that mimicks the properties of a stack. The value of the node is stored with a pointer to the
 *      next node. Only the top (first) node can be access / popped (removed).
*/
class Queue {
    
    /**
     * Stucture class of a node 
    */
    struct node {
        int data;
        node* next;
    };

    // Variables
    private:
        node* top;

    public:
        /**
         * Type: Constructor
         * Description: Generic constructor for the Queue class.
        */
        Queue() { }

        /**
         * Type: Deconstructor
         * Description: Deconstructor that removes all the data within this object, ensuring that
         * all the data is removed from the memory to avoid memory leaks.
        */
        ~Queue() {
            node* tmp = top;

            while(tmp != NULL) {
                top = top->next;
                delete tmp;
                tmp = top;
            }
        }

        /**
         * Type: Method
         * Name: push
         * Parameters: INT - data
         * Description:
         *      Intakes an integer value and stores the location via a pointer on the 'top' of the stack. The data is then
         *      connected via a 'next' pointer to the data below this one.
        */
        void push(int data) {
            node* tmp = new node;
            tmp->data = data;
            tmp->next = top;
            top = tmp;
        }

        /**
         * Type: Method
         * Name: pop
         * Description:
         *      Removes the top-most data and makes the next data node the new top-most value. If
         *      the queue is empty, then an error message is printed stating that the queue is empty.
        */
        void pop() {
            node* tmp = top;

            if(tmp == NULL)
                std::cout << "Queue is Empty. Cannot pop any value." << std::endl;
            else {
                top = tmp->next;
                delete tmp;
            }
        }

        /**
         * Type: Method
         * Name: print
         * Description:
         *      Prints out all the integer data values stored within this object from Top to Bottom. If the
         *      queue is empty, then an error message is printed stating that the queue is empty.
        */
        void print() {
            node* tmp = top;

            if(tmp == NULL)
                std::cout << "Queue is Empty." << std::endl;

            while(tmp != NULL) {
                std::cout << "Node Data: " << tmp->data << std::endl;
                tmp = tmp->next;
            }
        }

        /**
         * Type: Method
         * Name: getTop
         * Description:
         *      Gets the value of the top-most data node value.
        */
        int getTop() {
            if(top != NULL)
                return top->data;
            else
                std::cout << "Queue is empty, nothing to get." << std::endl;
        }
};

#endif