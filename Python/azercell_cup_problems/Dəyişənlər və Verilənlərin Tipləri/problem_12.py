# -*- coding: utf-8 -*-

# ---------- 12. Böyük hərflə başlayır? ----------
def problem_12(word):
    return "Bəli" if word[0].isupper() else "Xeyr"

# word = input()
# print(problem_12(word))

print("12:", problem_12("Baku"))  # Bəli
