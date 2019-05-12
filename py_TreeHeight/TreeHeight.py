class Node():
    def __init__(self,data):
        self.data=data;
        self.left=None
        self.right=None
def maxHeight(node):
    if node is None:
        return 0
    else:
        leftHeight=maxHeight(node.left)
        rightHeight=maxHeight(node.right)

        if (leftHeight>rightHeight):
            return leftHeight+1
        else:
            return rightHeight+1

root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
print("max height of tree is %d"%(maxHeight(root)))