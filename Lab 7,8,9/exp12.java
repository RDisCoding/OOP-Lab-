import java.util.Scanner;

public class exp12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter range (a b): ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.print("Enter pattern: ");
        String pattern = scanner.next();

        int count = countPatternOccurrences(a, b, pattern);

        System.out.println("The number of times " + pattern + " occurred between " + a + " to " + b + ": " + count);

        scanner.close();
    }

    public static int countPatternOccurrences(int start, int end, String pattern) {
        int count = 0;
        for (int i = start; i <= end; i++) {
            if (String.valueOf(i).contains(pattern)) {
                count++;
            }
        }
        return count;
    }
}
