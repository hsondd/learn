import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter an interger: ");
        int number = input.nextInt();
        System.out.println("You entered " + number);

    }
}
