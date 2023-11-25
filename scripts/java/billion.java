public class billion {
    public static void main(String[] args) {
        int billion = 1000000000;
        long startTime = System.currentTimeMillis();

        for (int i = 0; i < billion; i++) {
        }

        long endTime = System.currentTimeMillis();
        double elapsedTime = (endTime - startTime) / 1000.0; // segundos
        System.out.printf("%.3f segundos\n", elapsedTime);
    }
}
