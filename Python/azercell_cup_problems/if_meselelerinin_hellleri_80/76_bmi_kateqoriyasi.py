# 76. BMI kateqoriyası
# Bədən kütlə indeksi (BMI) daxil edilir. 18.5-dən azdırsa "Arıq", 18.5-24.9 "Normal", 25-29.9 "Artıq çəkili", 30-dan yuxarı "Piylənmə".
#
# Giriş:  Bir kəsr ədəd (BMI)
# Çıxış:  Uyğun kateqoriya
# Nümunə: 22.5 → Normal

bmi = float(input())
if bmi < 18.5:
    print("Arıq")
elif bmi <= 24.9:
    print("Normal")
elif bmi <= 29.9:
    print("Artıq çəkili")
else:
    print("Piylənmə")
