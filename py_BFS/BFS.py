from collections import defaultdict
class Graphic:
    def __init__(self):
        self.adj=defaultdict(list)
    def addEdge(self,v,w):
        self.adj[v].append(w)
    def BFS(self,ver):
        visited=[False]*(len(self.adj))
        queue=[]
        visited[ver]=True
        queue.append(ver)
        
        while queue:
            s=queue.pop(0)
            print(s,end=' ')
            for i in self.adj[s]:
                if visited[i] is False:
                    visited[i]=True
                    queue.append(i)
numEdge=int(input("请输入边数："))
g=Graphic()
for i in range(numEdge):
    edge=input("请输入一条边：")
    vert=[int (x) for x in edge.split()]
    g.addEdge(vert[0],vert[1])
g.BFS(2)

