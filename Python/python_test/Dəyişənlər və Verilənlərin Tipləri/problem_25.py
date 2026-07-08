# -*- coding: utf-8 -*-

# ---------- 25. None ilə əməliyyat ----------
def problem_25():
    x = None
    try:
        return x + 1
    except TypeError:
        return "TypeError"

print("25:", problem_25())  # TypeError
