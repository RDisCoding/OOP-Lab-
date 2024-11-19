public class exp3_Employee {
    private String name;
    private String lastName;
    private double monthlySalary;

    public exp3_Employee(String name, String lastName, double monthlySalary) {
        this.name = name;
        this.lastName = lastName;
        setMonthlySalary(monthlySalary);
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public double getMonthlySalary() {
        return monthlySalary;
    }

    public void setMonthlySalary(double monthlySalary) {
        if (monthlySalary > 0) {
            this.monthlySalary = monthlySalary;
        }
    }

    public double getYearlySalary() {
        return monthlySalary * 12;
    }

    public void giveRaise(double percentage) {
        if (percentage > 0) {
            monthlySalary *= (1 + percentage / 100);
        }
    }
}