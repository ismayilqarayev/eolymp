"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 61: Mobil operator tarifi: istifadəçinin balansı verilib. Balans 5 AZN-dən azdırsa və danışıq vaxtı bitibsə, "Balansı artırın" yazın, əks halda "Davam edə bilərsiniz".

Nümunə giriş:  3 True
Nümunə çıxış:  Balansı artırın

İzah: Hər iki şərt (aşağı balans VƏ bitmiş vaxt) doğrudursa xəbərdarlıq, əks halda icazə mesajı çıxır.
"""

balans, vaxt_bitib = input().split()
balans = float(balans)
vaxt_bitib = (vaxt_bitib == "True")
if balans < 5 and vaxt_bitib:
    print("Balansı artırın")
else:
    print("Davam edə bilərsiniz")
