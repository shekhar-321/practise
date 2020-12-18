#include<iostream>
#include<string>
#include<list>

#define VERTICES 6
//Adjancecy list represenation of graph//
using namespace std;
class Graph{
	private:
		int vertex;
		list <int> *edge;
	public:
		Graph(int v){
			vertex=v;
			edge=new list<int>[v];
		}
		void addNode(int vertex,int ed){
			edge[vertex].push_back(ed);
		}
		void printGraph(){
			int vert;
			for (vert=0;vert<vertex;vert++){
				cout<<"vertex "<< vert;
				for(list<int>::iterator it=edge[vert].begin();it!=edge[vert].end();it++)
					cout<<"edge  "<<*it;
			}		cout<<endl;
		}
		~Graph(){
			vertex=0;
			delete [] edge;
		}
		void bfs(int source){
		//** construct a queue **//
		//** move till all nodes are visited **//
			list<int>v;
			bool visited[VERTICES]={false};
			v.push_back(source);
			while(!v.empty()){  
				visited[source]=true;
				//** find the adjacent element to source and add them to the queue **//
				source=v.front();
				cout<<source<<endl;
				for(list<int>::iterator it=edge[source].begin();it!=edge[source].end();it++){
					if (!visited[*it]){
						visited[*it]=true;
						v.push_back(*it);
					}
				}
				v.pop_front();
			}
		}

};

int main(){
//** whether graph is directed or undirected represent graph in directed way so that minimum traversal occurs **//
	Graph graph(VERTICES);
	graph.addNode(0,1);
	graph.addNode(0,2);
	graph.addNode(1,3);
	graph.addNode(1,4);
	graph.addNode(2,4);
	graph.addNode(3,5);
	graph.addNode(3,4);
	graph.addNode(4,5);
	//graph.bfs(2);
	graph.printGraph();
	return 0;
}

