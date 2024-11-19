import java.util.Random;

enum GameStatus {
    WIN, LOSE, CONTINUE
}

public class exp7 {
    private static final Random randomNumbers = new Random();

    enum CrapsRoll {
        SNAKE_EYES(2), TREY(3), SEVEN(7), YO_LEVEN(11), BOX_CARS(12);

        private final int value;

        CrapsRoll(int value) {
            this.value = value;
        }

        public int getValue() {
            return value;
        }
    }

    public static void main(String[] args) {
        int myPoint = 0;
        GameStatus gameStatus;

        int sumOfDice = rollDice();
        
        switch (sumOfDice) {
            case 7:
            case 11:
                gameStatus = GameStatus.WIN;
                break;
            case 2:
            case 3:
            case 12:
                gameStatus = GameStatus.LOSE;
                break;
            default:
                gameStatus = GameStatus.CONTINUE;
                myPoint = sumOfDice;
                System.out.printf("Point is %d%n", myPoint);
                break;
        }

        while (gameStatus == GameStatus.CONTINUE) {
            sumOfDice = rollDice();

            if (sumOfDice == myPoint) {
                gameStatus = GameStatus.WIN;
            } else if (sumOfDice == CrapsRoll.SEVEN.getValue()) {
                gameStatus = GameStatus.LOSE;
            }
        }

        if (gameStatus == GameStatus.WIN) {
            System.out.println("Player wins");
        } else {
            System.out.println("Player loses");
        }
    }

    public static int rollDice() {
        int die1 = 1 + randomNumbers.nextInt(6);
        int die2 = 1 + randomNumbers.nextInt(6);

        int sum = die1 + die2;

        System.out.printf("Player rolled %d + %d = %d%n", die1, die2, sum);

        return sum;
    }
}
