#构建stack类
class Node(object):
    def __init__(self,data,next=None):
        self.data=data
        self.next=next
class stack(object):
    def __init__(self,top=None): 
        self.top=top
    def pop(self):
        if self.top is None:
            return None
        self.top=self.top.next
    def push(self,data):
        self.top=Node(data,self.top)
    def empty(self):
        return self.top is None
    def peek(self):
        return self.top.data if self.top is not None else None
#使用stack类进行排序
def SortByStack(inputStack):
    if inputStack.empty is True:
        print("请输入有效数字！！！")
        return
    sortStack=stack()
    while inputStack.empty()==False:
        temp=inputStack.peek()
        inputStack.pop()
        while sortStack.empty()==False and sortStack.peek()<=temp:
            inputStack.push(sortStack.peek())
            sortStack.pop()
        sortStack.push(temp)
    while sortStack.empty()==False:
        print(sortStack.peek())
        sortStack.pop()
#主调
inputString=input("请输入一组数据：")
inputStack=stack()
for n in inputString.split():
    inputStack.push(int (n))
   # print(inputStack.peek())
SortByStack(inputStack)
