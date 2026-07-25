class Program1:
    def siyahilar_daxil_et(self, siyahi_1, siyahi_2, siyahi_3):
        element_sayi = int(input("Birinci siyahının element sayını daxil edin: "))
        
        for _ in range(element_sayi):
            element = int(input("Birinci siyahıya element daxil edin: "))
            siyahi_1.append(element)
            
    def siayhi_emeliyyatlari_1(self, siyahi_1):
        siyahi_1.insert(1, 5)
        siyahi_1.insert(2, 5)

        print("\nƏlavədən sonra:")
        print(siyahi_1) 
        
class Program2:
    def ikinci_siyahini_daxil_et(self, siyahi_2):
        element_sayi = int(input("İkinci siyahının element sayını daxil edin: "))
        
        for _ in range(element_sayi):
            element = int(input("İkinci siyahıya element daxil edin: "))
            siyahi_2.append(element) 
            
    def siyahi_emeliyyatlari_2(self, siyahi_2):
            
class Program3:
    def ucuncu_siyahini_daxil_et(self, siyahi_3):
        element_sayi = int(input("Üçüncü siyahının element sayını daxil edin: "))

        for _ in range(element_sayi):
            element = int(input("Üçüncü siyahıya element daxil edin: "))
            
    def siyahi_emeliyyatlari_3(self, siyahi_3):
        
                
            
def main():
    siyahi_1 = []
    siyahi_2 = []
    siyahi_3 = []
    
    program1 = Program1() 
    program1.siyahilar_daxil_et(siyahi_1)
    program1.siyahi_emeliyyatlari_1(siyahi_1)

    program2 = Program2()
    program2.ikinci_siyahini_daxil_et(siyahi_2)
    program2.siyahi_emeliyyatlari_2(siyahi_2)
    
    program3 = Program3()
    program3.ucuncu_siyahini_daxil_et(siyahi_3)
    program3.siyahi_emeliyyatlari_3(siyahi_3)

    print("Birinci siyahı:", siyahi_1)
    print("İkinci siyahı:", siyahi_2)
    print("Üçüncü siyahı:", siyahi_3)
    
    
if __name__ == "__main__":
    main()
    
                