import math

def devis(n):
    # список для записи делителей
    res = []
    for i in range(1, round(math.sqrt(n))+1):
        if n%i == 0:
            res.append(i)
            # не допускам повторов делителей
            if i*i != n:
                res.append(n//i)
    res.sort()
    return res

# Список первых нескольких полусовершенных чисел:
#for num in range(2, 300):
aa = devis(260)
print(aa[-2::-1])
s = 260
for i in aa[-2::-1]:
    if s-i>0:
        s = s - i
    elif s-i==0:
        print(260, sep=' ', end=', ')
        break