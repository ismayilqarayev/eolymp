package com.example;

import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.stream.Collectors;

import Student;

public class StudentManager {
    private final List<Student> students = new CopyOnWriteArrayList<>();
    private final AtomicInteger nextId = new AtomicInteger(1);

    public StudentManager() {
        initializeDefaultStudents();
    }

    private void initializeDefaultStudents() {
        students.add(new Student(nextId.getAndIncrement(), "Ali"));
        students.add(new Student(nextId.getAndIncrement(), "Leyla"));
        students.add(new Student(nextId.getAndIncrement(), "Murad"));
    }

    public List<Student> getAllStudents() {
        return new CopyOnWriteArrayList<>(students);
    }

    public Student getStudentById(int id) {
        return students.stream()
            .filter(s -> s.getId() == id)
            .findFirst()
            .orElse(null);
    }

    public Student createStudent(String name) {
        if (name == null || name.trim().isEmpty()) {
            throw new IllegalArgumentException("Student name cannot be empty");
        }
        Student student = new Student(nextId.getAndIncrement(), name.trim());
        students.add(student);
        return student;
    }

    public Student updateStudent(int id, String name) {
        if (name == null || name.trim().isEmpty()) {
            throw new IllegalArgumentException("Student name cannot be empty");
        }
        Student student = getStudentById(id);
        if (student == null) {
            throw new IllegalArgumentException("Student not found");
        }
        student.setName(name.trim());
        return student;
    }

    public boolean deleteStudent(int id) {
        Student student = getStudentById(id);
        if (student == null) {
            return false;
        }
        return students.remove(student);
    }

    public List<Student> searchStudents(String query) {
        if (query == null || query.trim().isEmpty()) {
            return getAllStudents();
        }
        String lowerQuery = query.toLowerCase().trim();
        return students.stream()
            .filter(s -> s.getName().toLowerCase().contains(lowerQuery))
            .collect(Collectors.toList());
    }

    public int getStudentCount() {
        return students.size();
    }
}
