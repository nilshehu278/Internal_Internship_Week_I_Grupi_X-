class ProgressRecord {
    String studentName;
    String courseName;
    int completedLessons;
    double progressPercent;

    public ProgressRecord(String studentName, String courseName, int completedLessons, double progressPercent) {
        this.studentName = studentName;
        this.courseName = courseName;
        this.completedLessons = completedLessons;
        this.progressPercent = progressPercent;
    }

    public void displayRecord() {
        System.out.println("Student Name: " + studentName);
        System.out.println("Course Name: " + courseName);
        System.out.println("Completed Lessons: " + completedLessons);
        System.out.println("Progress Percent: " + progressPercent + "%");
        System.out.println("-----------------------------------");
    }
}