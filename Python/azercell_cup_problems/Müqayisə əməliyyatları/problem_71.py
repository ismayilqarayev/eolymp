"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 71: Elektrik enerjisi: istifadə olunan kilovat verilib. 300-dən çoxdursa "Yüksək tarif", əks halda "Standart tarif" yazın.

Nümunə giriş:  320
Nümunə çıxış:  Yüksək tarif

İzah: İstifadə olunan enerji miqdarı həddi aşırsa yüksək tarif tətbiq olunur.
"""

kw = float(input())
if kw > 300:
    print("Yüksək tarif")
else:
    print("Standart tarif")
