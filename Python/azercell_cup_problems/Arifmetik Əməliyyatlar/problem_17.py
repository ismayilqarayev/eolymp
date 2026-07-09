# -*- coding: utf-8 -*-
import math

# ---------- 17. ƏKOB (LCM) ----------
def problem_17(a, b):
    return a * b // math.gcd(a, b)

# a, b = map(int, input().split())
# print(problem_17(a, b))

print("17:", problem_17(4, 6))  # 12
