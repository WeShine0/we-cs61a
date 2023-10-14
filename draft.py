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

def make_adder(x):
    def adder(y):
        return x+y
    return adder
#相同计算
def make_adder2(x):
    return lambda y:x+y

adder_three  =make_adder(3)
result=adder_three(4)

def compose1(f,g):
    def h(x):
        return f(g(x))
    return h

def curry2_a(f):
    def g(x):
        def h(y):
            return f(x,y)
        return h
    return g

curry2_b=lambda f: lambda x: lambda y: f(x,y)

def cake():
       print('beets')
       def pie():
           print('sweets')
           return 'cake'
       return pie
chocolate=cake()
more_chocolate,more_cake=chocolate(),cake
def snake(x,y):
    if cake==more_cake:
        return chocolate
    else:
        return x+y