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
