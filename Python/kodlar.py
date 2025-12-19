# fun1 funksiyasının Python versiyası
def fun1():
    num3 = [1, 2, 3, 4]
    # C++: emplace(get1 + 4, 5)
    num3.insert(4, 5)
    # çap istəsək:
    # print(num3)


# fun2 funksiyasının Python versiyası
def fun2():
    num4 = [1, 2, 4, 5, 6, 7]
    # C++: insert(get2 + 2, 2, 3)
    # yəni index 2-yə iki dəfə 3 əlavə et
    num4[2:2] = [3, 3]
    # print(num4)


# fun3 funksiyasının Python versiyası
def fun3():
    num5 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    num6 = [10, 20, 30, 40, 50, 60, 70, 80, 90]

    # C++: insert(get3 + 1, num6.begin(), num6.begin() + 3)
    num5[1:1] = num6[:3]

    for run4 in num5:
        print(run4, end="")
    print()


# fun4 funksiyasının Python versiyası
def fun4():
    num7 = [1, 2, 3, 4, 5, 6, 7, 8]
    # C++: insert(cend(), {21})
    num7.append(21)

    for a in num7:
        print(a)


def main():
    fun1()
    fun2()
    fun3()
    fun4()


if __name__ == "__main__":
    main()





#############################################################

def program():
    name = input("Enter your name: ")
    print("Hello " + name)

if __name__ == "__main__":
    program()


