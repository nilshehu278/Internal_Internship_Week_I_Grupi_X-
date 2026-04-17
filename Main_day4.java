import java.util.Scanner;

enum Status {
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED,
    FAILED
}

class ProgressRecord {
    String studentName;
    String courseName;
    int completedLessons;
    double progressPercent;
    Status status;

    public ProgressRecord(String studentName, String courseName, int completedLessons, double progressPercent, Status status) {
        this.studentName = studentName;
        this.courseName = courseName;
        this.completedLessons = completedLessons;
        this.progressPercent = progressPercent;
        this.status = status;
    }

    public void displayRecord() {
        System.out.println("Student: " + studentName);
        System.out.println("Course: " + courseName);
        System.out.println("Lessons: " + completedLessons);
        System.out.println("Progress: " + progressPercent + "%");
        System.out.println("Status: " + status);
        System.out.println("-------------------------");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        final int MAX_RECORDS = 5;
        ProgressRecord[] records = new ProgressRecord[MAX_RECORDS];
        int recordCount = 0;

        int choice;

        do {
            System.out.println("\n=== MENU ===");
            System.out.println("1. Add record");
            System.out.println("2. Show records");
            System.out.println("3. Show statistics");
            System.out.println("4. Exit");
            System.out.print("Choice: ");

            if (!input.hasNextInt()) {
                System.out.println("Invalid input!");
                input.next();
                continue;
            }

            choice = input.nextInt();
            input.nextLine();

            switch (choice) {

                case 1:
                    if (recordCount >= MAX_RECORDS) {
                        System.out.println("Max limit reached!");
                        break;
                    }

                    System.out.print("Student name: ");
                    String name = input.nextLine();

                    System.out.print("Course name: ");
                    String course = input.nextLine();

                    System.out.print("Lessons: ");
                    int lessons = input.nextInt();

                   
