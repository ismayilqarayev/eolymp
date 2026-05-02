import java.util.ArrayList;
import java.util.List;

public class Course {
    private static int courseCount = 0;

    private String courseId;
    private String name;
    private String instructor;
    private int credits;
    private double grade;
    private List<Student> students;

    public Course(String courseId, String name, String instructor, int credits, double grade) {
        this.courseId = courseId;
        this.name = name;
        this.instructor = instructor;
        this.credits = credits;
        this.grade = grade;
        this.students = new ArrayList<>();
        courseCount++;
    }

    public Course(String courseId, String name, String instructor, int credits) {
        this(courseId, name, instructor, credits, 0.0);
    }

    public boolean addStudent(Student student) {
        if (!students.contains(student)) {
            students.add(student);
            return true;
        }
        return false;
    }

    public String getCourseInfo() {
        return String.format(
            "Kurs ID: %s\nKurs Adı: %s\nMüəllim: %s\nKreditlər: %d\nQiymət: %.1f\nTələbə sayı: %d",
            courseId, name, instructor, credits, grade, students.size()
        );
    }

    // Getters and Setters
    public String getCourseId() { return courseId; }
    public String getName() { return name; }
    public String getInstructor() { return instructor; }
    public int getCredits() { return credits; }
    public double getGrade() { return grade; }
    public List<Student> getStudents() { return students; }

    public void setName(String name) { this.name = name; }
    public void setInstructor(String instructor) { this.instructor = instructor; }
    public void setCredits(int credits) { this.credits = credits; }
    public void setGrade(double grade) { this.grade = grade; }

    public static int getCourseCount() { return courseCount; }

    @Override
    public String toString() {
        return String.format("%s (Müəllim: %s)", name, instructor);
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Course course = (Course) obj;
        return courseId.equals(course.courseId);
    }

    @Override
    public int hashCode() {
        return courseId.hashCode();
    }
}