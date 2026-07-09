# -*- coding: utf-8 -*-
import math

# ---------- 24. Silsilədən ədədlərin cəmi ----------
def problem_24(a, b):
    return sum(range(a, b + 1))

# a, b = map(int, input().split())
# print(problem_24(a, b))

print("24:", problem_24(1, 100))  # 5050
