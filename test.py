def summation(n,term):
    total,k=0,1
    while k<=n:
        total,k=total+term(k),k+1
    return total

def cube(x):
    return x*x*x

def square(x):
    return x*x


def sumcubes(n):
    return summation(n,cube)

def sumsquare(n):
    return summation(n,square)

    







