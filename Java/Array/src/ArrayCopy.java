import java.util.Arrays;

public class ArrayCopy {
    public static void main(String[] args)
    {
        int[] n1 = {2, 3, 4 ,5 ,6 };

        int[] n2 = new int[n1.length];

        int[] n3 = new int[5];

        System.arraycopy(n1, 0, n2, 0, n1.length);
        System.out.println("n2 = " + Arrays.toString(n2));

        System.arraycopy(n1, 2, n3, 1, 2);
        System.out.println("n3 = " + Arrays.toString(n3));
    }
}
