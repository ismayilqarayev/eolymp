# -*- coding: utf-8 -*-

# ---------- 21. Tam ədədin rəqəmlərinin cəmi ----------
def problem_21(n):
    return sum(int(digit) for digit in str(n))

# n = input()
# print(problem_21(n))

print("21:", problem_21(2024))  # 8
