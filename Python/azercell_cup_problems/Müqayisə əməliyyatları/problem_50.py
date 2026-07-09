"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 50: Login sistemi: istifadəçi adı uzunluğu ən azı 5 simvol və parol uzunluğu ən azı 8 simvol olmalıdır. Uyğunluğu yoxlayın.

Nümunə giriş:  ahmed 12345678
Nümunə çıxış:  True

İzah: len() funksiyası ilə hər iki sətrin uzunluğu ölçülür və tələb olunan minimumlarla müqayisə edilir.
"""

ad, parol = input().split()
print(len(ad) >= 5 and len(parol) >= 8)
