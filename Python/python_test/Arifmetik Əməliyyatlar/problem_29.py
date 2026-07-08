# -*- coding: utf-8 -*-
import math

# ---------- 29. Ədədin tərsi (reciprocal) ----------
def problem_29(x):
    if x == 0:
        return "Xəta"
    return 1 / x

# x = int(input())
# print(problem_29(x))

print("29:", problem_29(4))  # 0.25
