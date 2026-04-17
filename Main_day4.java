import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        final int MAX_RECORDS = 5;
        ProgressRecord[] records = new ProgressRecord[MAX_RECORDS];
        int recordCount = 0;

        int choice;

        do {
            System.out.println("\n=== Progress Tracker Menu ===");
            System.out.println("1. Add new record");
            System.out.println("2. Show all records");
            System.out.println("3. Show current count and capacity");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");

            choice = input.nextInt();
            input.nextLine();

            switch (choice) {
                case 1:
                    if (recordCount >= MAX_RECORDS) {
                        System.out.println("Maximum limit reached. You cannot add more records.");
                    } else {
                        System.out.print("Enter student name: ");
                        String studentName = input.nextLine();

                        System.out.print("Enter course name: ");
                        String courseName = input.nextLine();

                        System.out.print("Enter completed lessons: ");
                        int completedLessons = input.nextInt();

                        System.out.print("Enter progress percent: ");
                        double progressPercent = input.nextDouble();
                        input.nextLine();

                        records[recordCount] = new ProgressRecord(
                                studentName,
                                courseName,
                                completedLessons,
                                progressPercent
                        );

                        recordCount++;
                        System.out.println("Record added successfully.");
                    }
                    break;

                case 2:
                    if (recordCount == 0) {
                        System.out.println("No records available.");
                    } else {
                        System.out.println("\n=== All Saved Records ===");
                        for (int i = 0; i < recordCount; i++) {
                            System.out.println("Record #" + (i + 1));
                            records[i].displayRecord();
                        }
                    }
                    break;

                case 3:
                    System.out.println("Current number of records: " + recordCount);
                    System.out.println("Maximum capacity: " + MAX_RECORDS);
                    break;

                case 4:
                    System.out.println("Program closed.");
                    break;

                default:
                    System.out.println("Invalid choice. Please try again.");
            }

        } while (choice != 4);

        input.close();
    }
}