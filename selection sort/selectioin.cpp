#include<iostream>
using namespace std;

void selectionsort(int arr[], int n);

void print(int arr[], int n);

int main(){
    
    int pk[5] = {64,25,12,22,11};

    selectionsort(pk,5);
    
    cout<<"The sorted Array is "<<endl;

    print(pk,5);

    return 0;
}


void selectionsort(int arr[], int n){
    
    for(int i = 0; i < n - 1; i++){
    
        int minindex = i;
    
        for(int j = i + 1; j < n; j++){
    
            if(arr[j] < arr[minindex])
               minindex = j;
             
        }
        swap(arr[minindex],arr[i]);
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}