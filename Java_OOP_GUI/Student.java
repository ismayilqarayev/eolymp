import java.util.ArrayList;
import java.util.List;

public class Student {
    private static int studentCount = 0;

    private int id;
    private String name;
    private int age;
    private String grade;
    private List<Course> courses;
    private double gpa;

    public Student(int id, String name, int age, String grade) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.grade = grade;
        this.courses = new ArrayList<>();
        this.gpa = 0.0;
        studentCount++;
    }

    public boolean addCourse(Course course) {
        if (!courses.contains(course)) {
            courses.add(course);
            return true;
        }
        return false;
    }

    public double calculateGPA() {
        if (courses.isEmpty()) {
            gpa = 0.0;
            return 0.0;
        }

        double totalGrade = courses.stream().mapToDouble(c -> c.getGrade()).sum();
        gpa = totalGrade / courses.size();
        return Math.round(gpa * 100.0) / 100.0;
    }

    public String getInfo() {
        return String.format(
            "ID: %d\nAd: %s\nYaş: %d\nSinif: %s\nGPA: %.2f\nKurs sayı: %d",
            id, name, age, grade, calculateGPA(), courses.size()
        );
    }

    // Getters and Setters
    public int getId() { return id; }
    public String getName() { return name; }
    public int getAge() { return age; }
    public String getGrade() { return grade; }
    public List<Course> getCourses() { return courses; }
    public double getGpa() { return gpa; }

    public void setName(String name) { this.name = name; }
    public void setAge(int age) { this.age = age; }
    public void setGrade(String grade) { this.grade = grade; }

    public static int getStudentCount() { return studentCount; }

    @Override
    public String toString() {
        return String.format("%s (ID: %d, Sinif: %s)", name, id, grade);
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
}