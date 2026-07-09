# -*- coding: utf-8 -*-

# ---------- 14. Faiz hesablama ----------
def problem_14(part, whole):
    return round(part / whole * 100, 2)

# part, whole = map(int, input().split())
# print(problem_14(part, whole))

print("14:", problem_14(25, 200))  # 12.5
