#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("Akhil");
    q.push("Kumar");
    q.push("chaudhay");

    cout<<"First Element "<<q.front()<<endl;

    cout<<"Size before pop "<<q.size()<<endl;

    q.pop();

    cout<<"First Element "<<q.front()<<endl;

    cout<<"Size After pop "<<q.size()<<endl;
}