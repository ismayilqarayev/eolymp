<<<<<<< HEAD
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



        
=======
def __init__(number_1):
    def fun1(number_2):
        return number_1 + number_2
    return fun1

def fun2():
    number_1 = int(input("Enter a number: "))
    number_2 = int(input("Enter another number: "))
    
    get1 = __init__(number_1)
    get2 = get1(number_2)
    
    print(get2)
    



if __name__ == "__main__":
    fun2()
>>>>>>> 1cd563446ed56db37c052ac174671caf355f3738
