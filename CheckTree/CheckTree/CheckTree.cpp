#include <iostream>
#include <list>
using namespace std;
class Graphic {
public:
	Graphic(int V);
	void addEdge(int ver1,int ver2);
	bool isTree1();
	bool isTree2();
	bool isTree3();
	~Graphic();
private:
	int V;
	list<int>* adj;
	bool hasCycle(int ver,bool * visited,int parent);
};
Graphic::Graphic(int V):V(V) {
	adj = new list<int>[V];
}
//无向图
void Graphic::addEdge(int ver1, int ver2) {
	adj[ver1].push_back(ver2);
	adj[ver2].push_back(ver1);
}
bool Graphic:: hasCycle(int ver,bool *visited,int parent) {
	visited[ver] = true;

	list<int>::iterator i;
	for (i = adj[ver].begin(); i != adj[ver].end();i++) {
		if (!visited[*i]) {
			if (hasCycle(*i,visited,ver)) {
				return true;
			}
		}
		else if (*i != parent)	return true;
}
	return false;

}
bool Graphic::isTree1() {
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++)	visited[i] = false;

	if (hasCycle(0, visited, -1)) {
		return false;
	}
	for (int i = 0; i < V; i++) {
		if (visited[i] == false) {
			return false;
		}
	}
	return true;
}
Graphic::~Graphic() {
	delete[]adj;
}
int main() {
	Graphic g1(5);
	Graphic g2(5);

	int edge1[4][2] = { {1,0},{0,2},{0,3},{3,4} };
	int edge2[5][2] = { {1,0},{0,2},{2,1},{0,3},{3,4} };
	for (int i = 0; i < 5;i++) {
		if (i < 4) {
			g1.addEdge(edge1[i][0], edge1[i][1]);
		}
		g2.addEdge(edge2[i][0], edge2[i][1]);
	}
	g1.isTree1() ? cout << "是树啊！" << endl : cout << "不是树！" << endl;
	g2.isTree1()? cout << "是树啊！" << endl : cout << "不是树！" << endl;
	system("pause");
	return 0;
}