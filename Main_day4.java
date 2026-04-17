import java.util.Scanner;

// ENUM për statusin
enum Status {
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED,
    FAILED
}

// Klasa për regjistrim
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
        System.out.println("Student Name: " + studentName);
        System.out.println("Course Name: " + courseName);
        System.out.println("Completed Lessons: " + completedLessons);
        System.out.println("Progress Percent: " + progressPercent + "%");
        System.out.println("Status: " + status);
        System.out.println("-----------------------------------");
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
            System.out.println("\n=== Progress Tracker Menu ===");
            System.out.println("1. Add new record");
            System.out.println("2. Show all records");
            System.out.println("3. Show count and capacity");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");

            if (!input.hasNextInt()) {
                System.out.println("Invalid input! Enter a number.");
                input.next();
                continue;
            }

            choice = input.nextInt();
            input.nextLine();

            switch (choice) {

                case 1:
                    if (recordCount >= MAX_RECORDS) {
                        System.out.println("Maximum limit reached!");
                        break;
                    }

                    System.out.print("Enter student name: ");
                    String studentName = input.nextLine();

                    System.out.print("Enter course name: ");
                    String courseName = input.nextLine();

                    System.out.print("Enter completed lessons: ");
                    int lessons = input.nextInt();

                    System.out.print("Enter progress percent: ");
                    double percent = input.nextDouble();
                    input.nextLine();

                    // Zgjedhja e statusit
                    System.out.println("\nChoose status:");
                    System.out.println("1. NOT_STARTED");
                    System.out.println("2. IN_PROGRESS");
                    System.out.println("3. COMPLETED");
                    System.out.println("4. FAILED");
                    System.out.print("Enter choice: ");

                    int statusChoice = input.nextInt();
                    input.nextLine();

                    Status status;

                    switch (statusChoice) {
                        case 1:
                            status = Status.NOT_STARTED;
                            break;
                        case 2:
                            status = Status.IN_PROGRESS;
                            break;
                        case 3:
                            status = Status.COMPLETED;
                            break;
                        case 4:
                            status = Status.FAILED;
                            break;
                        default:
                            System.out.println("Invalid status! Record not saved.");
                            break;
                    }

                    // Kontroll nëse status është valid
                    if (statusChoice < 1 || statusChoice > 4) {
                        break;
                    }

                    records[recordCount] = new ProgressRecord(
                            studentName,
                            courseName,
                            lessons,
                            percent,
                            status
                    );

                    recordCount++;
                    System.out.println("Record added successfully.");
                    break;

                case 2:
                    if (recordCount == 0) {
                        System.out.println("No records available.");
                    } else {
                        System.out.println("\n=== All Records ===");
                        for (int i = 0; i < recordCount; i++) {
                            System.out.println("Record #" + (i + 1));
                            records[i].displayRecord();
                        }
                    }
                    break;

                case 3:
                    System.out.println("Current records: " + recordCount);
                    System.out.println("Max capacity: " + MAX_RECORDS);
                    break;

                case 4:
                    System.out.println("Program closed.");
                    break;

                default:
                    System.out.println("Invalid menu choice!");
            }

        } while (choice != 4);

        input.close();
    }
}
