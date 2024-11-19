import java.util.Scanner;

public class exp6 {

    public static String modelOfCategory(String category) {
        switch (category.toUpperCase()) {
            case "SUV":
                return "TATA SAFARI";
            case "SEDAN":
                return "TATA INDIGO";
            case "ECONOMY":
                return "TATA INDICA";
            case "MINI":
                return "TATA NANO";
            default:
                return "Category not found";
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to Tata Motor Dealer");
        System.out.println("Available categories: SUV, SEDAN, ECONOMY, MINI");
        System.out.print("Enter the category of car you're looking for: ");

        String category = scanner.nextLine();
        String model = modelOfCategory(category);

        System.out.println("The model available in " + category + " category is: " + model);

        scanner.close();
    }
}

