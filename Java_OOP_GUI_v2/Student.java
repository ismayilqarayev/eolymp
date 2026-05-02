import java.util.ArrayList;
import java.util.List;

public class Student {
    private static int nextId = 1;

    private int id;
    private String name;
    private int age;
    private String grade;
    private List<Course> courses;
    private double gpa;

    public Student(String name, int age, String grade) {
        this.id = nextId++;
        this.name = name;
        this.age = age;
        this.grade = grade;
        this.courses = new ArrayList<>();
        this.gpa = 0.0;
    }

    public boolean addCourse(Course course) {
        if (!courses.contains(course)) {
            courses.add(course);
            calculateGPA();
            return true;
        }
        return false;
    }

    public boolean removeCourse(Course course) {
        if (courses.remove(course)) {
            calculateGPA();
            return true;
        }
        return false;
    }

    private void calculateGPA() {
        if (courses.isEmpty()) {
            gpa = 0.0;
            return;
        }

        double totalGrade = 0.0;
        int totalCredits = 0;

        for (Course course : courses) {
            totalGrade += course.getGrade() * course.getCredits();
            totalCredits += course.getCredits();
        }

        gpa = totalCredits > 0 ? totalGrade / totalCredits : 0.0;
    }

    // Getters
    public int getId() { return id; }
    public String getName() { return name; }
    public int getAge() { return age; }
    public String getGrade() { return grade; }
    public List<Course> getCourses() { return courses; }
    public double getGpa() { return gpa; }

    // Setters
    public void setName(String name) { this.name = name; }
    public void setAge(int age) { this.age = age; }
    public void setGrade(String grade) { this.grade = grade; }

    public String getInfo() {
        return String.format(
            "╔══════════════════════════════════════════════════════════════╗\n" +
            "║                        TƏLƏBƏ MƏLUMATI                       ║\n" +
            "╠══════════════════════════════════════════════════════════════╣\n" +
            "║ ID: %-10d Ad: %-25s              ║\n" +
            "║ Yaş: %-8d Sinif: %-25s              ║\n" +
            "║ GPA: %-8.2f Kurs sayı: %-15d              ║\n" +
            "╚══════════════════════════════════════════════════════════════╝",
            id, name, age, grade, gpa, courses.size()
        );
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Student student = (Student) obj;
        return id == student.id;
    }

    @Override
    public int hashCode() {
        return Integer.hashCode(id);
    }

    @Override
    public String toString() {
        return String.format("Student{id=%d, name='%s', grade='%s', gpa=%.2f}",
                           id, name, grade, gpa);
    }
}