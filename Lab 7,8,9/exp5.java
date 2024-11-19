import java.util.Scanner;

public class exp5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int totalMiles = 0;
        int totalGallons = 0;
        int tripCount = 0;
        
        System.out.println("Gas Mileage Calculator");
        System.out.println("Enter -1 for miles to end input");
        
        while (true) {
            System.out.print("\nEnter miles driven for trip " + (tripCount + 1) + " (-1 to end): ");
            int miles = input.nextInt();
            
            if (miles == -1) {
                break;
            }
            
            System.out.print("Enter gallons used for trip " + (tripCount + 1) + ": ");
            int gallons = input.nextInt();
            
            if (gallons <= 0) {
                System.out.println("Gallons must be greater than 0. Trip ignored.");
                continue;
            }
            
            float mpg = (float) miles / gallons;
            System.out.printf("Miles per gallon for trip %d: %.2f\n", tripCount + 1, mpg);
            
            totalMiles += miles;
            totalGallons += gallons;
            tripCount++;
            
            float combinedMpg = (float) totalMiles / totalGallons;
            System.out.printf("Combined miles per gallon for all trips: %.2f\n", combinedMpg);
        }
        
        if (tripCount > 0) {
            System.out.println("\nSummary:");
            System.out.println("Total trips: " + tripCount);
            System.out.println("Total miles driven: " + totalMiles);
            System.out.println("Total gallons used: " + totalGallons);
            System.out.printf("Overall miles per gallon: %.2f\n", (float) totalMiles / totalGallons);
        } else {
            System.out.println("No valid trips were entered.");
        }
        
        input.close();
    }
}
