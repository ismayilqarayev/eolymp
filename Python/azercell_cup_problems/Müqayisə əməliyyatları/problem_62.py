"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 62: İnternet paketi: istifadə olunan data (GB) və limit verilib. İstifadə limiti keçibsə "Paket bitib", əks halda "Kifayət qədər data var" yazın.

Nümunə giriş:  12 10
Nümunə çıxış:  Paket bitib

İzah: İstifadə olunan data limitdən çoxdursa paketin bitdiyi bildirilir.
"""

istifade, limit = map(float, input().split())
if istifade > limit:
    print("Paket bitib")
else:
    print("Kifayət qədər data var")
