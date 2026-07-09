# -*- coding: utf-8 -*-

# ---------- 15. Siyahının orta qiyməti ----------
def problem_15(numbers):
    return sum(numbers) / len(numbers)

# numbers = list(map(int, input().split()))
# print(problem_15(numbers))

print("15:", problem_15([2, 4, 6, 8]))  # 5.0
