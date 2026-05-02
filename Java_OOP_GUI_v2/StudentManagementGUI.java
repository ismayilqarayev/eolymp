import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.List;

public class StudentManagementGUI extends JFrame {
    private School school;
    private DefaultTableModel studentsTableModel;
    private DefaultTableModel coursesTableModel;
    private JTable studentsTable;
    private JTable coursesTable;
    private JComboBox<String> studentCombo;
    private JComboBox<String> courseCombo;
    private JTextArea infoArea;
    private JLabel statusLabel;

    public StudentManagementGUI() {
        school = new School("AzER Məktəbi");
        initializeGUI();
        loadDemoData();
        updateCombos();
    }

    private void initializeGUI() {
        setTitle("🏫 Tələbə İdarəçiliyi Sistemi - Java OOP GUI v2");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(1000, 700);
        setLocationRelativeTo(null);

        // Main layout
        setLayout(new BorderLayout());

        // Menu bar
        setJMenuBar(createMenuBar());

        // Tabbed pane
        JTabbedPane tabbedPane = new JTabbedPane();
        tabbedPane.addTab("👨‍🎓 Tələbələr", createStudentsPanel());
        tabbedPane.addTab("📚 Kurslar", createCoursesPanel());
        tabbedPane.addTab("📝 Qeydiyyat", createEnrollmentPanel());
        tabbedPane.addTab("📊 Statistika", createStatisticsPanel());

        add(tabbedPane, BorderLayout.CENTER);

        // Status bar
        JPanel statusBar = new JPanel(new BorderLayout());
        statusBar.setBorder(BorderFactory.createEtchedBorder());
        statusLabel = new JLabel("Hazır");
        statusLabel.setBorder(BorderFactory.createEmptyBorder(5, 10, 5, 10));
        statusBar.add(statusLabel, BorderLayout.WEST);

        JLabel infoLabel = new JLabel("Java OOP GUI v2 - Tələbə İdarəçiliyi Sistemi");
        infoLabel.setBorder(BorderFactory.createEmptyBorder(5, 10, 5, 10));
        statusBar.add(infoLabel, BorderLayout.EAST);

        add(statusBar, BorderLayout.SOUTH);
    }

    private JMenuBar createMenuBar() {
        JMenuBar menuBar = new JMenuBar();

        JMenu fileMenu = new JMenu("Fayl");
        JMenuItem exitItem = new JMenuItem("Çıxış");
        exitItem.addActionListener(e -> System.exit(0));
        fileMenu.add(exitItem);

        JMenu helpMenu = new JMenu("Kömək");
        JMenuItem aboutItem = new JMenuItem("Haqqında");
        aboutItem.addActionListener(e -> showAbout());
        helpMenu.add(aboutItem);

        menuBar.add(fileMenu);
        menuBar.add(helpMenu);

        return menuBar;
    }

    private JPanel createStudentsPanel() {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

        // Title
        JLabel title = new JLabel("Tələbələr İdarəçiliyi", SwingConstants.CENTER);
        title.setFont(new Font("Arial", Font.BOLD, 16));
        panel.add(title, BorderLayout.NORTH);

        // Center panel
        JPanel centerPanel = new JPanel(new BorderLayout());

        // Left panel - form
        JPanel formPanel = createStudentForm();
        centerPanel.add(formPanel, BorderLayout.WEST);

        // Right panel - table
        JPanel tablePanel = new JPanel(new BorderLayout());

        // Search
        JPanel searchPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        searchPanel.add(new JLabel("Axtar:"));
        JTextField searchField = new JTextField(25);
        searchField.addActionListener(e -> searchStudents(searchField.getText()));
        searchPanel.add(searchField);
        JButton refreshBtn = new JButton("🔄 Yenilə");
        refreshBtn.addActionListener(e -> refreshStudentsTable());
        searchPanel.add(refreshBtn);
        tablePanel.add(searchPanel, BorderLayout.NORTH);

        // Table
        studentsTableModel = new DefaultTableModel(
            new Object[]{"ID", "Ad", "Yaş", "Sinif", "GPA", "Kurslar"}, 0
        );
        studentsTable = new JTable(studentsTableModel);
        studentsTable.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        studentsTable.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                if (e.getClickCount() == 2) {
                    showStudentDetails();
                }
            }
        });

        JScrollPane scrollPane = new JScrollPane(studentsTable);
        tablePanel.add(scrollPane, BorderLayout.CENTER);

        centerPanel.add(tablePanel, BorderLayout.CENTER);

        panel.add(centerPanel, BorderLayout.CENTER);

        return panel;
    }

    private JPanel createStudentForm() {
        JPanel panel = new JPanel(new GridBagLayout());
        panel.setBorder(BorderFactory.createTitledBorder("Yeni Tələbə Əlavə Et"));
        panel.setPreferredSize(new Dimension(300, 250));

        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.anchor = GridBagConstraints.WEST;

        // Fields
        gbc.gridx = 0; gbc.gridy = 0;
        panel.add(new JLabel("Ad:"), gbc);
        gbc.gridx = 1;
        JTextField nameField = new JTextField(15);
        panel.add(nameField, gbc);

        gbc.gridx = 0; gbc.gridy = 1;
        panel.add(new JLabel("Yaş:"), gbc);
        gbc.gridx = 1;
        JTextField ageField = new JTextField(15);
        panel.add(ageField, gbc);

        gbc.gridx = 0; gbc.gridy = 2;
        panel.add(new JLabel("Sinif:"), gbc);
        gbc.gridx = 1;
        JTextField gradeField = new JTextField(15);
        panel.add(gradeField, gbc);

        // Buttons
        gbc.gridx = 0; gbc.gridy = 3; gbc.gridwidth = 2;
        gbc.anchor = GridBagConstraints.CENTER;
        JPanel buttonPanel = new JPanel(new FlowLayout());

        JButton addButton = new JButton("➕ Əlavə Et");
        addButton.addActionListener(e -> addStudent(nameField, ageField, gradeField));

        JButton clearButton = new JButton("🗑️ Təmizlə");
        clearButton.addActionListener(e -> {
            nameField.setText("");
            ageField.setText("");
            gradeField.setText("");
        });

        buttonPanel.add(addButton);
        buttonPanel.add(clearButton);
        panel.add(buttonPanel, gbc);

        return panel;
    }

    private JPanel createCoursesPanel() {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

        // Title
        JLabel title = new JLabel("Kurslar İdarəçiliyi", SwingConstants.CENTER);
        title.setFont(new Font("Arial", Font.BOLD, 16));
        panel.add(title, BorderLayout.NORTH);

        // Center panel
        JPanel centerPanel = new JPanel(new BorderLayout());

        // Left panel - form
        JPanel formPanel = createCourseForm();
        centerPanel.add(formPanel, BorderLayout.WEST);

        // Right panel - table
        JPanel tablePanel = new JPanel(new BorderLayout());

        // Search
        JPanel searchPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        searchPanel.add(new JLabel("Axtar:"));
        JTextField searchField = new JTextField(25);
        searchField.addActionListener(e -> searchCourses(searchField.getText()));
        searchPanel.add(searchField);
        JButton refreshBtn = new JButton("🔄 Yenilə");
        refreshBtn.addActionListener(e -> refreshCoursesTable());
        searchPanel.add(refreshBtn);
        tablePanel.add(searchPanel, BorderLayout.NORTH);

        // Table
        coursesTableModel = new DefaultTableModel(
            new Object[]{"Kurs ID", "Ad", "Müəllim", "Kreditlər", "Qiymət", "Tələbələr"}, 0
        );
        coursesTable = new JTable(coursesTableModel);
        coursesTable.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        coursesTable.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                if (e.getClickCount() == 2) {
                    showCourseDetails();
                }
            }
        });

        JScrollPane scrollPane = new JScrollPane(coursesTable);
        tablePanel.add(scrollPane, BorderLayout.CENTER);

        centerPanel.add(tablePanel, BorderLayout.CENTER);

        panel.add(centerPanel, BorderLayout.CENTER);

        return panel;
    }

    private JPanel createCourseForm() {
        JPanel panel = new JPanel(new GridBagLayout());
        panel.setBorder(BorderFactory.createTitledBorder("Yeni Kurs Əlavə Et"));
        panel.setPreferredSize(new Dimension(300, 300));

        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.anchor = GridBagConstraints.WEST;

        // Fields
        gbc.gridx = 0; gbc.gridy = 0;
        panel.add(new JLabel("Kurs ID:"), gbc);
        gbc.gridx = 1;
        JTextField idField = new JTextField(15);
        panel.add(idField, gbc);

        gbc.gridx = 0; gbc.gridy = 1;
        panel.add(new JLabel("Kurs Adı:"), gbc);
        gbc.gridx = 1;
        JTextField nameField = new JTextField(15);
        panel.add(nameField, gbc);

        gbc.gridx = 0; gbc.gridy = 2;
        panel.add(new JLabel("Müəllim:"), gbc);
        gbc.gridx = 1;
        JTextField instructorField = new JTextField(15);
        panel.add(instructorField, gbc);

        gbc.gridx = 0; gbc.gridy = 3;
        panel.add(new JLabel("Kreditlər:"), gbc);
        gbc.gridx = 1;
        JTextField creditsField = new JTextField(15);
        panel.add(creditsField, gbc);

        gbc.gridx = 0; gbc.gridy = 4;
        panel.add(new JLabel("Qiymət:"), gbc);
        gbc.gridx = 1;
        JTextField gradeField = new JTextField(15);
        panel.add(gradeField, gbc);

        // Buttons
        gbc.gridx = 0; gbc.gridy = 5; gbc.gridwidth = 2;
        gbc.anchor = GridBagConstraints.CENTER;
        JPanel buttonPanel = new JPanel(new FlowLayout());

        JButton addButton = new JButton("➕ Əlavə Et");
        addButton.addActionListener(e -> addCourse(idField, nameField, instructorField, creditsField, gradeField));

        JButton clearButton = new JButton("🗑️ Təmizlə");
        clearButton.addActionListener(e -> {
            idField.setText("");
            nameField.setText("");
            instructorField.setText("");
            creditsField.setText("");
            gradeField.setText("");
        });

        buttonPanel.add(addButton);
        buttonPanel.add(clearButton);
        panel.add(buttonPanel, gbc);

        return panel;
    }

    private JPanel createEnrollmentPanel() {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));

        // Title
        JLabel title = new JLabel("Tələbə Qeydiyyatı", SwingConstants.CENTER);
        title.setFont(new Font("Arial", Font.BOLD, 16));
        panel.add(title, BorderLayout.NORTH);

        // Selection panel
        JPanel selectionPanel = new JPanel(new GridBagLayout());
        selectionPanel.setBorder(BorderFactory.createTitledBorder("Qeydiyyat"));
        selectionPanel.setPreferredSize(new Dimension(500, 120));

        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(10, 10, 10, 10);

        gbc.gridx = 0; gbc.gridy = 0;
        selectionPanel.add(new JLabel("Tələbə seçin:"), gbc);
        gbc.gridx = 1;
        studentCombo = new JComboBox<>();
        studentCombo.setPreferredSize(new Dimension(250, 25));
        selectionPanel.add(studentCombo, gbc);

        gbc.gridx = 0; gbc.gridy = 1;
        selectionPanel.add(new JLabel("Kurs seçin:"), gbc);
        gbc.gridx = 1;
        courseCombo = new JComboBox<>();
        courseCombo.setPreferredSize(new Dimension(250, 25));
        selectionPanel.add(courseCombo, gbc);

        gbc.gridx = 0; gbc.gridy = 2; gbc.gridwidth = 2;
        gbc.anchor = GridBagConstraints.CENTER;
        JButton enrollButton = new JButton("✅ Qeydiyyat Et");
        enrollButton.addActionListener(e -> enrollStudent());
        selectionPanel.add(enrollButton, gbc);

        panel.add(selectionPanel, BorderLayout.CENTER);

        // Info area
        JPanel infoPanel = new JPanel(new BorderLayout());
        infoPanel.setBorder(BorderFactory.createTitledBorder("Qeydiyyat Məlumatı"));
        infoArea = new JTextArea(12, 50);
        infoArea.setEditable(false);
        infoArea.setFont(new Font("Consolas", Font.PLAIN, 12));
        JScrollPane scrollPane = new JScrollPane(infoArea);
        infoPanel.add(scrollPane, BorderLayout.CENTER);

        panel.add(infoPanel, BorderLayout.SOUTH);

        return panel;
    }

    private JPanel createStatisticsPanel() {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));

        // Title
        JLabel title = new JLabel("Sistem Statistikas", SwingConstants.CENTER);
        title.setFont(new Font("Arial", Font.BOLD, 16));
        panel.add(title, BorderLayout.NORTH);

        // Buttons
        JPanel buttonPanel = new JPanel(new FlowLayout());
        JButton statsButton = new JButton("📈 Statistika Göstər");
        statsButton.addActionListener(e -> showStatistics());

        JButton refreshButton = new JButton("🔄 Yenilə");
        refreshButton.addActionListener(e -> {
            refreshTables();
            updateCombos();
        });

        buttonPanel.add(statsButton);
        buttonPanel.add(refreshButton);

        panel.add(buttonPanel, BorderLayout.CENTER);

        // Stats area
        JTextArea statsArea = new JTextArea(20, 50);
        statsArea.setEditable(false);
        statsArea.setFont(new Font("Consolas", Font.PLAIN, 12));
        JScrollPane scrollPane = new JScrollPane(statsArea);
        panel.add(scrollPane, BorderLayout.SOUTH);

        return panel;
    }

    private void addStudent(JTextField nameField, JTextField ageField, JTextField gradeField) {
        try {
            String name = nameField.getText().trim();
            int age = Integer.parseInt(ageField.getText().trim());
            String grade = gradeField.getText().trim();

            if (name.isEmpty() || grade.isEmpty()) {
                JOptionPane.showMessageDialog(this, "Bütün sahələri doldurun!");
                return;
            }

            if (age < 0 || age > 150) {
                JOptionPane.showMessageDialog(this, "Yaş 0-150 arasında olmalıdır!");
                return;
            }

            Student student = new Student(name, age, grade);
            if (school.addStudent(student)) {
                refreshStudentsTable();
                updateCombos();
                clearStudentForm(nameField, ageField, gradeField);
                statusLabel.setText("✓ " + name + " tələbə kimi əlavə edildi");
                JOptionPane.showMessageDialog(this, name + " uğurla əlavə edildi!");
            } else {
                JOptionPane.showMessageDialog(this, "Tələbə artıq mövcuddur!");
            }

        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(this, "Yaş rəqəm olmalıdır!");
        }
    }

    private void addCourse(JTextField idField, JTextField nameField, JTextField instructorField,
                          JTextField creditsField, JTextField gradeField) {
        try {
            String courseId = idField.getText().trim();
            String name = nameField.getText().trim();
            String instructor = instructorField.getText().trim();
            int credits = Integer.parseInt(creditsField.getText().trim());
            double grade = Double.parseDouble(gradeField.getText().trim());

            if (courseId.isEmpty() || name.isEmpty() || instructor.isEmpty()) {
                JOptionPane.showMessageDialog(this, "Bütün sahələri doldurun!");
                return;
            }

            if (credits < 1 || credits > 10) {
                JOptionPane.showMessageDialog(this, "Kreditlər 1-10 arasında olmalıdır!");
                return;
            }

            if (grade < 0 || grade > 100) {
                JOptionPane.showMessageDialog(this, "Qiymət 0-100 arasında olmalıdır!");
                return;
            }

            if (school.getCourseById(courseId).isPresent()) {
                JOptionPane.showMessageDialog(this, "Bu Kurs ID artıq mövcuddur!");
                return;
            }

            Course course = new Course(courseId, name, instructor, credits, grade);
            if (school.addCourse(course)) {
                refreshCoursesTable();
                updateCombos();
                clearCourseForm(idField, nameField, instructorField, creditsField, gradeField);
                statusLabel.setText("✓ " + name + " kursu əlavə edildi");
                JOptionPane.showMessageDialog(this, name + " kursu uğurla əlavə edildi!");
            }

        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(this, "Kreditlər və Qiymət rəqəm olmalıdır!");
        }
    }

    private void enrollStudent() {
        String studentText = (String) studentCombo.getSelectedItem();
        String courseText = (String) courseCombo.getSelectedItem();

        if (studentText == null || courseText == null) {
            JOptionPane.showMessageDialog(this, "Tələbə və kurs seçin!");
            return;
        }

        try {
            int studentId = Integer.parseInt(studentText.split("\\(ID: ")[1].split(",")[0]);
            String courseId = courseText.split("\\(")[0].trim();

            var studentOpt = school.getStudentById(studentId);
            var courseOpt = school.getCourseById(courseId);

            if (studentOpt.isPresent() && courseOpt.isPresent()) {
                Student student = studentOpt.get();
                Course course = courseOpt.get();

                if (school.enrollStudentInCourse(student, course)) {
                    refreshTables();
                    statusLabel.setText("✓ " + student.getName() + " " + course.getName() + " kursuna qeydiyyat olundu");
                    showEnrollmentInfo(student, course);
                    JOptionPane.showMessageDialog(this, student.getName() + " " + course.getName() + " kursuna qeydiyyat olundu!");
                } else {
                    JOptionPane.showMessageDialog(this, "Qeydiyyat uğursuz oldu!");
                }
            } else {
                JOptionPane.showMessageDialog(this, "Tələbə və ya kurs tapılmadı!");
            }

        } catch (Exception e) {
            JOptionPane.showMessageDialog(this, "Qeydiyyat zamanı xəta baş verdi!");
        }
    }

    private void showEnrollmentInfo(Student student, Course course) {
        String info = String.format(
            "╔══════════════════════════════════════════════════════════════╗\n" +
            "║                        QEYDİYYAT MƏLUMATI                     ║\n" +
            "╠══════════════════════════════════════════════════════════════╣\n" +
            "║ Tələbə: %s (ID: %d)\n" +
            "║ Kurs: %s (ID: %s)\n" +
            "║ Müəllim: %s\n" +
            "║ Kreditlər: %d\n" +
            "║ Qiymət: %.1f\n" +
            "║ Tələbənin cari kurs sayı: %d\n" +
            "║ Kursda olan tələbə sayı: %d\n" +
            "╚══════════════════════════════════════════════════════════════╝",
            student.getName(), student.getId(),
            course.getName(), course.getCourseId(),
            course.getInstructor(), course.getCredits(),
            course.getGrade(),
            student.getCourses().size(),
            course.getStudents().size()
        );

        infoArea.setText(info);
    }

    private void showStudentDetails() {
        int selectedRow = studentsTable.getSelectedRow();
        if (selectedRow >= 0) {
            int studentId = (Integer) studentsTableModel.getValueAt(selectedRow, 0);
            var studentOpt = school.getStudentById(studentId);

            if (studentOpt.isPresent()) {
                Student student = studentOpt.get();
                String details = student.getInfo();

                if (!student.getCourses().isEmpty()) {
                    details += "\n\nKurslar:\n";
                    for (Course course : student.getCourses()) {
                        details += String.format("• %s (%s) - %.1f\n",
                            course.getName(), course.getInstructor(), course.getGrade());
                    }
                }

                showDetailsDialog("Tələbə Detalları - " + student.getName(), details);
            }
        }
    }

    private void showCourseDetails() {
        int selectedRow = coursesTable.getSelectedRow();
        if (selectedRow >= 0) {
            String courseId = (String) coursesTableModel.getValueAt(selectedRow, 0);
            var courseOpt = school.getCourseById(courseId);

            if (courseOpt.isPresent()) {
                Course course = courseOpt.get();
                String details = course.getCourseInfo();

                if (!course.getStudents().isEmpty()) {
                    details += "\n\nTələbələr:\n";
                    for (Student student : course.getStudents()) {
                        details += String.format("• %s (ID: %d) - GPA: %.2f\n",
                            student.getName(), student.getId(), student.getGpa());
                    }
                }

                showDetailsDialog("Kurs Detalları - " + course.getName(), details);
            }
        }
    }

    private void showStatistics() {
        StringBuilder stats = new StringBuilder();
        stats.append("╔══════════════════════════════════════════════════════════════╗\n");
        stats.append("║                        SİSTEM STATİSTİKASI                   ║\n");
        stats.append("╠══════════════════════════════════════════════════════════════╣\n");
        stats.append(String.format("║ Məktəb: %s\n", school.getSchoolName()));
        stats.append(String.format("║ Ümumi tələbə sayı: %d\n", school.getStudents().size()));
        stats.append(String.format("║ Ümumi kurs sayı: %d\n", school.getCourses().size()));
        stats.append(String.format("║ Ümumi qeydiyyat sayı: %d\n", school.getTotalEnrollments()));
        stats.append(String.format("║ Orta GPA: %.2f\n", school.getAverageGPA()));

        Student topStudent = school.getTopStudent();
        if (topStudent != null) {
            stats.append(String.format("║ Ən yüksək GPA: %.2f (%s)\n",
                topStudent.getGpa(), topStudent.getName()));
        }

        stats.append("╚══════════════════════════════════════════════════════════════╝\n\n");

        // GPA distribution
        stats.append("GPA PAYLANMASI:\n");
        int[] gpaRanges = new int[4];
        for (Student student : school.getStudents()) {
            double gpa = student.getGpa();
            if (gpa <= 50) gpaRanges[0]++;
            else if (gpa <= 70) gpaRanges[1]++;
            else if (gpa <= 85) gpaRanges[2]++;
            else gpaRanges[3]++;
        }

        stats.append(String.format("• 0-50: %d tələbə\n", gpaRanges[0]));
        stats.append(String.format("• 51-70: %d tələbə\n", gpaRanges[1]));
        stats.append(String.format("• 71-85: %d tələbə\n", gpaRanges[2]));
        stats.append(String.format("• 86-100: %d tələbə\n", gpaRanges[3]));

        // Update the stats area in the statistics panel
        Component[] components = getContentPane().getComponents();
        for (Component comp : components) {
            if (comp instanceof JTabbedPane) {
                JTabbedPane tabbedPane = (JTabbedPane) comp;
                for (int i = 0; i < tabbedPane.getTabCount(); i++) {
                    if ("📊 Statistika".equals(tabbedPane.getTitleAt(i))) {
                        Component tabComp = tabbedPane.getComponentAt(i);
                        if (tabComp instanceof JPanel) {
                            Component[] tabComponents = ((JPanel) tabComp).getComponents();
                            for (Component tabSubComp : tabComponents) {
                                if (tabSubComp instanceof JScrollPane) {
                                    Component view = ((JScrollPane) tabSubComp).getViewport().getView();
                                    if (view instanceof JTextArea) {
                                        ((JTextArea) view).setText(stats.toString());
                                        break;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
    }

    private void showAbout() {
        JOptionPane.showMessageDialog(this,
            "Tələbə İdarəçiliyi Sistemi v2\n\n" +
            "Java OOP GUI Tətbiqi\n\n" +
            "OOP Konseptləri:\n" +
            "• Klasslar və Obyektlər\n" +
            "• İncapsulation\n" +
            "• İrs (Inheritance)\n" +
            "• Polimorfizm\n\n" +
            "Swing GUI Framework istifadə olunub",
            "Haqqında",
            JOptionPane.INFORMATION_MESSAGE);
    }

    private void updateCombos() {
        studentCombo.removeAllItems();
        courseCombo.removeAllItems();

        for (Student student : school.getStudents()) {
            studentCombo.addItem(String.format("%s (ID: %d, %s)",
                student.getName(), student.getId(), student.getGrade()));
        }

        for (Course course : school.getCourses()) {
            courseCombo.addItem(String.format("%s (%s)",
                course.getName(), course.getInstructor()));
        }
    }

    private void refreshStudentsTable() {
        studentsTableModel.setRowCount(0);
        for (Student student : school.getStudents()) {
            studentsTableModel.addRow(new Object[]{
                student.getId(),
                student.getName(),
                student.getAge(),
                student.getGrade(),
                String.format("%.2f", student.getGpa()),
                student.getCourses().size()
            });
        }
    }

    private void refreshCoursesTable() {
        coursesTableModel.setRowCount(0);
        for (Course course : school.getCourses()) {
            coursesTableModel.addRow(new Object[]{
                course.getCourseId(),
                course.getName(),
                course.getInstructor(),
                course.getCredits(),
                String.format("%.1f", course.getGrade()),
                course.getStudents().size()
            });
        }
    }

    private void refreshTables() {
        refreshStudentsTable();
        refreshCoursesTable();
    }

    private void clearStudentForm(JTextField... fields) {
        for (JTextField field : fields) {
            field.setText("");
        }
    }

    private void clearCourseForm(JTextField... fields) {
        for (JTextField field : fields) {
            field.setText("");
        }
    }

    private void searchStudents(String query) {
        if (query.trim().isEmpty()) {
            refreshStudentsTable();
            return;
        }

        studentsTableModel.setRowCount(0);
        String lowerQuery = query.toLowerCase();

        for (Student student : school.getStudents()) {
            if (student.getName().toLowerCase().contains(lowerQuery) ||
                String.valueOf(student.getId()).contains(lowerQuery) ||
                student.getGrade().toLowerCase().contains(lowerQuery)) {

                studentsTableModel.addRow(new Object[]{
                    student.getId(),
                    student.getName(),
                    student.getAge(),
                    student.getGrade(),
                    String.format("%.2f", student.getGpa()),
                    student.getCourses().size()
                });
            }
        }
    }

    private void searchCourses(String query) {
        if (query.trim().isEmpty()) {
            refreshCoursesTable();
            return;
        }

        coursesTableModel.setRowCount(0);
        String lowerQuery = query.toLowerCase();

        for (Course course : school.getCourses()) {
            if (course.getName().toLowerCase().contains(lowerQuery) ||
                course.getCourseId().toLowerCase().contains(lowerQuery) ||
                course.getInstructor().toLowerCase().contains(lowerQuery)) {

                coursesTableModel.addRow(new Object[]{
                    course.getCourseId(),
                    course.getName(),
                    course.getInstructor(),
                    course.getCredits(),
                    String.format("%.1f", course.getGrade()),
                    course.getStudents().size()
                });
            }
        }
    }

    private void loadDemoData() {
        // Demo courses
        Course pythonCourse = new Course("CS101", "Python Proqramlaşdırılması", "Hüseyn Əliyev", 3, 85.0);
        Course javaCourse = new Course("CS102", "Java Proqramlaşdırılması", "Aynur Osmanova", 3, 88.0);
        Course databaseCourse = new Course("CS103", "Verilənlər Bazası", "Vəli Qasımov", 4, 90.0);
        Course webCourse = new Course("CS104", "Web Development", "Ləman İbrahimova", 3, 82.0);

        school.addCourse(pythonCourse);
        school.addCourse(javaCourse);
        school.addCourse(databaseCourse);
        school.addCourse(webCourse);

        // Demo students
        Student student1 = new Student("Məryəm Ələkbərov", 20, "2-ci kurs");
        Student student2 = new Student("Rəşid İsmayılov", 19, "1-ci kurs");
        Student student3 = new Student("Aynur Quliyeva", 21, "3-cü kurs");
        Student student4 = new Student("Elçin Məmmədov", 18, "1-ci kurs");

        school.addStudent(student1);
        school.addStudent(student2);
        school.addStudent(student3);
        school.addStudent(student4);

        // Demo enrollments
        school.enrollStudentInCourse(student1, pythonCourse);
        school.enrollStudentInCourse(student1, databaseCourse);
        school.enrollStudentInCourse(student2, pythonCourse);
        school.enrollStudentInCourse(student2, javaCourse);
        school.enrollStudentInCourse(student3, javaCourse);
        school.enrollStudentInCourse(student3, databaseCourse);
        school.enrollStudentInCourse(student3, webCourse);
        school.enrollStudentInCourse(student4, pythonCourse);
        school.enrollStudentInCourse(student4, webCourse);

        refreshTables();
    }

    private void showDetailsDialog(String title, String content) {
        JDialog dialog = new JDialog(this, title, true);
        dialog.setSize(600, 400);
        dialog.setLocationRelativeTo(this);

        JTextArea textArea = new JTextArea(content);
        textArea.setEditable(false);
        textArea.setFont(new Font("Consolas", Font.PLAIN, 12));

        JScrollPane scrollPane = new JScrollPane(textArea);
        dialog.add(scrollPane);

        dialog.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new StudentManagementGUI().setVisible(true);
        });
    }
}