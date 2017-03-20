import time, math
s= time.time()

def numdiv(q):
    z=0
    for i in range(1, (int(math.ceil(math.sqrt(q)))+1)):
        if q%i==0:
            z+=2
    return z

x=2
z=0
while z<10000:
    if numdiv(x)==2:
        z+=1
    x+=1
print(x-1)
print(time.time() - s)
