# -*- coding: utf-8 -*-

# ---------- 17. Tip çevrilməsi zamanı xəta ----------
def problem_17(s):
    try:
        return int(s)
    except ValueError:
        return "Xəta"

# s = input()
# print(problem_17(s))

print("17:", problem_17("abc"))  # Xəta
