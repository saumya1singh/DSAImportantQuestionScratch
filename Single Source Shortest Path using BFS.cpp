#include <iostream>
using namespace std;

// Single Source Shortest Path using BFS

void SSSP(int src){
    queue>int> q;
    map<int, int> distance;

    //Mark all the disances as infinity
    for(auto nodePair: l){
        int node= nodePair.first;
        distance[node]= INT_MAX;
    }
    q.push(src);
    distance[src]= 0;

    while(!q.empty()){
        int node= q.front();
        q.pop();

        for(int neighbour: l[node]){
            q.push(neighbour);
            //Distance of cheild is equal to distance of parent + 1
            distance[neighbour]= distance[node] + 1;
        }
    }

    //Print the node
    for(int nodePair: l){
        int node= nodePair.first;
        cout<< "Node "<< node<< " Distance form src "<< distance[node]<<endl;
    }
    
}
