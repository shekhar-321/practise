#include<iostream>
#include<list>
using namespace std;
#define VERTICES 6
class Graph{
  private:
    int vertex;
    list<int>*edge;
    bool visited[VERTICES];
    public:
    Graph(int v){
      vertex = v;
      edge = new list<int>[vertex];
    }
    ~Graph(){
      delete[] edge;
    }
    void addEdge(int vertex,int value){
      edge[vertex].push_back(value);
   }
    void printGraph(){
    int vert;
    for(vert=0;vert<VERTICES;vert++){
      cout<<"vertex is" << vert<< endl;
      for(list<int>::iterator it=edge[vert].begin();it!=edge[vert].end();it++)
        cout<<"edge is"<<*it;
      }
    }
    void intialize(){
    int i;
    for(i=0;i<VERTICES;i++)
       visited[i]=false; 
    }
    void dfs(int source);
    };
    void Graph::dfs(int source){
      visited[source]=true;
      cout<<source<< "";
      for (list<int>::iterator it=edge[source].begin();it!=edge[source].end();it++){
        if (!visited[*it])
         dfs(*it);
      }  
    }   
int main(){

Graph graph(VERTICES);
graph.addEdge(0,1);
graph.addEdge(0,2);
graph.addEdge(1,2);
graph.addEdge(2,0);
graph.addEdge(2,3);
graph.addEdge(3,3);
graph.intialize();
graph.dfs(0);
return 0;
}

