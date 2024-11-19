public class exp3 {
    public static void main(String[] args) {
        exp3_Employee employee1 = new exp3_Employee("Smit", "Deoghare", 5000);
        exp3_Employee employee2 = new exp3_Employee("Yash", "Chauhan", 6000);

        System.out.println("Initial yearly salaries:");
        System.out.printf("%s %s: Rs.%.2f%n", employee1.getName(), employee1.getLastName(), employee1.getYearlySalary());
        System.out.printf("%s %s: Rs.%.2f%n", employee2.getName(), employee2.getLastName(), employee2.getYearlySalary());

        employee1.giveRaise(10);
        employee2.giveRaise(10);

        System.out.println("\nYearly salaries after 10% raise:");
        System.out.printf("%s %s: Rs.%.2f%n", employee1.getName(), employee1.getLastName(), employee1.getYearlySalary());
        System.out.printf("%s %s: Rs.%.2f%n", employee2.getName(), employee2.getLastName(), employee2.getYearlySalary());
    }
}

