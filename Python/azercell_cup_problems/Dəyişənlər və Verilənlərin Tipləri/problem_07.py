# -*- coding: utf-8 -*-

# ---------- 7. String-dən rəqəm çıxarmaq ----------
def problem_7(s):
    return "".join(ch for ch in s if ch.isdigit())

# s = input()
# print(problem_7(s))

print("7:", problem_7("a1b2c3"))  # 123
