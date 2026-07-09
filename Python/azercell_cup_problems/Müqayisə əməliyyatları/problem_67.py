"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 67: Oyun sistemi: oyunçunun canı (HP) verilib. HP 0-a bərabər və ya kiçikdirsə "Oyun bitdi" yazın.

Nümunə giriş:  0
Nümunə çıxış:  Oyun bitdi

İzah: Can (HP) sıfıra bərabər və ya ondan azdırsa oyunun bitdiyi bildirilir.
"""

hp = int(input())
if hp <= 0:
    print("Oyun bitdi")
