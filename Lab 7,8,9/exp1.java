import java.util.Scanner;

public class exp1 {
    private double milesPerDay;
    private double costPerGallon;
    private double averageMpg;
    private double parkingFees;
    private double tolls;

    public void inputData() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter total miles driven per day: ");
        milesPerDay = scanner.nextDouble();
        System.out.print("Enter cost per gallon of gasoline: Rs.");
        costPerGallon = scanner.nextDouble();
        System.out.print("Enter average miles per gallon: ");
        averageMpg = scanner.nextDouble();
        System.out.print("Enter parking fees per day: Rs.");
        parkingFees = scanner.nextDouble();
        System.out.print("Enter tolls per day: Rs.");
        tolls = scanner.nextDouble();
    }

    public double calculateCostPerDay() {
        double fuelCost = (milesPerDay / averageMpg) * costPerGallon;
        return fuelCost + parkingFees + tolls;
    }

    public void displayCost() {
        double totalCost = calculateCostPerDay();
        System.out.printf("\nYour cost per day of driving to work is: Rs.%.2f\n", totalCost);
    }

    public static void main(String[] args) {
        exp1 drivingCost = new exp1();
        drivingCost.inputData();
        drivingCost.displayCost();
    }
}
