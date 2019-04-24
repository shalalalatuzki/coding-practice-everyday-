#include<iostream>
#include <list>
using namespace std;
//实现图
class Graphic {
public:
	Graphic(int vertexNum);
	void BFS(int ver);
	void addEdge(int v,int w);
	~Graphic();
private:
	int V;
	list<int>* adj;
};
Graphic::Graphic(int V):V(V) {
	adj = new list<int>[V];
}
void Graphic::addEdge(int v, int w) {
	adj[v].push_back(w);
}
void Graphic::BFS(int ver) {
	list<int> queue;
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}
	visited[ver] = true;
	queue.push_back(ver);
	while (!queue.empty()) {
		int s = queue.front();
		cout << s << " ";
		queue.pop_front();

		list<int>::iterator v;
		for (v = adj[s].begin(); v != adj[s].end(); v++) {
			if (!visited[*v]) {
				visited[*v] = true;
				queue.push_back(*v);
			}
		}


	}
}
Graphic::~Graphic() {
	delete []adj;
}
int main() {
	int nums;
	cout << "请输入顶点数:";
	cin >> nums;
	Graphic graphic(nums);
	int numVer;
	cout << "请输入边：" << endl;
	cin >> numVer;
	for (int i=0;i<numVer;i++){
		int ver1, ver2;
		cin >> ver1;
		cin >> ver2;
		graphic.addEdge(ver1, ver2);
	}
	graphic.BFS(2);
	system("pause");
	return 0;
}