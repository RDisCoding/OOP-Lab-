import java.io.Console;

public class PasswordInputWithHashing {
    public static void main(String[] args) {
        Console console = System.console();

        // Check if the console is available (might not be in some IDEs)
        if (console == null) {
            System.out.println("No console available");
            return;
        }

        

        // Print the password to verify (in real scenarios, you'd not do this)
        System.out.println("Your password is: " + password);

        // Clear password array after use for security
        java.util.Arrays.fill(passwordArray, ' ');
    }
}
