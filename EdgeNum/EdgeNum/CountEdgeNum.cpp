#include<iostream>
#include<list>
using namespace std;
class Graph {
public:
	Graph(int V);
	void addEdge(int v1,int v2);
	int CountEdge();
	~Graph();
private:
	int V;
	list<int>* adj;
};
Graph::Graph(int V):V(V) {
	adj = new list<int>[V];
}
void Graph::addEdge(int v1, int v2) {
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
}
int Graph::CountEdge() {
	int sum = 0;

	for (int i = 0; i < V;i++) {
		sum+=adj[i].size();
	}
	return sum / 2;
}
Graph::~Graph() {
	delete[]adj;
}
int main() {
	int V = 9;
	Graph g(V);

	g.addEdge(0, 1);
	g.addEdge(0, 7);
	g.addEdge(1, 2);
	g.addEdge(1, 7);
	g.addEdge(2, 3);
	g.addEdge(2, 8);
	g.addEdge(2, 5);
	g.addEdge(3, 4);
	g.addEdge(3, 5);
	g.addEdge(4, 5);
	g.addEdge(5, 6);
	g.addEdge(6, 7);
	g.addEdge(6, 8);
	g.addEdge(7, 8);

	cout << g.CountEdge() << endl;
	system("pause");
	return 0;
}