import java.util.Scanner;

public class exp9 {
    public static boolean isValidPassword(String password) {
        if (password.length() < 5 || password.length() > 12) {
            return false;
        }

        boolean hasLowercase = false;
        boolean hasDigit = false;

        for (char c : password.toCharArray()) {
            if (Character.isLowerCase(c)) hasLowercase = true;
            else if (Character.isDigit(c)) hasDigit = true;
            else if (Character.isUpperCase(c) || !Character.isLetterOrDigit(c)) return false;
        }

        if (!hasLowercase || !hasDigit) {
            return false;
        }

        for (int i = 0; i < password.length() - 1; i++) {
            if (password.charAt(i) == password.charAt(i+1)) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a password: ");
        String password = scanner.nextLine();

        if (isValidPassword(password)) {
            System.out.println("Password is valid.");
        } else {
            System.out.println("Password is invalid.");
        }

        scanner.close();
    }
}
