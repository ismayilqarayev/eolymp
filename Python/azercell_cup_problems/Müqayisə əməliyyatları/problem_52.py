"""
Bölmə 3 — Müqayisə və məntiqi əməliyyatların birləşməsi

Məsələ 52: İki tarix (gün, ay) verilib. Birinci tarixin ikincidən əvvəl olub-olmadığını yoxlayın.

Nümunə giriş:  15 3 20 3
Nümunə çıxış:  True

İzah: Tarixlər (ay, gün) cütlükləri (tuple) şəklində müqayisə olunur — Python tuple-ları elementlərinə görə ardıcıl müqayisə edir.
"""

g1, a1, g2, a2 = map(int, input().split())
print((a1, g1) < (a2, g2))
