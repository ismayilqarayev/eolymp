import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

public class School {
    private String schoolName;
    private List<Student> students;
    private List<Course> courses;
    private LocalDateTime creationDate;

    public School(String schoolName) {
        this.schoolName = schoolName;
        this.students = new ArrayList<>();
        this.courses = new ArrayList<>();
        this.creationDate = LocalDateTime.now();
    }

    public boolean addStudent(Student student) {
        if (!students.contains(student)) {
            students.add(student);
            return true;
        }
        return false;
    }

    public boolean addCourse(Course course) {
        if (!courses.contains(course)) {
            courses.add(course);
            return true;
        }
        return false;
    }

    public boolean enrollStudentInCourse(Student student, Course course) {
        if (students.contains(student) && courses.contains(course)) {
            if (student.addCourse(course)) {
                course.addStudent(student);
                return true;
            }
        }
        return false;
    }

    public Optional<Student> getStudentById(int studentId) {
        return students.stream()
                .filter(student -> student.getId() == studentId)
                .findFirst();
    }

    public Optional<Course> getCourseById(String courseId) {
        return courses.stream()
                .filter(course -> course.getCourseId().equals(courseId))
                .findFirst();
    }

    public String getSchoolInfo() {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd.MM.yyyy HH:mm");
        return String.format(
            "Məktəb: %s\nYaradılıb: %s\nTələbə sayı: %d\nKurs sayı: %d",
            schoolName, creationDate.format(formatter), students.size(), courses.size()
        );
    }

    // Getters
    public String getSchoolName() { return schoolName; }
    public List<Student> getStudents() { return students; }
    public List<Course> getCourses() { return courses; }
    public LocalDateTime getCreationDate() { return creationDate; }

    // Setters
    public void setSchoolName(String schoolName) { this.schoolName = schoolName; }

    @Override
    public String toString() {
        return schoolName;
    }
}