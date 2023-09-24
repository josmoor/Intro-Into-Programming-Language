'''
    Name: Josh Moore
    Date: 21 September 2023
    Assignment: Sorting
    Description: Intake a user input of number array, then sort into ascending order.
'''

# Variables
array = [];

'''
    Type: Function
    Name: getUserInput
    Return: Void
    Description: Gets the user's input. in total, asks the user to input ten numerical values in any order. If the
                 inputted value is not a numerical value, then the loop exists.
'''
def getUserInput():
    userInput = input("Enter a number (Use non-number to stop): ");
    if(userInput.isdigit()):
            array.append(int(userInput));

    while userInput.isdigit() and len(array) < 10:
        userInput = input("Enter a number (Use non-number to stop): ");

        if(userInput.isdigit()):
            array.append(int(userInput));

'''
    Type: Function
    Name: sort
    Return: Void
    Description: Sorts through the array of user inputted values. The sorting method is selection-sort, meaning it looks at each
                 value past a current value in the array, to check if the value is less than the current value. This sorting method
                 takes a complexity of O(n).
'''
def sort():
    for i in range(len(array)):
        for j in range(i + 1, len(array)):
            if array[j] < array[i]:
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;

# Main call functions
getUserInput();
sort();
print(array);