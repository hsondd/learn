public class EnhancedForLoop {
    public static void main(String[] args) {
        int[] numbers = {2, 4, 5, -2, 0, 12};
        int sum = 0;

        for (int number: numbers)
        {
            sum+= number;
        }
        System.out.println("Sum = " + sum );
    }
}
