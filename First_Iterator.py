# Costruzione di una classe i cui oggetti restituiscono una
# potenza di due - implementare iter & next

class PotenzeDiDue:

    def __init__(self, n):
        self.n_cap = n

# N.B __iter__ METHOD HAS TO RETURN self !
    def __iter__(self):
        self.starting = -1
        return self

    def __next__(self):
        if(self.starting < self.n_cap):
            self.starting += 1
            return 2**self.starting
        else:
            raise StopIteration

myobject = PotenzeDiDue(5)

print(list(myobject))
