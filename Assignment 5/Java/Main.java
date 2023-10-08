/**
 * @author Josh Moore
 * 
 * Main class that runs the program. The program takes two Point objects and swaps
 * their position in the parameters, then runs through another function that swaps
 * their values within the object.
 */
public class Main {

    /**
     * Main Function of program.
     * 
     * @param args - Set of args for the program
     */
    public static void main(String[] args) {

        // Variables
        Point first = new Point(1, 2);
        Point second = new Point(3, 4);

        // First function call (Value)
        System.out.println("Original Values: Point a = [" + first.x + ", " + first.y + "] | Point b = [" + second.x + ", " + second.y + "]");
        swapObj(second, first);

        // Second function call (Reference)
        System.out.println("Original Values: Point a = [" + first.x + ", " + first.y + "] | Point b = [" + second.x + ", " + second.y + "]");
        swapValues(first, second);
    }

    /**
     * Swaps the objects' location in the parameter. Displays the values of the
     * passed objects.
     * 
     * @param b - Second object passed
     * @param a - First object passed
     */
    public static void swapObj(Point b, Point a) {
        System.out.println("Swapped Parameter locations: Point a = [" + a.x + ", " + a.y + "] | Point b = [" + b.x + ", " + b.y + "]");
    }

    /**
     * Swaps the objects values within the objects themselves. Displays the
     * values of the passed objects.
     * @param a - First Object
     * @param b - Second object
     */
    public static void swapValues(Point a, Point b) {
        // Temporary placeholder values
        int tmp1 = a.x;
        int tmp2 = a.y;

        // Swaps values within objects.
        a.x = b.x;
        a.y = b.y;

        b.x = tmp1;
        b.y = tmp2;

        System.out.println("Swapped object values: Point a = [" + a.x + ", " + a.y + "] | Point b = [" + b.x + ", " + b.y + "]");
    }
}