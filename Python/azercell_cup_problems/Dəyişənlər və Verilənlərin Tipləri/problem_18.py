# -*- coding: utf-8 -*-

# ---------- 18. Kompleks ədəd ----------
def problem_18(real, imag):
    z = complex(real, imag)
    return abs(z)

# real, imag = map(int, input().split())
# print(problem_18(real, imag))

print("18:", problem_18(3, 4))  # 5.0
