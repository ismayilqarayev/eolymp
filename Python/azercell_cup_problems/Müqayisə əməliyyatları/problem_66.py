"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 66: İmtahan nəticəsi: yazılı bal və şifahi bal verilib. Hər ikisi 50-dən yuxarıdırsa "Keçdi", əks halda "Kəsildi" yazın.

Nümunə giriş:  55 45
Nümunə çıxış:  Kəsildi

İzah: Hər iki balın 50-dən yuxarı olması tələb olunur, əks halda tələbə kəsilir.
"""

yazili, sifahi = map(int, input().split())
if yazili > 50 and sifahi > 50:
    print("Keçdi")
else:
    print("Kəsildi")
