#include <iostream>
#include <queue>
using namespace std;

//IMplementation of a Stack using two Queues

template<typename T>
class Stack{
    queue<T> q1;
    queue<T> q2;
    public:

    void push(int x){
        q1.push(x);
    }

    void pop(){
        //Remove n-1 elemnts from q1 and shift into q2
        if(q1.empty()){
            return;
        }
        while(q1.size()>1){
            T element= q1.front();
            q2.push(element);
            q1.pop();
        }

        //shift the last element as well
        q1.pop();

        //swap the names of the queues
        queue<T> temp= q1;
        q1= q2;
        q2= temp;
    }

    T top(){
        //Remove n-1 elemnts from q1 and shift into q2
        while(q1.size()>1){
            int element= q1.front();
            q2.push(element);
            q1.pop();
        }

        //Store and return the last element 
        T ans= q1.front();
        q2.push(ans);
        q1.pop();

        //swap names
        swap(q1, q2);
        return ans;
    }

    int size(){
        return q1.size() + q2.size();
    }

    bool empty(){
        return size()==0;
    }
};


int main() {
    Stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout<< s.top()<< " ";
        s.pop();
    }
}
