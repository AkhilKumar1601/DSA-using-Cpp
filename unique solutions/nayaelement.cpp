#include<iostream>
using namespace std;

int uniqueelement(int arr[], int size);

int main(){
     int pappu[7] = {34,56,76,84,76,34,56};

     cout<<uniqueelement(pappu,7);



     return 0;

}

int uniqueelement(int arr[], int size){
    int ans = 0;
    for( int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
      
      return ans;

}