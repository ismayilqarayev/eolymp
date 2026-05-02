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

    public boolean removeStudentFromCourse(Student student, Course course) {
        if (students.contains(student) && courses.contains(course)) {
            if (student.removeCourse(course)) {
                course.removeStudent(student);
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

    public List<Student> getStudentsByGrade(String grade) {
        List<Student> result = new ArrayList<>();
        for (Student student : students) {
            if (student.getGrade().equals(grade)) {
                result.add(student);
            }
        }
        return result;
    }

    public List<Course> getCoursesByInstructor(String instructor) {
        List<Course> result = new ArrayList<>();
        for (Course course : courses) {
            if (course.getInstructor().equals(instructor)) {
                result.add(course);
            }
        }
        return result;
    }

    public String getSchoolInfo() {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd.MM.yyyy HH:mm");
        return String.format(
            "╔══════════════════════════════════════════════════════════════╗\n" +
            "║                        MƏKTƏB MƏLUMATI                       ║\n" +
            "╠══════════════════════════════════════════════════════════════╣\n" +
            "║ Məktəb: %-30s                      ║\n" +
            "║ Yaradılıb: %-25s                      ║\n" +
            "║ Ümumi tələbə sayı: %-15d                      ║\n" +
            "║ Ümumi kurs sayı: %-16d                      ║\n" +
            "║ Ümumi qeydiyyat sayı: %-10d                      ║\n" +
            "╚══════════════════════════════════════════════════════════════╝",
            schoolName,
            creationDate.format(formatter),
            students.size(),
            courses.size(),
            getTotalEnrollments()
        );
    }

    public int getTotalEnrollments() {
        return courses.stream().mapToInt(c -> c.getStudents().size()).sum();
    }

    public double getAverageGPA() {
        if (students.isEmpty()) return 0.0;
        return students.stream().mapToDouble(Student::getGpa).average().orElse(0.0);
    }

    public Student getTopStudent() {
        if (students.isEmpty()) return null;
        Student top = students.get(0);
        for (Student student : students) {
            if (student.getGpa() > top.getGpa()) {
                top = student;
            }
        }
        return top;
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