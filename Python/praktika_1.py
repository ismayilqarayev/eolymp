# ===========================================
# Siyahılar (List) üzərində əməliyyatlar
# ===========================================

class Program1:
    # Bu sinif birinci siyahı üçün daxil etmə, əlavə etmə və silmə əməliyyatlarını toplayır.

    # İki siyahının elementlərini istifadəçidən daxil edir
    def siyahilari_daxil_et(self, siyahi1, siyahi2):
        # İstifadəçidən hər iki siyahının ölçüsünü və elementlərini oxuyur.

        element_sayi = int(input("Birinci siyahının element sayını daxil edin: "))

        for _ in range(element_sayi):
            element = int(input("Birinci siyahıya element daxil edin: "))
            siyahi1.append(element)

        element_sayi = int(input("\nİkinci siyahının element sayını daxil edin: "))

        for _ in range(element_sayi):
            element = int(input("İkinci siyahıya element daxil edin: "))
            siyahi2.append(element)

    # Siyahı üzərində əlavə etmə və silmə əməliyyatlarını yerinə yetirir
    def siyahi_emeliyyatlari(self, siyahi1):
        # Birinci siyahıda əlavə etmə və silmə əməliyyatlarını nümayiş etdirir.

        # 2-ci mövqedən başlayaraq iki ədəd 5 əlavə edilir
        siyahi1.insert(1, 5)
        # Birinci əlavə etmədən sonra indekslər yenilənir; bu əmrlə ikinci 5 yerləşdirilir.
        siyahi1.insert(2, 5)

        print("\nƏlavədən sonra:")
        print(siyahi1)

        # 2-ci mövqedə yerləşən element silinir
        # pop(1) indeks 1-dəki (ikinci mövqedəki) elementi siyahıdan çıxarır.
        siyahi1.pop(1)

        print("\nSilmədən sonra:")
        print(siyahi1)


class Program2:
    # Üçüncü siyahı ilə bağlı əməliyyatları bir yerdə saxlayır.

    # Üçüncü siyahının elementlərini istifadəçidən qəbul edir
    def ucuncu_siyahini_daxil_et(self, siyahi3):
        # Siyahının uzunluğu qədər element qəbul edib siyahi3-ə əlavə edir.

        element_sayi = int(input("\nÜçüncü siyahının element sayını daxil edin: "))

        for _ in range(element_sayi):
            element = int(input("Üçüncü siyahıya element daxil edin: "))
            siyahi3.append(element)

        print("\nÜçüncü siyahı:")
        print(siyahi3)

    # Siyahının əvvəlinə element əlavə edir
    def evvele_element_elave_et(self, siyahi3):
        # insert(0, 99) 99-u ilk mövqeyə qoyur və mövcud elementləri sağa sürüşdürür.

        # Siyahının əvvəlinə 99 əlavə edilir
        siyahi3.insert(0, 99)

        print("\n99 əlavə edildikdən sonra:")
        print(siyahi3)


def main():
    # Boş siyahıları yaradır və proqramın iş ardıcıllığını idarə edir.

    # Boş siyahılar yaradılır
    siyahi1 = []
    siyahi2 = []
    siyahi3 = []

    proqram1 = Program1()

    # Birinci və ikinci siyahının elementləri daxil edilir
    proqram1.siyahilari_daxil_et(siyahi1, siyahi2)

    # Birinci siyahı üzərində əməliyyatlar yerinə yetirilir
    proqram1.siyahi_emeliyyatlari(siyahi1)

    proqram2 = Program2()

    # Üçüncü siyahının elementləri daxil edilir
    proqram2.ucuncu_siyahini_daxil_et(siyahi3)

    # Üçüncü siyahının əvvəlinə element əlavə edilir
    proqram2.evvele_element_elave_et(siyahi3)


# Proqramın başlanğıc nöqtəsi
if __name__ == "__main__":
    # Bu şərt kodun yalnız fayl birbaşa işə salınanda başlamasını təmin edir.
    main()
