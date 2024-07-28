class Runner:
    def __init__(self):
        self.number1 = []
        self.number = 0

    def runner1(self, vec1):
        add_number1 = int(input("reqemlerin sayini daxil et"))
        for _ in range(add_number1):
            a = int(input("reqemleri daxil et"))
            vec1.append(a)

    def main(self, numbers):
        for n in numbers:
            self.number += n
            print(self.number)

    def reset(self):
        self.number = 0


if __name__ == "__main__":
    get1 = Runner()
    get1.runner1(get1.number1)
    get1.reset()
    get1.main(get1.number1)



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
