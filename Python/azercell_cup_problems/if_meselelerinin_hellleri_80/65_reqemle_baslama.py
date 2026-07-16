# 65. Rəqəmlə başlama
# Bir sətir daxil edilir. İlk simvolun rəqəm olub-olmadığını yoxla.
#
# Giriş:  Bir sətir
# Çıxış:  "Rəqəmlə başlayır" və ya "Rəqəmlə başlamır"
# Nümunə: 7kitab → Rəqəmlə başlayır

setir = input()
if setir[0].isdigit():
    print("Rəqəmlə başlayır")
else:
    print("Rəqəmlə başlamır")
