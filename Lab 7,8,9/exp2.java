public class exp2 {
    public static void main(String[] args) {
        exp2_Invoice invoice1 = new exp2_Invoice("12345", "Hammer", 2, 14.95);
        exp2_Invoice invoice2 = new exp2_Invoice("67890", "Saw", -1, 19.99);

        System.out.println("Invoice 1:");
        printInvoiceDetails(invoice1);

        System.out.println("\nInvoice 2:");
        printInvoiceDetails(invoice2);

        invoice2.setQuantity(3);
        invoice2.setPricePerItem(-5.0);

        System.out.println("\nModified Invoice 2:");
        printInvoiceDetails(invoice2);
    }

    private static void printInvoiceDetails(exp2_Invoice invoice) {
        System.out.println("Part Number: " + invoice.getPartNumber());
        System.out.println("Part Description: " + invoice.getPartDescription());
        System.out.println("Quantity: " + invoice.getQuantity());
        System.out.println("Price Per Item: " + invoice.getPricePerItem());
        System.out.println("Invoice Amount: " + invoice.getInvoiceAmount());
    }
}    
