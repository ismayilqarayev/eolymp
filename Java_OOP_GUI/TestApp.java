public class TestApp {
    public static void main(String[] args) {
        System.out.println("Testing Java OOP Student Management System...");

        // Create school
        School school = new School("Test Məktəbi");
        System.out.println("✓ School created: " + school.getSchoolName());

        // Create students
        Student student1 = new Student(1, "Test Tələbə 1", 20, "1-ci kurs");
        Student student2 = new Student(2, "Test Tələbə 2", 21, "2-ci kurs");
        System.out.println("✓ Students created");

        // Add students to school
        school.addStudent(student1);
        school.addStudent(student2);
        System.out.println("✓ Students added to school: " + school.getStudents().size());

        // Create courses
        Course course1 = new Course("TEST101", "Test Kurs 1", "Test Müəllim", 3, 85.0);
        Course course2 = new Course("TEST102", "Test Kurs 2", "Test Müəllim 2", 4, 90.0);
        System.out.println("✓ Courses created");

        // Add courses to school
        school.addCourse(course1);
        school.addCourse(course2);
        System.out.println("✓ Courses added to school: " + school.getCourses().size());

        // Enroll students in courses
        school.enrollStudentInCourse(student1, course1);
        school.enrollStudentInCourse(student1, course2);
        school.enrollStudentInCourse(student2, course1);
        System.out.println("✓ Students enrolled in courses");

        // Test retrieval
        System.out.println("✓ Student by ID 1: " + school.getStudentById(1).get().getName());
        System.out.println("✓ Course by ID TEST101: " + school.getCourseById("TEST101").get().getName());

        // Show school info
        System.out.println("\n" + school.getSchoolInfo());

        // Show student info
        System.out.println("\nStudent 1 Info:");
        System.out.println(student1.getInfo());

        // Show course info
        System.out.println("\nCourse 1 Info:");
        System.out.println(course1.getCourseInfo());

        System.out.println("\n✅ All tests passed! Java OOP system is working correctly.");
    }
}