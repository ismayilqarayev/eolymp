# -*- coding: utf-8 -*-

# ---------- 26. Tuple-dan dəyişənlərə ayırma (unpacking) ----------
def problem_26(t):
    a, b = t
    return a + b

# a, b = map(int, input().split())
# print(problem_26((a, b)))

print("26:", problem_26((3, 7)))  # 10
