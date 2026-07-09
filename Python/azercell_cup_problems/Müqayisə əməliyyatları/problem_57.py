"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 57: BMI (bədən kütlə indeksi) verilib. 18.5-dən az — "Arıq", 18.5-25 arası — "Normal", 25-dən çox — "Artıq çəki" yazın.

Nümunə giriş:  23.4
Nümunə çıxış:  Normal

İzah: elif zənciri BMI dəyərini standart tibbi aralıqlarla ardıcıl müqayisə edir.
"""

bmi = float(input())
if bmi < 18.5:
    print("Arıq")
elif bmi <= 25:
    print("Normal")
else:
    print("Artıq çəki")
