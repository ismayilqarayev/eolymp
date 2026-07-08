# -*- coding: utf-8 -*-

# ---------- 28. Dəyişən tipini dəyişdirmək (yenidən mənimsətmə) ----------
def problem_28():
    x = 5
    x = "beş"
    return type(x)

print("28:", problem_28())  # <class 'str'>
