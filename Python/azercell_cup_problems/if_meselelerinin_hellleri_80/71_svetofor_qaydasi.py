# 71. Svetofor qaydası
# İşığın rəngi ("qırmızı", "sarı" və ya "yaşıl") daxil edilir. Hərəkət qaydasını çap et: qırmızı — "Dayan", sarı — "Hazır ol", yaşıl — "Hərəkət et".
#
# Giriş:  Bir söz (rəng)
# Çıxış:  Uyğun hərəkət qaydası
# Nümunə: sarı → Hazır ol

reng = input()
if reng == "qırmızı":
    print("Dayan")
elif reng == "sarı":
    print("Hazır ol")
elif reng == "yaşıl":
    print("Hərəkət et")
