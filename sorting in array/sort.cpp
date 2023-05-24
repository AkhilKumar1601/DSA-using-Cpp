#include<iostream>
using namespace std;

void printarray(int arr[], int n);
void sorting(int arr[], int n);

int main(){
    int prr[8] = {1,1,0,0,0,0,1,0};

    sorting(prr,8);
    printarray(prr,8);

    return 0;
}

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i];
    }
    cout << endl;
}

void sorting(int arr[], int n){
   int i = 0 , j = n-1;

   while(i < j){
    while(arr[i] == 0 && i < j){
        i++;
    }
    while(arr[j] == 1 && i < j){
        j--;
    }
    if(i < j){
        swap( arr[i],arr[j]);
        i++;
        j--;
    }
   }
   
}