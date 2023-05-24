#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;

    d.push_back(5);
    d.push_front(4);

//    for(int i : d){
//     cout<<i<<" ";
//    }

    //d.pop_front();

//     for(int i : d){
//     cout<<i<<" ";
//    }

    //d.pop_back();

    // for(int i : d){
    //     cout<<i<<" ";
    // }

    cout<<"First Index Element"<<" "<<d.at(1)<<endl;

    cout<<"Element in front "<<d.front()<<endl;

    cout<<"Element in back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);

    cout<<"After erase "<<d.size()<<endl;
}