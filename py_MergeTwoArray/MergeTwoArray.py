def MergeTwoArray(arr1,arr2):
    n1=len(arr1)
    n2=len(arr2)
    
    if n1==0 or n2==0:
        print("请输入有效的数组")
        return 
    i,j,k=0,0,0
    arr3=[None]*(n1+n2)
    while i<n1 and j<n2:
        if arr1[i] <arr2[j]:
            arr3[k]=arr1[i]
            k=k+1
            i=i+1
        else:
            arr3[k]=arr2[j]
            k=k+1
            j=j+1
    while i<n1:
        arr3[k]=arr1[i]
        k=k+1
        i=i+1
    while j<n2:
        arr3[k]=arr2[j]
        k=k+1
        j=j+1
    print("合并后为：")
    print(arr3)
arr1=input("请输入第一个从小到大排列有序数组：")
arr1=[int (n) for n in arr1.split()]

arr2=input("请输入第二个从小到大排列有序数组：")
arr2=[int(n) for n in arr2.split()]

MergeTwoArray(arr1,arr2)
