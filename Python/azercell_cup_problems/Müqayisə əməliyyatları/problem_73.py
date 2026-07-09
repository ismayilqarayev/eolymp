"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 73: Ulduz reytinqi: məhsulun reytinqi (1-5) verilib. 4 və ya 5-dirsə "Yüksək keyfiyyət" yazın, əks halda "Orta/Aşağı keyfiyyət".

Nümunə giriş:  4
Nümunə çıxış:  Yüksək keyfiyyət

İzah: Reytinq 4 və ya 5-dirsə (or ilə) yüksək keyfiyyət şərti doğru sayılır.
"""

reyting = int(input())
print(reyting == 4 or reyting == 5)
