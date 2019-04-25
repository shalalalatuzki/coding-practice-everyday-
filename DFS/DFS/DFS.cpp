#include<iostream>
#include<list>
using namespace std;
class Graphic {
public:
	Graphic(int V);
	void addEdge(int ver1, int ver2);
	void DFS();
	~Graphic();
private:
	list<int>* adj;
	int V;
	void DFSDeepin(int ver, bool* visited);
};
Graphic::Graphic(int V):V(V){
	adj = new list<int>[V];
}
void Graphic::addEdge(int ver1, int ver2) {
	adj[ver1].push_back(ver2);
}
void Graphic::DFSDeepin(int ver, bool* visited) {
	visited[ver] = true;
	cout << ver << ' ';

	list<int>::iterator i;
	for (i = adj[ver].begin(); i != adj[ver].end(); i++) {
		if (!visited[*i])
		{
			DFSDeepin(*i, visited);
		}
	}
}
void Graphic::DFS() {
	bool* visited = new bool[V];
	for (int i = 0; i < V;i++) {
		visited[i] = false;
	}

	//list<int>::iterator i;
	//这样遍历可以遍历全点，包括无连接的点
	for (int i = 0; i <V;i++) {
		if (!visited[i])
		{
			DFSDeepin(i, visited);
		}
	}
}
Graphic::~Graphic() {
	delete[]adj;
}
int main() {
	int numEdge,numVertex;
	cout << "请输入边数：";
	cin >> numEdge;
	cout << "请输入顶点数:";
	cin >> numVertex;
	Graphic g(numVertex);
	while (numEdge--) {
		int ver1;
		int ver2;
		cin >> ver1;
		cin >> ver2;
		g.addEdge(ver1, ver2);
	}
	g.DFS();
	system("pause");
	return 0;
}