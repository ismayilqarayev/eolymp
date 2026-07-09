"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 65: Onlayn mağaza: sifariş məbləği verilib. Məbləğ 50 AZN-dən çoxdursa "Pulsuz çatdırılma", əks halda "Çatdırılma haqqı 3 AZN" yazın.

Nümunə giriş:  65
Nümunə çıxış:  Pulsuz çatdırılma

İzah: Sifariş məbləği 50 AZN-dən çoxdursa pulsuz çatdırılma şərti işə düşür.
"""

mebleg = float(input())
if mebleg > 50:
    print("Pulsuz çatdırılma")
else:
    print("Çatdırılma haqqı 3 AZN")
