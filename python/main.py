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