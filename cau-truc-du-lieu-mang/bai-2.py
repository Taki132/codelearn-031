import array as ar
n = input()
a= ar.array('i',[])
for i in range (int(n)):
    k=int(input())
    a.append(k)
    i+=1
print(sum(a))