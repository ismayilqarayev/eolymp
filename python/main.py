<<<<<<< Updated upstream
from os import name


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
    @property
    def getter_name(self):
        return self._name
    
    @name.setter
    def setter_name(self, value):
        if not value:
            raise ValueError("Name cannot be empty.")
        self._name = value
    
    #----------------------------------------------------------
    
    @property
    def getter_age(self):
        return self._age
    
    @age.setter
    def setter_age(self, value):
        if value < 0:
            raise valueError("Age cannot be negative.")
        self._age = value
        
    def fun_print(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")



try:
    person1 = Person("Tom", 30)
    person1.fun_print()

    person1.age = -5
    
except ValueError as e:
    print(e)