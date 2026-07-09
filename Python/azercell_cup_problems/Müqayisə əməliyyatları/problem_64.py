"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 64: Hava proqnozu: temperatur və yağış ehtimalı (%) verilib. Temperatur 15-dən aşağıdırsa və yağış ehtimalı 50%-dən çoxdursa "Plaş götür" yazın.

Nümunə giriş:  12 60
Nümunə çıxış:  Plaş götür

İzah: Hər iki şərt (soyuq hava VƏ yüksək yağış ehtimalı) eyni vaxtda doğru olduqda tövsiyə verilir.
"""

temp, yagis = map(int, input().split())
if temp < 15 and yagis > 50:
    print("Plaş götür")
