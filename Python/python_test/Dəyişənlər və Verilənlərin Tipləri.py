# -*- coding: utf-8 -*-
# ==========================================================
# Azercell Cup Hazırlıq (Python): Dəyişənlər və Verilənlərin Tipləri
# YENİ 30 Məsələnin Həll Kodları (nümunə giriş/çıxışlara uyğun)
# ==========================================================


# ---------- 1. İki ədədin ortası ----------
def problem_1(a, b):
    return (a + b) / 2

# a, b = map(int, input().split())
# print(problem_1(a, b))

print("1:", problem_1(4, 7))  # 5.5


# ---------- 2. Sətrin uzunluğu ----------
def problem_2(s):
    return len(s)

# s = input()
# print(problem_2(s))

print("2:", problem_2("Azercell"))  # 8


# ---------- 3. Tip adı çap et ----------
def problem_3(value):
    return type(value)

# s = input()
# x = int(s)
# print(type(x))

print("3:", problem_3(17))  # <class 'int'>


# ---------- 4. Kəsr hissəni tap ----------
def problem_4(x):
    return round(x - int(x), 2)

# x = float(input())
# print(problem_4(x))

print("4:", problem_4(12.756))  # 0.76


# ---------- 5. Simvolu böyütmək ----------
def problem_5(char):
    return char.upper()

# c = input()
# print(problem_5(c))

print("5:", problem_5("a"))  # A


# ---------- 6. Cüt yoxsa tək? ----------
def problem_6(n):
    return "Cüt" if n % 2 == 0 else "Tək"

# n = int(input())
# print(problem_6(n))

print("6:", problem_6(13))  # Tək


# ---------- 7. String-dən rəqəm çıxarmaq ----------
def problem_7(s):
    return "".join(ch for ch in s if ch.isdigit())

# s = input()
# print(problem_7(s))

print("7:", problem_7("a1b2c3"))  # 123


# ---------- 8. İki dəyişənin hasili tipi ----------
def problem_8(a, b):
    result = a * b
    return result, type(result).__name__

# a, b = input().split()
# a, b = int(a), float(b)
# res, t = problem_8(a, b)
# print(res, t)

res, t = problem_8(4, 2.5)
print("8:", res, t)  # 10.0 float


# ---------- 9. Boolean-a çevirmək ----------
def problem_9(n):
    return bool(n)

# n = int(input())
# print(problem_9(n))

print("9:", problem_9(0))  # False


# ---------- 10. Sətir təkrarı ----------
def problem_10(s, n):
    return s * n

# s, n = input().split()
# n = int(n)
# print(problem_10(s, n))

print("10:", problem_10("ab", 3))  # ababab


# ---------- 11. Onluqdan səkkizliyə ----------
def problem_11(n):
    return oct(n)

# n = int(input())
# print(problem_11(n))

print("11:", problem_11(8))  # 0o10


# ---------- 12. Böyük hərflə başlayır? ----------
def problem_12(word):
    return "Bəli" if word[0].isupper() else "Xeyr"

# word = input()
# print(problem_12(word))

print("12:", problem_12("Baku"))  # Bəli


# ---------- 13. Üç ədədin hasili ----------
def problem_13(a, b, c):
    return a * b * c

# a, b, c = map(int, input().split())
# print(problem_13(a, b, c))

print("13:", problem_13(2, 3, 4))  # 24


# ---------- 14. Faiz hesablama ----------
def problem_14(part, whole):
    return round(part / whole * 100, 2)

# part, whole = map(int, input().split())
# print(problem_14(part, whole))

print("14:", problem_14(25, 200))  # 12.5


# ---------- 15. Siyahının orta qiyməti ----------
def problem_15(numbers):
    return sum(numbers) / len(numbers)

# numbers = list(map(int, input().split()))
# print(problem_15(numbers))

print("15:", problem_15([2, 4, 6, 8]))  # 5.0


# ---------- 16. Dəyişənin id-si ----------
def problem_16(a, b):
    return a is b

# a, b = map(int, input().split())
# print(problem_16(a, b))

print("16:", problem_16(5, 5))  # True (kiçik int-lər Python-da keşlənir)


# ---------- 17. Tip çevrilməsi zamanı xəta ----------
def problem_17(s):
    try:
        return int(s)
    except ValueError:
        return "Xəta"

# s = input()
# print(problem_17(s))

print("17:", problem_17("abc"))  # Xəta


# ---------- 18. Kompleks ədəd ----------
def problem_18(real, imag):
    z = complex(real, imag)
    return abs(z)

# real, imag = map(int, input().split())
# print(problem_18(real, imag))

print("18:", problem_18(3, 4))  # 5.0


# ---------- 19. Sətri əks çevirmək ----------
def problem_19(s):
    return s[::-1]

# s = input()
# print(problem_19(s))

print("19:", problem_19("salam"))  # malas


# ---------- 20. Dəyişənlərin cəmi — string birləşməsi ----------
def problem_20(s1, s2):
    return s1 + s2

# s1, s2 = input().split()
# print(problem_20(s1, s2))

print("20:", problem_20("Azer", "cell"))  # Azercell


# ---------- 21. Tam ədədin rəqəmlərinin cəmi ----------
def problem_21(n):
    return sum(int(digit) for digit in str(n))

# n = input()
# print(problem_21(n))

print("21:", problem_21(2024))  # 8


# ---------- 22. Float-ın yuvarlaqlaşdırılması ----------
def problem_22(x):
    return round(x)

# x = float(input())
# print(problem_22(x))

print("22:", problem_22(7.6))  # 8


# ---------- 23. Boş sətir yoxlaması ----------
def problem_23(s):
    return "Boşdur" if s == "" else "Boş deyil"

# s = input()
# print(problem_23(s))

print("23:", problem_23(""))  # Boşdur


# ---------- 24. İki dəyişənin müqayisəsi (tip fərqli) ----------
def problem_24():
    return "5" == 5

# print(problem_24())

print("24:", problem_24())  # False


# ---------- 25. None ilə əməliyyat ----------
def problem_25():
    x = None
    try:
        return x + 1
    except TypeError:
        return "TypeError"

print("25:", problem_25())  # TypeError


# ---------- 26. Tuple-dan dəyişənlərə ayırma (unpacking) ----------
def problem_26(t):
    a, b = t
    return a + b

# a, b = map(int, input().split())
# print(problem_26((a, b)))

print("26:", problem_26((3, 7)))  # 10


# ---------- 27. Sətirdə boşluqların sayı ----------
def problem_27(s):
    return s.count(" ")

# s = input()
# print(problem_27(s))

print("27:", problem_27("Azercell Cup 2026"))  # 2


# ---------- 28. Dəyişən tipini dəyişdirmək (yenidən mənimsətmə) ----------
def problem_28():
    x = 5
    x = "beş"
    return type(x)

print("28:", problem_28())  # <class 'str'>


# ---------- 29. Böyük ədədin oxunaqlı formatı ----------
def problem_29(n):
    return f"{n:,}"

# n = int(input())
# print(problem_29(n))

print("29:", problem_29(1234567))  # 1,234,567


# ---------- 30. Dinamik tipləşdirmə nümayişi ----------
def problem_30():
    results = []
    x = 10
    results.append(type(x))
    x = 3.5
    results.append(type(x))
    x = "on"
    results.append(type(x))
    return results

print("30:")
for t in problem_30():
    print(t)