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
