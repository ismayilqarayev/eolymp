"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 55: Trafik işıq sistemi: işığın rəngi verilib (qırmızı, sarı, yaşıl). Əgər "qırmızı" deyilsə, "Hərəkət et" yazın.

Nümunə giriş:  sarı
Nümunə çıxış:  Hərəkət et

İzah: != operatoru ilə rəngin "qırmızı" olmadığı yoxlanılır; belədirsə hərəkət mesajı çap olunur.
"""

reng = input()
if reng != "qırmızı":
    print("Hərəkət et")
