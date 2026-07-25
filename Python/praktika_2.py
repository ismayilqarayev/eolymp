class Program1:

    def vectoru_cap_et(self, vector):
        print(*vector)

    def vectorleri_daxil_et(self, vector1, vector2):

        say = int(input("Vector1-in element sayını daxil edin: "))

        for i in range(say):
            element = int(input(f"{i + 1}-ci elementi daxil edin: "))
            vector1.append(element)

        say = int(input("\nVector2-nin element sayını daxil edin: "))

        for i in range(say):
            element = int(input(f"{i + 1}-ci elementi daxil edin: "))
            vector2.append(element)

    def vector_emeliyyatlari(self, vector1):

        # 2 dəfə 5-i 2-ci mövqedən başlayaraq əlavə et
        vector1.insert(1, 5)
        vector1.insert(2, 5)

        print("\nInsert əməliyyatından sonra:")
        self.vectoru_cap_et(vector1)

        # 2-ci elementi sil
        vector1.pop(1)

        print("\nErase əməliyyatından sonra:")
        self.vectoru_cap_et(vector1)


class Program2:

    def vectoru_cap_et(self, vector):
        print(*vector)

    def ucuncu_vectoru_daxil_et(self, vector3):

        say = int(input("\nVector3-ün element sayını daxil edin: "))

        for i in range(say):
            element = int(input(f"{i + 1}-ci elementi daxil edin: "))
            vector3.append(element)

    def evvele_element_elave_et(self, vector3):

        vector3.insert(0, 99)

        print("\nƏvvələ 99 əlavə edildikdən sonra:")
        self.vectoru_cap_et(vector3)


def main():

    vector1 = []
    vector2 = []
    vector3 = []

    proqram1 = Program1()
    proqram1.vectorleri_daxil_et(vector1, vector2)
    proqram1.vector_emeliyyatlari(vector1)

    proqram2 = Program2()
    proqram2.ucuncu_vectoru_daxil_et(vector3)
    proqram2.evvele_element_elave_et(vector3)


if __name__ == "__main__":
    main()