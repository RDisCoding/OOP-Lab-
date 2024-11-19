import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class exp11 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
        boolean isPerfect = isPerfectString(input);
        
        if (isPerfect) {
            System.out.println("The string is a perfect string.");
        } else {
            System.out.println("The string is not a perfect string.");
        }
        
        scanner.close();
    }
    
    public static boolean isPerfectString(String str) {
        Set<Character> charSet = new HashSet<>();
        
        for (char c : str.toCharArray()) {
            if (!charSet.add(c)) {
                return false;
            }
        }
        
        return true;
    }
}
