import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class exp10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the threshold count (n): ");
        int n = scanner.nextInt();

        Map<Character, Integer> charFrequency = new HashMap<>();

        for (char c : input.toCharArray()) {
            charFrequency.put(c, charFrequency.getOrDefault(c, 0) + 1);
        }

        System.out.println("Characters exceeding count " + n + ":");
        for (Map.Entry<Character, Integer> entry : charFrequency.entrySet()) {
            if (entry.getValue() > n) {
                System.out.println(entry.getKey() + ": " + entry.getValue());
            }
        }

        scanner.close();
    }
}
