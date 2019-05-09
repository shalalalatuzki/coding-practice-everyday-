import sys
V=9
def minDistance(dist,spTree):
    min=sys.maxsize
    minIndex=0
    for i in range(V):
        if spTree[i]==False and dist[i]<min:
            min=dist[i]
            minIndex=i
    return minIndex
def printDistance(dist):
    print("Vertex \tDistance from Source")
    for node in range(V):
        print(node,"\t",dist[node])
def shotestPath(graph,src):
    dist=[sys.maxsize]*V
    spTree=[False]*V
    dist[src]=0

    for i in range(V):
        u=minDistance(dist,spTree)
        spTree[u]=True

        for v in range(V):
            if spTree[v]==False and graph[u][v] and dist[u]+graph[u][v]<dist[v]:
                dist[v]=dist[u]+graph[u][v]
    printDistance(dist)


graph = [[0, 4, 0, 0, 0, 0, 0, 8, 0], 
           [4, 0, 8, 0, 0, 0, 0, 11, 0], 
           [0, 8, 0, 7, 0, 4, 0, 0, 2], 
           [0, 0, 7, 0, 9, 14, 0, 0, 0], 
           [0, 0, 0, 9, 0, 10, 0, 0, 0], 
           [0, 0, 4, 14, 10, 0, 2, 0, 0], 
           [0, 0, 0, 0, 0, 2, 0, 1, 6], 
           [8, 11, 0, 0, 0, 0, 1, 0, 7], 
           [0, 0, 2, 0, 0, 0, 6, 7, 0] 
          ]; 
  
shotestPath(graph,0); 