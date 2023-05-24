#include<iostream>
using namespace std;

void bubblesort(int arr[], int n);

void printarray(int arr[], int n);

int main(){

    int paraboy[6] = {10,1,7,6,14,9};

    bubblesort(paraboy,6);


    cout<<"The sorted array is "<<endl;

    printarray(paraboy,6);

    return 0;
}

void bubblesort(int arr[], int n){
 
    for(int i = 0; i < n - 1 ; i++){
 
        bool swapped = false;
 
        for( int j = 0; j < n - i - 1; j++){
 
        if(arr[j] > arr[j + 1]){
 
            swap(arr[j],arr[j + 1]);
 
            swapped = true;
 
        }
 
        }
        if(swapped == false){
 
            break;
 
        }
 
    }
}


void printarray(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        cout<<arr[i]<<" ";
    }
}