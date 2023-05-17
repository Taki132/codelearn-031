def findx(arr,x):
    while x in arr:
        if x == min(arr):
            x = min (arr)
        else:
            if x == ((min(arr)+max(arr))/2):
                x=((min(arr)+max(arr))/2)
            else:
                if x<((min(arr)+max(arr))/2):
                    x=(len((arr[(min(arr)-max(arr))/2])))-1
                else:
                    x=x=(len((arr[(min(arr)-max(arr))/2])))+1
k=input()
arr=[]
for i in range (int(k)):
    arr.append(k)
    i+=1
print(findx(arr,x))