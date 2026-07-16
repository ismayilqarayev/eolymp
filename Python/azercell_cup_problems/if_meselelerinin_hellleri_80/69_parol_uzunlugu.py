# 69. Parol uzunluğu
# Bir parol (sətir) daxil edilir. Uzunluğu 8 və ya çoxdursa "Kifayət qədər güclüdür", əks halda "Çox qısadır" çap et.
#
# Giriş:  Bir sətir (parol)
# Çıxış:  Uyğun mesaj
# Nümunə: azercell2026 → Kifayət qədər güclüdür

parol = input()
if len(parol) >= 8:
    print("Kifayət qədər güclüdür")
else:
    print("Çox qısadır")
