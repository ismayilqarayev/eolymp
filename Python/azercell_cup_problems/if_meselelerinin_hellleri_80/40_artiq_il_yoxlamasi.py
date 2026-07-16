# 40. Artıq il yoxlaması
# İl daxil edilir. İlin artıq il olub-olmadığını yoxla (4-ə bölünür VƏ (100-ə bölünmür VƏ YA 400-ə bölünür)).
#
# Giriş:  Bir tam ədəd (il)
# Çıxış:  "Artıq ildir" və ya "Artıq il deyil"
# Nümunə: 2024 → Artıq ildir

il = int(input())
if il % 4 == 0 and (il % 100 != 0 or il % 400 == 0):
    print("Artıq ildir")
else:
    print("Artıq il deyil")
