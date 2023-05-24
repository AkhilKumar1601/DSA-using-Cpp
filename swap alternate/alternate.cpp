#include<iostream>
using namespace std;

void swapalternate(int arr[],int n);
void printarray(int arr[],int n);

int main(){
    int arr[8] = {56,67,87,54,76,89,80,23};
    int prr[5] = {43,56,73,54,28};

    swapalternate(arr,8);
    printarray(arr,8);

    cout<<endl;

    swapalternate(prr,5);
    printarray(prr,5);

    return 0;
}

void swapalternate(int arr[],int n){
    for(int i = 0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
