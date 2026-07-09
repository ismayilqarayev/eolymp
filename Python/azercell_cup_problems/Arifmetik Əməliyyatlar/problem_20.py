# -*- coding: utf-8 -*-
import math

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
