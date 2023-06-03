number_of_terms = 4

n1 = 1
n2 = 1

def next_fibonacci_term(x1, x2):
    return x1+ x2


lista = [1, 1]
partial_sum = 0

while(True):
    x1 = lista[-2]
    x2 = lista[-1]
    next_term = next_fibonacci_term(x1,x2)
    if next_term > 4000000:
        break
    if next_term % 2 == 0:
        partial_sum += next_term
    lista.append(next_term)

print(partial_sum)