class Program:
    # Метод для сохранения значений
    def fun1(self, number1, number2):
        self.__number1 = number1
        self.__number2 = number2

    # Метод для конвертации текстовых значений в целые числа
    def fun_yansitma(self):
        self.__text1 = "2"
        self.__text2 = "2"

        self.num_int1 = int(self.__text1)
        self.num_int2 = int(self.__text2)

    # Метод для получения значений от пользователя
    def fun2(self):
        self.__number1 = int(input("Enter the first number: "))
        self.__number2 = int(input("Enter the second number: "))

    # Метод для вычисления суммы
    def fun3(self):
        runner = self.__number1 + self.__number2 + self.num_int1 + self.num_int2
        print(f"Sum of the two numbers: {runner}")

# Создание объекта класса
object = Program()

# Вызов методов
object.fun2()            # Получаем числа от пользователя
object.fun_yansitma()   # Конвертируем текстовые значения в целые
object.fun3()           # Вычисляем и выводим сумму



#------------------------------------------------------------------------

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


#---------------------------------------------------------------------------------

class Program:
    def fun1(self, number1, number2):
        self.__number1 = number1
        self.__number2 = number2

    def input(self):
        self.__number1 = int(input("Birinci rəqəmi daxil edin: "))
        self.__number2 = int(input("İkinci rəqəmi daxil edin: "))

    @property
    def number1(self):
        return self.__number1

    @number1.setter
    def number1(self, num1):
        if 0 < num1 < 110:
            self.__number1 = num1
        else:
            print("Xəta: Rəqəm 1 və 109 arasında olmalıdır.")

#---------------------------------------------------------------------------
    @property
    def number2(self):
        return self.__number2

    @number2.setter
    def number2(self, num2):
        if 0 < num2 < 110:
            self.__number2 = num2
        else:
            print("Xəta: Rəqəm 2 və 109 arasında olmalıdır.")


    def print(self):
        print(f"Rəqəm 1: {self.__number1}, Rəqəm 2: {self.__number2}")

    def __del__(self):
        print("Obyekt silindi", self.__number1, self.__number2)


obyekt = Program()

obyekt.input()
obyekt.print()






################################################################

class Person:
    def __init__(self, name, age):
        self.__name = name    # устанавливаем имя
        self.__age = age       # устанавливаем возраст
 
    # свойство-геттер
    @property
    def age(self):
        return self.__age
    
    # свойство-сеттер
    @age.setter
    def age(self, age):
        if 0 < age < 110:
            self.__age = age
        else:
            print("Недопустимый возраст")
 
    @property
    def name(self):
        return self.__name
     
    def print_person(self):
        print(f"Имя: {self.__name}\tВозраст: {self.__age}")
          
  
tom = Person("Tom", 39)
tom.print_person()  # Имя: Tom  Возраст: 39
tom.age = -3486     # Недопустимый возраст  (Обращение к сеттеру)
print(tom.age)      # 39 (Обращение к геттеру)
tom.age = 25        # (Обращение к сеттеру)
tom.print_person()  # Имя: Tom  Возраст: 25









#####################################################################
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @property
    def name(self):
        return self._name

    @name.setter
    def name(self, value):
        if not value:
            raise ValueError("Name cannot be empty")
        self._name = value

#---------------------------------------------------------------------
    @property
    def age(self):
        return self._age

    @age.setter
    def age(self, value):
        if value < 0:
            raise ValueError("Age cannot be negative")
        self._age = value

    def print_name(self):
        print(f"Name: {self.name}")

    def print_age(self):
        print(f"Age: {self.age}")

try:
    person = Person("ismatil", 25)
    person.print_name()
    person.print_age()
    person.print_age = -10

except ValueError as e:
    print(e)









####################################################################

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Геттер для атрибута name
    @property
    def name(self):
        return self._name

    # Сеттер для атрибута name
    @name.setter
    def name(self, value):
        if not value:
            raise ValueError("Name cannot be empty.")
        self._name = value

    # Геттер для атрибута age
    @property
    def age(self):
        return self._age

    # Сеттер для атрибута age
    @age.setter
    def age(self, value):
        if value < 0:
            raise ValueError("Age cannot be negative.")
        self._age = value

    def introduce(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

    def celebrate_birthday(self):
        self.age += 1
        print(f"Happy Birthday {self.name}! You are now {self.age} years old.")

# Создание объекта
try:
    person1 = Person("Tom", 30)
    person1.introduce()  # "Hello, my name is Tom and I am 30 years old."
    
    # Попытка установить некорректный возраст
    person1.age = -5
except ValueError as e:
    print(e)

# Попытка создать объект с пустым именем
try:
    person2 = Person("", 25)
except ValueError as e:
    print(e)



#---------------------------------------------------
class Program:
    class Program:
    def __init__(self):
        self.list1 = []
        self.list2 = []

    def fun1(self, lst):
        add_number_for_list1 = int(input("How many numbers would you like to add to list1? "))
        for i in range(add_number_for_list1):
            num = int(input("Add a number for list1: "))
            lst.append(num)
            
    def fun2(self, lst):
        add_number_for_list2 = int(input("How many numbers would you like to add to list2? "))
        for i in range(add_number_for_list2):
            num = int(input("Add a number for list2: "))
            lst.append(num)
            
    def fun3(self, lst1, list2):
        cem = lst1 + list2
        return cem    
    
    
# Obyektin yaradılması
run1 = Program()
run1.fun1(run1.list1)

run2 = Program()
run2.fun2(run2.list2)

run3 = Program()
print("List1 + List2 =", run3.fun3(run1.list1, run2.list2))


# list1-i yoxlamaq üçün çap edin
print("List1:", run1.list1)
print("List2:", run2.list2)



#---------------------------------------------



    def __init__(self):
        self.number1 = []
        self.number = 10

    def fun1(self, vec1):
        add_number_for_list = int(input())
        for _ in range(add_number_for_list):
            num = int(input())
            vec1.append(num)

    def fun2(self, vec2):
        for n in vec2:
            self.number += n
            print(self.number)

    def fun3(self, vec3):
        for n in vec3:
            self.number -= n
            print(self.number)

    def fun4(self, kim):
        return 2 * kim

    def apply_function(self, func, *args):
        return func(*args)


class Program2:
    def fun4(self, name, age):
        if age > 120 or age < 1:
            print("invalid")
            return
        print(name, age)


if __name__ == "__main__":
    klass1 = Program()
    klass2 = Program2()

    klass1.fun1(klass1.number1)
    klass1.fun2(klass1.number1)
    klass1.fun3(klass1.number1)
    klass2.fun4(" ismayil", 3)

    b = klass1.apply_function(klass1.fun4, 4)
    print(b)


#----------------------------------------------------------------


class Runner:
    number = 10
    message = "hello"
    number1 = 30
    number2 = 40

    def main(self, num1, num2):
        print(num1, num2)
        for index, c in enumerate(self.message):
            print(f"{index}, {c}")

    def fun2(self, number=None):
        if number is None:
            number = self.number

        while number < 15:
            print(f"number = {number}")
            number += 1
            if number == 11:
                break


if __name__ == "__main__":
    get1 = Runner()
    get1.main(get1.number1, get1.number2)
    get1.fun2()


#-----------------------------------------------------------------

class Runner:
    def __init__(self):
        self.number1 = []
        self.number2 = []

    def runner1(self, vec1):
        add_vector_number = int(input())
        for _ in range(add_vector_number):
            a = int(input())
            vec1.append(a)

    def runner2(self, vec2):
        add_vector_number = int(input())
        for _ in range(add_vector_number):
            b = int(input())
            vec2.append(b)
        
        for n1 in vec2:
            print(n1, end=" ")
        print()

if __name__ == "__main__":
    get1 = Runner()
    get1.runner1(get1.number1)
    get1.runner2(get1.number2)
