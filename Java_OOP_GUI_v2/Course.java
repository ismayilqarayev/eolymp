import java.util.ArrayList;
import java.util.List;

public class Course {
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
    }

    public boolean addStudent(Student student) {
        if (!students.contains(student)) {
            students.add(student);
            return true;
        }
        return false;
    }

    public boolean removeStudent(Student student) {
        return students.remove(student);
    }

    // Getters
    public String getCourseId() { return courseId; }
    public String getName() { return name; }
    public String getInstructor() { return instructor; }
    public int getCredits() { return credits; }
    public double getGrade() { return grade; }
    public List<Student> getStudents() { return students; }

    // Setters
    public void setName(String name) { this.name = name; }
    public void setInstructor(String instructor) { this.instructor = instructor; }
    public void setCredits(int credits) { this.credits = credits; }
    public void setGrade(double grade) { this.grade = grade; }

    public String getCourseInfo() {
        return String.format(
            "╔══════════════════════════════════════════════════════════════╗\n" +
            "║                        KURS MƏLUMATI                         ║\n" +
            "╠══════════════════════════════════════════════════════════════╣\n" +
            "║ Kurs ID: %-10s Ad: %-25s        ║\n" +
            "║ Müəllim: %-15s Kreditlər: %-10d              ║\n" +
            "║ Qiymət: %-8.1f Tələbə sayı: %-15d              ║\n" +
            "╚══════════════════════════════════════════════════════════════╝",
            courseId, name, instructor, credits, grade, students.size()
        );
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Course course = (Course) obj;
        return courseId != null ? courseId.equals(course.courseId) : course.courseId == null;
    }

    @Override
    public int hashCode() {
        return courseId != null ? courseId.hashCode() : 0;
    }

    @Override
    public String toString() {
        return String.format("Course{id='%s', name='%s', instructor='%s', credits=%d, grade=%.1f}",
                           courseId, name, instructor, credits, grade);
    }
}