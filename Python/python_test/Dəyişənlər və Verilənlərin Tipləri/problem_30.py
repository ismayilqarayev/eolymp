# -*- coding: utf-8 -*-

# ---------- 30. Dinamik tipləşdirmə nümayişi ----------
def problem_30():
    results = []
    x = 10
    results.append(type(x))
    x = 3.5
    results.append(type(x))
    x = "on"
    results.append(type(x))
    return results

print("30:")
for t in problem_30():
    print(t)
