package com.example;

import javax.swing.*;

import Student;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class StudentGuiApp {
    private final StudentTableModel model = new StudentTableModel();
    private JLabel statusLabel;
    private JTable studentTable;

    private void createAndShowGui() {
        JFrame frame = new JFrame("Student Manager");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(600, 420);
        frame.setLocationRelativeTo(null);

        studentTable = new JTable(model);
        studentTable.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        studentTable.setAutoCreateRowSorter(true);
        studentTable.setFillsViewportHeight(true);

        JScrollPane tableScrollPane = new JScrollPane(studentTable);

        JPanel actionsPanel = createActionPanel(frame);
        statusLabel = new JLabel("Ready.");

        frame.setJMenuBar(createMenuBar(frame));
        frame.setLayout(new BorderLayout(12, 12));
        frame.add(tableScrollPane, BorderLayout.CENTER);
        frame.add(actionsPanel, BorderLayout.SOUTH);
        frame.add(statusLabel, BorderLayout.NORTH);
        frame.getRootPane().setBorder(BorderFactory.createEmptyBorder(12, 12, 12, 12));

        frame.setVisible(true);
    }

    private JPanel createActionPanel(JFrame frame) {
        JButton addButton = new JButton("Add Student");
        JButton renameButton = new JButton("Rename Student");
        JButton removeButton = new JButton("Remove Student");

        addButton.addActionListener(e -> addStudent(frame));
        renameButton.addActionListener(e -> renameStudent(frame));
        removeButton.addActionListener(e -> removeStudent(frame));

        JPanel buttonPanel = new JPanel(new GridLayout(1, 3, 10, 10));
        buttonPanel.add(addButton);
        buttonPanel.add(renameButton);
        buttonPanel.add(removeButton);
        return buttonPanel;
    }

    private JMenuBar createMenuBar(JFrame frame) {
        JMenuBar menuBar = new JMenuBar();
        JMenu fileMenu = new JMenu("File");
        JMenuItem exitItem = new JMenuItem("Exit");
        exitItem.addActionListener(e -> frame.dispose());
        fileMenu.add(exitItem);

        JMenu helpMenu = new JMenu("Help");
        JMenuItem aboutItem = new JMenuItem("About");
        aboutItem.addActionListener(e -> JOptionPane.showMessageDialog(frame,
                "Student Manager v1.0\nA professional Swing student management demo.",
                "About", JOptionPane.INFORMATION_MESSAGE));
        helpMenu.add(aboutItem);

        menuBar.add(fileMenu);
        menuBar.add(helpMenu);
        return menuBar;
    }

    private void addStudent(JFrame frame) {
        String name = JOptionPane.showInputDialog(frame, "Enter student name:", "Add Student", JOptionPane.PLAIN_MESSAGE);
        if (name == null) {
            statusLabel.setText("Add student cancelled.");
            return;
        }

        name = name.trim();
        if (name.isEmpty()) {
            JOptionPane.showMessageDialog(frame, "Student name cannot be empty.", "Validation Error", JOptionPane.ERROR_MESSAGE);
            statusLabel.setText("Invalid student name.");
            return;
        }

        model.addStudent(new Student(name));
        statusLabel.setText("Added student: " + name);
    }

    private void renameStudent(JFrame frame) {
        int row = studentTable.getSelectedRow();
        if (row < 0) {
            JOptionPane.showMessageDialog(frame, "Please select a student to rename.", "No Selection", JOptionPane.WARNING_MESSAGE);
            statusLabel.setText("No student selected for rename.");
            return;
        }

        int modelIndex = studentTable.convertRowIndexToModel(row);
        Student student = model.getStudent(modelIndex);
        String newName = JOptionPane.showInputDialog(frame, "Enter new name:", student.getName());
        if (newName == null) {
            statusLabel.setText("Rename cancelled.");
            return;
        }

        newName = newName.trim();
        if (newName.isEmpty()) {
            JOptionPane.showMessageDialog(frame, "Student name cannot be empty.", "Validation Error", JOptionPane.ERROR_MESSAGE);
            statusLabel.setText("Invalid student name.");
            return;
        }

        model.updateStudent(modelIndex, newName);
        statusLabel.setText("Renamed student to: " + newName);
    }

    private void removeStudent(JFrame frame) {
        int row = studentTable.getSelectedRow();
        if (row < 0) {
            JOptionPane.showMessageDialog(frame, "Please select a student to remove.", "No Selection", JOptionPane.WARNING_MESSAGE);
            statusLabel.setText("No student selected for removal.");
            return;
        }

        int modelIndex = studentTable.convertRowIndexToModel(row);
        Student removed = model.removeStudent(modelIndex);
        statusLabel.setText("Removed student: " + removed.getName());
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new StudentGuiApp().createAndShowGui());
    }
}
