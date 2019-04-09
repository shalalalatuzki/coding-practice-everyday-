def FindNotRepeated(arr,n):
    mp=dict()
    for i in range(n):
        mp[arr[i]]+=1
    for i in range(n):
         if mp[arr[i]]==1:
             return arr[i]
    return -1

arr=[-1,2,-1,3,2]
n=len(arr)
print(FindNotRepeated(arr,n))