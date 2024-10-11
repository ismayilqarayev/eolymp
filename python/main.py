class Program:
    def fun (self):
        self.__number1 = number1
        self.__number2 = number2

    def input(self):
        self.__number1 = int(input("Birinci rəqəmi daxil edin: "))
        self.__number2 = int(input("İkinci rəqəmi daxil edin: "))

class Runner(Program):
    def main(self, num1, num2):
        super().fun(num1, num2)
        self.__number1 = num1
        self.__number2 = num2



        