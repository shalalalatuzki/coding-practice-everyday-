import sys
def Print2Smallest(arr):
    arr_size=len(arr)
    #int_max=10000000000
    if arr_size<2:
        print("invalid array")
        return 
    first=second=sys.maxsize
    for i in range(0,arr_size):
        if arr[i]<first:
            second=first
            first=arr[i]
        elif arr[i]<second and arr[i]!=first:
            second=arr[i]
    if second==sys.maxsize:
        print ("there is no second smallest number")
    else:
        print ("the smallest number in array is ",first,\
            " and the second smallest number in array is ",second)

arr=[12, 13, 1, 10, 34, 1] 
Print2Smallest(arr)
