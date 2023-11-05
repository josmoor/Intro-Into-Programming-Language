import java.util.Scanner;

/**
 * Main class. Contains the exception handling for user input.
 */
public class Main {

    /**
     * Main function for program.
     * @param args - Args to pass during startup
     */
    public static void main(String[] args) {
        System.out.print("Enter in a set of characters: ");
        Scanner in = new Scanner(System.in);

        try {
            String input = in.nextLine();
            
            // Tries to convert the given string into a numerical value.
            // But cannot convert characters into a numerical value, error is thrown.
            int num = Integer.parseInt(input);
            System.out.println("Value is: " + num);
        } catch(NumberFormatException e) {
            System.out.println("The input you gave was not a numerical value... Exiting program.");
        } finally {
            // Closes the Scanner to ensure no memory leak.
            in.close();
        }
    }
}