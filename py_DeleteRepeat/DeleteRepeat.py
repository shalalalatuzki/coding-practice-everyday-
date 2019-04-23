from collections import defaultdict
def DeleteRepeat(inputNum):
    myMap=defaultdict(lambda:0)
    size=len(inputNum)-1
    outputNum=[]
    for i in range(size):
        myMap[inputNum[i]]+=1
        if myMap[inputNum[i]]==1:
            outputNum.append(inputNum[i])
    for i in outputNum:
        print(i,end=' ')
str=input("请输入一组数据：")
arr=[int (x) for x in str.split()]
DeleteRepeat(arr)
