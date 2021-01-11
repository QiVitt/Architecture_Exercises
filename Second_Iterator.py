

class FibonacciCustomIterator:

    def __init__(self, nmax):
        self.n_cap = nmax

    def __iter__(self):
        self.a = 0
        self.b = 1
        self.counter = 0
        return self

    def __next__(self):
        if(self.counter < self.n_cap):
            self.counter += 1
            c = self.a + self.b
            self.a = self.b
            self.b = c
            return c
        else:
            raise StopIteration

myobject = FibonacciCustomIterator(15)

print(list(myobject))