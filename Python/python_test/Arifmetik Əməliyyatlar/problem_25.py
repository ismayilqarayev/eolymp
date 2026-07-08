# -*- coding: utf-8 -*-
import math

# ---------- 25. Rəqəmlərin hasili ----------
def problem_25(n):
    result = 1
    for digit in str(n):
        result *= int(digit)
    return result

# n = input()
# print(problem_25(n))

print("25:", problem_25(234))  # 24
