# -*- coding: utf-8 -*-
import math

# ---------- 12. Üç ədədin ortası ----------
def problem_12(a, b, c):
    return round((a + b + c) / 3, 2)

# a, b, c = map(int, input().split())
# print(problem_12(a, b, c))

print("12:", problem_12(4, 7, 10))  # 7.0
