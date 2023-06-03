n = 1000 

tot = 0

for i in range(1, n):
    if i % 5 == 0 or i % 3==0:
        tot += i
    
print(tot)