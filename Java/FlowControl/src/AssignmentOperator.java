import java.util.Scanner;

public class AssignmentOperator {
    public static void main(String[] args) {
        Double number = 0.0;
        Double sum = 0.0;

        Scanner input = new Scanner(System.in);
        for (int i = 1; i < 6 ; ++i) {
            System.out.print("Enter a number: ");

            number = input.nextDouble();

            if (number <= 0 ) {
                continue;
            }
            sum+= number;
        }
        System.out.println("Sum = " + sum);
    }
}
