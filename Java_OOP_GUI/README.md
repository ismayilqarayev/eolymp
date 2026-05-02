# Java OOP Student Management System

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
cd Java_OOP_GUI
javac *.java
```

### 2. İşə salma:
```bash
java StudentManagementGUI
```

### 3. Windows GUI rejimində işə salma:
```bash
javaw StudentManagementGUI
```
və ya `run_gui.bat` faylını klikləyin.

### 4. Test tətbiqi:
```bash
java TestApp
```

## 📋 Xüsusiyyətlər

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
- Dropdown menyudan tələbə və kurs seçimi
- Bir kliklə qeydiyyat
- Qeydiyyat məlumatlarının real-vaxt göstərilməsi

### 📊 Hesabatlar Tab-ı:
- Sistem statistikaları
- GPA analizi
- Məlumatların saxlanması/yüklənməsi

## 🎨 UI Xüsusiyyətləri

- **Modern Dizayn**: JavaFX ilə professional görünüş
- **Responsive Layout**: Pəncərə ölçüsünə uyğunlaşma
- **Azerbaijani Dil**: Bütün interfeys Azərbaycan dilində
- **Form Validation**: Səhv məlumatların qarşısını alma
- **Real-time Updates**: Məlumatların avtomatik yenilənməsi

## 📁 Fayl Strukturu

```
Java_OOP_GUI/
├── Student.java              # Tələbə klassi
├── Course.java               # Kurs klassi
├── School.java               # Məktəb klassi
├── StudentManagementGUI.java # Əsas GUI tətbiqi
├── module-info.java          # Java modulu tərifi
└── README.md                 # Bu fayl
```

## 🔧 Texniki Detallar

- **Dil**: Java 11+
- **GUI Framework**: JavaFX
- **Paradigma**: Object-Oriented Programming
- **Data Structures**: ArrayList, ObservableList
- **UI Components**: TableView, TextField, ComboBox, Button, TabPane

## 🎯 Demo Məlumatlar

Tətbiq avtomatik olaraq demo məlumatlarla başlayır:
- 3 tələbə
- 3 kurs
- Öncədən edilmiş qeydiyyatlar

Bu məlumatlar tətbiqin funksiyalarını test etmək üçündür.

---

**Tərtibatçı**: GitHub Copilot
**Dil**: Azərbaycan
**Tarix**: 2026-cı il