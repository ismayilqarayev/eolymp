# -*- coding: utf-8 -*-
import math

# ---------- 26. Dörd əməliyyatın nəticəsi ----------
def problem_26(a, b):
    return [a + b, a - b, a * b, a / b]

# a, b = map(int, input().split())
# for r in problem_26(a, b):
#     print(r)

print("26:")
for r in problem_26(10, 3):
    print(r)
