'''
    Name: Josh Moore
    Date: 21 September 2023
    Assignment: Sorting
    Description: Intake a user input of number array, then sort into ascending order.
'''

# Variables
array = [];

def getUserInput():
    userInput = input("Enter a number (Use non-number to stop): ");
    if(userInput.isdigit()):
            array.append(int(userInput));

    while userInput.isdigit() and len(array) < 10:
        userInput = input("Enter a number (Use non-number to stop): ");

        if(userInput.isdigit()):
            array.append(int(userInput));

def sort():
    for i in range(len(array)):
        for j in range(i + 1, len(array)):
            if array[j] < array[i]:
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;

getUserInput();
sort();
print(array);