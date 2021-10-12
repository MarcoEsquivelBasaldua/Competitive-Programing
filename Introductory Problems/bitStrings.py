def modulo(n):
    m = 10000000000+7

    if n == 1:
        return 2
    else:
        return (2*modulo(n-1))%m


n = int(input())    

print(modulo(n))