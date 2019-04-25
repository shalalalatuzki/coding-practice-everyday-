from collections import defaultdict
class Graphic:
    def __init__(self):
        self.adj=defaultdict(list)
    def addEdge(self,ver1,ver2):
        self.adj[ver1].append(ver2)
    def DFSDeepin(self,ver,visited):
        visited[ver]=True
        print(ver,end=' ')

        for i in self.adj[ver]:
            if visited[i]==False:
                self.DFSDeepin(i,visited)
    def DFS(self):
        visited=[False]*len(self.adj)

        for i in range(len(self.adj)):
            if visited[i]==False:
                self.DFSDeepin(i,visited)

numEdges=int (input("请输入边数："))
g=Graphic()
for i in range(numEdges):
    edge=input("请输入一条边：")
    ver1,ver2=edge.split()
    g.addEdge(ver1,ver2)
g.DFS()
