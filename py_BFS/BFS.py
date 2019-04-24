from collections import defaultdict
class Graphic:
    def __int__(self):
        self.adj=defaultdict(list)
    def addEdge(self,v,w):
        self.adj[v].append(w)
    def BFS(self,ver):
        pass
numEdge=input("请输入边数：")
g=Graphic()
for i in range(numEdge):
    edge=input("请输入一条边：")
    vert=[int (x) for x in edge.split()]
    g.addEdge(vert[0],vert[1])
g.BFS(2)

