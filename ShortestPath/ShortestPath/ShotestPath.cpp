#include<iostream>
using namespace std;
#define V 9
int minDistance(const int* dist,const bool* spTree) {
	int minIndex, min = INT_MAX;
	for (int i = 0; i < V;i++) {
		if (!spTree[i]&&dist[i]<min) {
			min = dist[i];
			minIndex = i;
		}
	}
	return minIndex;
}
void printDistance(int dist[]) {
	//cout << "Vertext  " << "Distant from source";
	for (int i = 0; i < V; i++) {
		cout << i << "  " << dist[i] << endl;
	}
}
void dijkstra(int grap[V][V],int src) {
	int dist[V];
	bool spTree[V];

	for (int i = 0; i < V; i++)
	{
		dist[i] = INT_MAX;
		spTree[i] = false;
	}
	dist[src] = 0;
	for (int i = 0; i < V;i++) {

		int u = minDistance(dist, spTree);
		spTree[u] = true;

		for (int v = 0; v < V; v++) {
			if (!spTree[v]&&grap[u][v]&&dist[u]!=INT_MAX&&
				dist[u]+grap[u][v]<dist[v]) {
				dist[v] = dist[u] + grap[u][v];
			}
		}
	}
	printDistance(dist);
}
int main() {
	int graph[V][V] = { {0, 4, 0, 0, 0, 0, 0, 8, 0},
					  {4, 0, 8, 0, 0, 0, 0, 11, 0},
					  {0, 8, 0, 7, 0, 4, 0, 0, 2},
					  {0, 0, 7, 0, 9, 14, 0, 0, 0},
					  {0, 0, 0, 9, 0, 10, 0, 0, 0},
					  {0, 0, 4, 14, 10, 0, 2, 0, 0},
					  {0, 0, 0, 0, 0, 2, 0, 1, 6},
					  {8, 11, 0, 0, 0, 0, 1, 0, 7},
					  {0, 0, 2, 0, 0, 0, 6, 7, 0}
	};

	dijkstra(graph, 0);
	system("pause");
	return 0;
}