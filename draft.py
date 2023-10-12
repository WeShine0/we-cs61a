def summation(n,term):
    total,k=0,1
    while k<=n:
        total,k=total+term(k),k+1
    return total

def cube(x):
    return pow(x,3)

def square(x):
    #assert x>0 , nonononononono
    return x*x


def sumcubes(n):
    return summation(n,cube)

def sumsquare(n):
    return summation(n,square)
#lambda x:x*x

    







