#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Graph Implementation (adjacency list)
/*l[0]= {1, 2}   Node 0 is connected to Node 1 and Node 2
l[1]= {3, 4}   Node 1 is connected to 3 and 4 
*/

class Graph{
    int v;
    list<int> *l;

    public:
    Graph(int v){
        this->v= v;
        l= new list<int>[v];
    }

    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjacencyList(){
        for(int vertex= 0; vertex<v; ++vertex){
            cout<< "Vertex "<< vertex<< " -> ";
            for(int i: l[vertex]){
                cout<< i<<" ";
            }
            cout<< endl;
        }
    }
};


int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.printAdjacencyList();
}
