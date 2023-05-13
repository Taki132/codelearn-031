import array as ar
n = input()
a= []
for i in range (int(n)):
    k=int(input())
    a.append(k**2)
    i+=1
for k in (a): 
    print(k,end=" ")