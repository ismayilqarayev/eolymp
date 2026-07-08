# -*- coding: utf-8 -*-
import math

# ---------- 27. Faiz artımı ----------
def problem_27(value, percent):
    return value + value * percent / 100

# value, percent = map(int, input().split())
# print(problem_27(value, percent))

print("27:", problem_27(200, 20))  # 240.0
