"""
Bölmə 4 — Praktiki və məntiqli məsələlər (Azercell Cup səviyyəsi)

Məsələ 77: İdman yarışı: iştirakçının yaşı və çəki dərəcəsi (kg) verilib. Yaş 16-25 arasında və çəki 60-80 kg arasındadırsa "Uyğundur" yazın.

Nümunə giriş:  20 75
Nümunə çıxış:  Uyğundur

İzah: Hər iki aralıq şərti (yaş və çəki) ayrı-ayrı yoxlanılır və and ilə birləşdirilir.
"""

yas, cheki = map(int, input().split())
print(16 <= yas <= 25 and 60 <= cheki <= 80)
