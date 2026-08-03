"""
Sual 99: Ededleri K beraber cemli qrupa bolun (backtracking).

Giris (Input):
    1-ci setirde N.
    2-ci setirde N eded.
    3-cu setirde K (qrup sayi).

Cixis (Output):
    "Mumkundur" - eger ededleri K beraber cemli qrupa bolmek mumkundursa,
    eks halda "Mumkun deyil".

Numune:
    Giris:  4
            4 3 2 3
            2
    Cixis:  Mumkundur   (qruplar: {4,2}=6 ve {3,3}=6)

Alqoritmin izahi (backtracking):
    Evvelce umumi cem K-ya qaliqsiz bolunmelidir, eks halda cavab
    aciqca "Mumkun deyil"dir. Sonra hedef = cem/K hesablayib, K eded
    "qrup" (her biri "hedef" tutum ile) yaradiriq. Ededleri (boyukden
    kicige siralayaraq, sürəti artırmaq üçün) bir-bir qruplara paylamağa
    calisiriq -- rekursiv olaraq her eded ucun hansi qrupa duşe biler
    yoxlayiriq. Eger butun ededler ugurla yerlesdirilerse, cavab
    musbetdir.
"""


def cozul(arr, qruplar, hedef, indeks):
    if indeks == len(arr):
        # Butun ededler yerlesdirildi -- her qrup tam hedefe catmalidir
        return all(q == 0 for q in qruplar)

    for i in range(len(qruplar)):
        if qruplar[i] >= arr[indeks]:
            qruplar[i] -= arr[indeks]           # ededi bu qrupa qoyuruq
            if cozul(arr, qruplar, hedef, indeks + 1):
                return True
            qruplar[i] += arr[indeks]           # ugursuz oldu, geri qaytariq (backtrack)

        # Optimallashdirma: eger qrup hele bosdursa (indi doldu),
        # basqa bos qrupa cehd etmeye deymez -- eyni netice olacaq
        if qruplar[i] == hedef:
            break

    return False


n = int(input())
arr = list(map(int, input().split()))
k = int(input())
cem = sum(arr)

if cem % k != 0:
    print("Mumkun deyil")
else:
    hedef = cem // k
    arr.sort(reverse=True)   # boyuk ededleri evvelce yerlesdirmek axtarisi suretlendirir

    if arr[0] > hedef:
        # En boyuk eded tek basina hedefden boyukdursa, hec vaxt mumkun deyil
        print("Mumkun deyil")
    else:
        qruplar = [hedef] * k   # her qrup ucun qalan tutum (basланgicda hedefe beraber)
        if cozul(arr, qruplar, hedef, 0):
            print("Mumkundur")
        else:
            print("Mumkun deyil")
