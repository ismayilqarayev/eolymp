"""
Bölmə 2 — Məntiqi əməliyyatlar (and, or, not)

Məsələ 21: İki şərt verilib: ədəd müsbətdir və cütdür. Hər ikisinin doğru olub-olmadığını yoxlayın.

Nümunə giriş:  8
Nümunə çıxış:  True

İzah: and operatoru hər iki şərtin (müsbətlik VƏ cütlük) eyni vaxtda doğru olmasını tələb edir.
"""

x = int(input())
print(x > 0 and x % 2 == 0)
