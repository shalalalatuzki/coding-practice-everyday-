#用链表实现栈结构
class Node(object):
    def __init__(self,data,next=None):
        self.next=next
        self.data=data
class stack(object):
    def __init__(self,top=None):
        self.top=top
    def push(self,data):
        self.top=Node(data,self.top)
    def pop(self):
        if self.top==None:
            return None
        self.top=self.top.next
    def peek(self):
        return self.top.data if self.top is not None else None
    def isEmpty(self):
        return self.top is None
#使用栈实现后缀计算
def StackEvaluation(inputString):
    if inputString is None:
        print("请输入有效的字串")
        return None
    numbers=stack()
    for ch in inputString:
        if ch.isdigit():
            numbers.push(ch)
        else:
            num1=numbers.peek()
            numbers.pop()
            num2=numbers.peek()
            numbers.pop()
            numbers.push(str(eval(num2+ch+num1)))
    return int(numbers.peek())

string=input("请输入后缀表达式：")
print(StackEvaluation(string))

