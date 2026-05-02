# Java OOP Student Management System v2

Bu layihə Java proqramlaşdırma dilində OOP (Object-Oriented Programming) prinsiplərini istifadə edərək hazırlanmış Tələbə İdarəçiliyi Sistemi GUI tətbiqidir.

## 🏗️ OOP Konseptləri

### Klasslar:
- **Student**: Tələbə məlumatlarını idarə edir
- **Course**: Kurs məlumatlarını idarə edir
- **School**: Məktəb sistemini idarə edir
- **StudentManagementGUI**: Swing GUI tətbiqi

### OOP Prinsipləri:
- ✅ **Encapsulation**: Private sahələr və public metodlar
- ✅ **Inheritance**: JFrame-dən irs
- ✅ **Polymorphism**: Override metodları
- ✅ **Abstraction**: Kompleks əməliyyatları sadə interfeysə çevirmək

## 🚀 Kompilyasiya və İşə Salma

### Tələblər:
- Java 8 və ya daha yüksək versiya (Swing built-in)

### 1. Kompilyasiya:
```bash
cd Java_OOP_GUI_v2
javac *.java
```

### 2. GUI tətbiqini işə salma:
```bash
java StudentManagementGUI
```

### 3. Windows GUI rejimində:
```bash
javaw StudentManagementGUI
```
və ya `run_gui.bat` faylını klikləyin.

### 4. Test tətbiqi:
```bash
java TestApp
```

## 📱 GUI Xüsusiyyətləri

### 👨‍🎓 Tələbələr Tab-ı:
- Yeni tələbə əlavə etmə
- Tələbələri cədvəldə göstərmə
- Axtarış funksiyası
- Double-click ilə detallı məlumat

### 📚 Kurslar Tab-ı:
- Yeni kurs əlavə etmə
- Kursları cədvəldə göstərmə
- Axtarış funksiyası
- Double-click ilə detallı məlumat

### 📝 Qeydiyyat Tab-ı:
- Tələbə və kurs seçmə
- Qeydiyyat etmə
- Qeydiyyat məlumatlarını göstərmə

### 📊 Statistika Tab-ı:
- Sistem statistikaları
- GPA paylanması
- Ən yüksək GPA olan tələbə
- Ümumi məlumatlar

## 🧪 Test Nəticələri

```
🧪 Testing Java OOP Student Management System v2...
✅ School created: Test Məktəbi
✅ Students created
✅ Students added to school: 2
✅ Courses created
✅ Courses added to school: 2
✅ Students enrolled in courses
✅ Student by ID 1: Test Tələbə 1
✅ Course by ID TEST101: Test Kurs 1
✅ Student 1 GPA: 87,50
✅ Student 2 GPA: 85,00
🎉 All tests passed! Java OOP system v2 is working perfectly.
```

## 📋 Texniki Detallar

- **Framework**: Java Swing (Cross-platform GUI)
- **OOP Features**: Encapsulation, Inheritance, Polymorphism
- **Data Structures**: ArrayList, HashMap concepts
- **GUI Components**: JTable, JTabbedPane, JTextField, JButton
- **Event Handling**: ActionListener, MouseListener

## 🎯 Demo Məlumatları

Tətbiq avtomatik olaraq demo məlumatları yükləyir:
- 4 kurs
- 4 tələbə
- Müxtəlif qeydiyyatlar

Layihə tamamilə yenidən yazılmış və test edilmişdir!