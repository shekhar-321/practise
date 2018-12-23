#include<iostream>
#include<string>
#include<vector>

//Adjancecy list represenation of graph//
using namespace std;
class Graph{
public:
int vertex;
vector <int> edge;
Graph(){
vertex=0;
}
void addNode(int vertex,int ed){
this->vertex=vertex;
edge.push_back(ed);
}
};

void printGraph(vector<Graph>&v){
for(unsigned iterator=0;iterator<v.size();iterator++){
cout<<"vertex ->"<<v[iterator].vertex;
for(unsigned it=0;it<v[iterator].edge.size();it++)
cout<<"edge - >"<<v[iterator].edge[it];
cout<<endl;
}

}

int main(){
vector<Graph>graph(5,Graph());
graph[0].addNode(0,1);
graph[0].addNode(0,2);
graph[1].addNode(1,3);
graph[1].addNode(1,4);
graph[2].addNode(2,0);
graph[2].addNode(2,3);
graph[3].addNode(3,1);
graph[3].addNode(3,2);
graph[3].addNode(3,4);
graph[4].addNode(4,1);
graph[4].addNode(4,3);
printGraph(graph);
return 0;
}

