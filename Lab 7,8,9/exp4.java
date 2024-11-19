public class exp4 {
    public static void main(String[] args) {
        exp4_Date date1 = new exp4_Date(7, 4, 2023);

        System.out.println("Initial date:");
        date1.displayDate();

        date1.setMonth(12);
        date1.setDay(25);
        date1.setYear(2023);

        System.out.println("\nModified date:");
        date1.displayDate();

        exp4_Date date2 = new exp4_Date(1, 1, 2024);

        System.out.println("\nSecond date:");
        date2.displayDate();

        System.out.println("\nUsing getter methods for the second date:");
        System.out.printf("Month: %d%n", date2.getMonth());
        System.out.printf("Day: %d%n", date2.getDay());
        System.out.printf("Year: %d%n", date2.getYear());
    }
}
