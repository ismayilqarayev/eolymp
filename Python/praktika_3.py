class Program1:
    def vektorlari_daxil_et(self, vektor1, vektor2, vektor3):
        # Vektor1 üçün elementləri daxil etmək
        say = int(input("Vektor1-in element sayini daxil edin: "))
        for i in range(say):
            element = int(input(f"{i + 1}-ci elementi daxil edin: "))
            vektor1.append(element)

        # Vektor2 üçün elementləri daxil etmək
        say = int(input("\nVektor2-nin element sayini daxil edin: "))
        for i in range(say):
            element = int(input(f"{i + 1}-ci elementi daxil edin: "))
            vektor2.append(element)

        # Vektor3 üçün elementləri daxil etmək
        say = int(input("\nVektor3-un element sayini daxil edin: "))
        for i in range(say):
            element = int(input(f"{i + 1}-ci elementi daxil edin: "))
            vektor3.append(element)

    def evvele_element_elave_et(self, vektor1, vektor2, vektor3):
        vektor1.insert(0, 1)

        print("\nVektor1-in 1-ci elementini daxil etdikden sonra:")
        self.__vektoru_cap_et(vektor1, vektor2, vektor3)

    def __vektoru_cap_et(self, vektor1, vektor2, vektor3):
        print("Vektor1:", *vektor1)
        print("Vektor2:", *vektor2)
        print("Vektor3:", *vektor3)


if __name__ == "__main__":
    vektor1 = []
    vektor2 = []
    vektor3 = []

    program1 = Program1()
    program1.vektorlari_daxil_et(vektor1, vektor2, vektor3)
    program1.evvele_element_elave_et(vektor1, vektor2, vektor3)
