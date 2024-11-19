public interface Function {
    int evaluate(int x);
}

public class Half implements Function {
    @Override
    public int evaluate(int x) {
        return x / 2;
    }
}

public class exp13 {
    public static int[] processArray(int[] arr) {
        Function half = new Half();
        int[] result = new int[arr.length];
        
        for (int i = 0; i < arr.length; i++) {
            result[i] = half.evaluate(arr[i]);
        }
        
        return result;
    }

    public static void main(String[] args) {
        int[] originalArray = {10, 20, 30, 40, 50};
        int[] processedArray = processArray(originalArray);

        System.out.println("Original array:");
        for (int num : originalArray) {
            System.out.print(num + " ");
        }

        System.out.println("\nProcessed array:");
        for (int num : processedArray) {
            System.out.print(num + " ");
        }
    }
}
