# -*- coding: utf-8 -*-
# ==========================================================
# Azercell Cup Hazırlıq (Python): Arifmetik Əməliyyatlar
# 30 Məsələnin Həll Kodları (nümunə giriş/çıxışlara uyğun)
# ==========================================================

import math


# ---------- 1. İki ədədin cəmi ----------
def problem_1(a, b):
    return a + b

# a, b = map(int, input().split())
# print(problem_1(a, b))

print("1:", problem_1(12, 8))  # 20


# ---------- 2. Fərq ----------
def problem_2(a, b):
    return a - b

# a, b = map(int, input().split())
# print(problem_2(a, b))

print("2:", problem_2(10, 4))  # 6


# ---------- 3. Hasil ----------
def problem_3(a, b):
    return a * b

# a, b = map(int, input().split())
# print(problem_3(a, b))

print("3:", problem_3(6, 7))  # 42


# ---------- 4. Bölmə (float) ----------
def problem_4(a, b):
    return a / b

# a, b = map(int, input().split())
# print(problem_4(a, b))

print("4:", problem_4(9, 2))  # 4.5


# ---------- 5. Tam bölmə (floor division) ----------
def problem_5(a, b):
    return a // b

# a, b = map(int, input().split())
# print(problem_5(a, b))

print("5:", problem_5(9, 2))  # 4


# ---------- 6. Qalıqla bölmə ----------
def problem_6(a, b):
    return a % b

# a, b = map(int, input().split())
# print(problem_6(a, b))

print("6:", problem_6(17, 5))  # 2


# ---------- 7. Qüvvətə yüksəltmə ----------
def problem_7(a, b):
    return a ** b

# a, b = map(int, input().split())
# print(problem_7(a, b))

print("7:", problem_7(2, 10))  # 1024


# ---------- 8. Əməliyyatların ardıcıllığı ----------
def problem_8(a, b, c):
    return a + b * c

# a, b, c = map(int, input().split())
# print(problem_8(a, b, c))

print("8:", problem_8(2, 3, 4))  # 14


# ---------- 9. Mötərizəli ifadə ----------
def problem_9(a, b, c):
    return (a + b) * c

# a, b, c = map(int, input().split())
# print(problem_9(a, b, c))

print("9:", problem_9(2, 3, 4))  # 20


# ---------- 10. Mütləq qiymət ----------
def problem_10(x):
    return abs(x)

# x = int(input())
# print(problem_10(x))

print("10:", problem_10(-15))  # 15


# ---------- 11. Kvadrat kök ----------
def problem_11(x):
    return math.sqrt(x)

# x = int(input())
# print(problem_11(x))

print("11:", problem_11(16))  # 4.0


# ---------- 12. Üç ədədin ortası ----------
def problem_12(a, b, c):
    return round((a + b + c) / 3, 2)

# a, b, c = map(int, input().split())
# print(problem_12(a, b, c))

print("12:", problem_12(4, 7, 10))  # 7.0


# ---------- 13. Mənfiyə çevirmək ----------
def problem_13(x):
    return -x

# x = int(input())
# print(problem_13(x))

print("13:", problem_13(7))  # -7


# ---------- 14. Cüt ədədlərin cəmi ----------
def problem_14(n):
    return sum(i for i in range(1, n + 1) if i % 2 == 0)

# n = int(input())
# print(problem_14(n))

print("14:", problem_14(10))  # 30


# ---------- 15. Faktorial ----------
def problem_15(n):
    return math.factorial(n)

# n = int(input())
# print(problem_15(n))

print("15:", problem_15(5))  # 120


# ---------- 16. ƏBOB (GCD) ----------
def problem_16(a, b):
    return math.gcd(a, b)

# a, b = map(int, input().split())
# print(problem_16(a, b))

print("16:", problem_16(12, 18))  # 6


# ---------- 17. ƏKOB (LCM) ----------
def problem_17(a, b):
    return a * b // math.gcd(a, b)

# a, b = map(int, input().split())
# print(problem_17(a, b))

print("17:", problem_17(4, 6))  # 12


# ---------- 18. Kub tap ----------
def problem_18(x):
    return x ** 3

# x = int(input())
# print(problem_18(x))

print("18:", problem_18(3))  # 27


# ---------- 19. Üç ədədin cəminin kvadratı ----------
def problem_19(a, b, c):
    return (a + b + c) ** 2

# a, b, c = map(int, input().split())
# print(problem_19(a, b, c))

print("19:", problem_19(1, 2, 3))  # 36


# ---------- 20. Toplama və vurmanın müqayisəsi ----------
def problem_20(a, b):
    s, p = a + b, a * b
    if p > s:
        return "Hasil böyükdür"
    elif s > p:
        return "Cəm böyükdür"
    return "Bərabərdir"

# a, b = map(int, input().split())
# print(problem_20(a, b))

print("20:", problem_20(2, 5))  # Hasil böyükdür


# ---------- 21. Dəyirmi say (round) əməliyyatı ----------
def problem_21(a, b):
    return round(a / b)

# a, b = map(int, input().split())
# print(problem_21(a, b))

print("21:", problem_21(22, 7))  # 3


# ---------- 22. Neqativ qüvvət ----------
def problem_22(x, n):
    return x ** (-n)

# x, n = map(int, input().split())
# print(problem_22(x, n))

print("22:", problem_22(2, 3))  # 0.125


# ---------- 23. Divmod funksiyası ----------
def problem_23(a, b):
    return divmod(a, b)

# a, b = map(int, input().split())
# print(problem_23(a, b))

print("23:", problem_23(23, 5))  # (4, 3)


# ---------- 24. Silsilədən ədədlərin cəmi ----------
def problem_24(a, b):
    return sum(range(a, b + 1))

# a, b = map(int, input().split())
# print(problem_24(a, b))

print("24:", problem_24(1, 100))  # 5050


# ---------- 25. Rəqəmlərin hasili ----------
def problem_25(n):
    result = 1
    for digit in str(n):
        result *= int(digit)
    return result

# n = input()
# print(problem_25(n))

print("25:", problem_25(234))  # 24


# ---------- 26. Dörd əməliyyatın nəticəsi ----------
def problem_26(a, b):
    return [a + b, a - b, a * b, a / b]

# a, b = map(int, input().split())
# for r in problem_26(a, b):
#     print(r)

print("26:")
for r in problem_26(10, 3):
    print(r)


# ---------- 27. Faiz artımı ----------
def problem_27(value, percent):
    return value + value * percent / 100

# value, percent = map(int, input().split())
# print(problem_27(value, percent))

print("27:", problem_27(200, 20))  # 240.0


# ---------- 28. Composite ifadə ----------
def problem_28(a, b):
    return a**2 + b**2 - 2*a*b

# a, b = map(int, input().split())
# print(problem_28(a, b))

print("28:", problem_28(7, 4))  # 9


# ---------- 29. Ədədin tərsi (reciprocal) ----------
def problem_29(x):
    if x == 0:
        return "Xəta"
    return 1 / x

# x = int(input())
# print(problem_29(x))

print("29:", problem_29(4))  # 0.25


# ---------- 30. Zəncirvari hesablama ----------
def problem_30(a, b):
    return (a + b) * (a - b)

# a, b = map(int, input().split())
# print(problem_30(a, b))

print("30:", problem_30(9, 5))  # 56