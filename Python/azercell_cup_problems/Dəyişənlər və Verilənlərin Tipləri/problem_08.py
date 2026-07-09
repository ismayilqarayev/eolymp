# -*- coding: utf-8 -*-

# ---------- 8. İki dəyişənin hasili tipi ----------
def problem_8(a, b):
    result = a * b
    return result, type(result).__name__

# a, b = input().split()
# a, b = int(a), float(b)
# res, t = problem_8(a, b)
# print(res, t)

res, t = problem_8(4, 2.5)
print("8:", res, t)  # 10.0 float
