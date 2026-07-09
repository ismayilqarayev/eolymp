"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 74: Sığorta sistemi: yaş və sağlamlıq vəziyyəti (True — sağlam, False — xəstə) verilib. Yaş 60-dan azdırsa və sağlamdırsa "Sığorta təsdiqləndi" yazın.

Nümunə giriş:  45 True
Nümunə çıxış:  Sığorta təsdiqləndi

İzah: Sığortanın təsdiqi üçün yaş həddi VƏ sağlamlıq şərti eyni vaxtda ödənməlidir.
"""

yas, saglam = input().split()
yas = int(yas)
saglam = (saglam == "True")
if yas < 60 and saglam:
    print("Sığorta təsdiqləndi")
