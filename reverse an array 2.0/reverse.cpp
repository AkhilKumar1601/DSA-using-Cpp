#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v);

void print(vector<int> v);

int main(){

    vector<int> v;

    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    v.push_back(500);
    v.push_back(60);

    vector<int> ans = reverse(v);

    cout<<"Printing an Array "<<endl;

    print(ans);

    return 0;
}

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()- 1;

    while(s <= e){
        swap(v[s],v[e]);
        s++;
        e--;
    }

    return v;

}


void print(vector<int> v){
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
