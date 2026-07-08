# -*- coding: utf-8 -*-
import math

# ---------- 14. Cüt ədədlərin cəmi ----------
def problem_14(n):
    return sum(i for i in range(1, n + 1) if i % 2 == 0)

# n = int(input())
# print(problem_14(n))

print("14:", problem_14(10))  # 30
