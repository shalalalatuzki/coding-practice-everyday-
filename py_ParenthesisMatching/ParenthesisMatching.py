#使用哈希表判断括号是否匹配
def isParenthesisMatching(inputString):
    stack=[]
    paren_map={')':'(','}':'{',']':'['}
    for i in inputString:
        if i=='(' or i=='[' or i=='{':
            stack.append(i)
        elif not stack or paren_map[i]!=stack.pop():
            return False
    return not stack
inputString=input("请输入有效的一组字串：")
if isParenthesisMatching(inputString):
    print("括号匹配")
else:
    print("括号不匹配")
