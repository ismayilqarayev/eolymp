package com.example;

import javax.swing.table.AbstractTableModel;

import java.util.ArrayList;
import java.util.List;

public class StudentTableModel extends AbstractTableModel {
    private final List<Student> students = new ArrayList<>();
    private final String[] columnNames = {"Index", "Name"};

    @Override
    public int getRowCount() {
        return students.size();
    }

    @Override
    public int getColumnCount() {
        return columnNames.length;
    }

    @Override
    public String getColumnName(int column) {
        return columnNames[column];
    }

    @Override
    public Class<?> getColumnClass(int columnIndex) {
        return columnIndex == 0 ? Integer.class : String.class;
    }

    @Override
    public Object getValueAt(int rowIndex, int columnIndex) {
        Student student = students.get(rowIndex);
        return columnIndex == 0 ? rowIndex + 1 : student.getName();
    }

    public void addStudent(Student student) {
        students.add(student);
        int row = students.size() - 1;
        fireTableRowsInserted(row, row);
    }

    public void updateStudent(int index, String newName) {
        students.get(index).setName(newName);
        fireTableRowsUpdated(index, index);
    }

    public Student removeStudent(int index) {
        Student removed = students.remove(index);
        fireTableDataChanged();
        return removed;
    }

    public Student getStudent(int index) {
        return students.get(index);
    }

    public boolean isEmpty() {
        return students.isEmpty();
    }
}
