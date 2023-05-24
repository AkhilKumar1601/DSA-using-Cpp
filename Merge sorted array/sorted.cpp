#include<iostream>
using namespace std;

void mergesort(int arr1[], int n, int arr2[], int m, int arr3[]);

void print(int arr[], int n);

int main(){
 
    int arr1[4] = {1,3,5,7};

    int arr2[3] = {2,4,6};

    int arr3[7] ={0};

    mergesort(arr1, 4, arr2, 3, arr3);

    print(arr3, 7);

    return 0;

}

void mergesort(int arr1[], int n, int arr2[], int m, int arr3[]){
    
    int i = 0, j = 0, k = 0;

    while(i < n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n){
        arr3[k++] = arr1[i++];
    }
    while(i < m){
        arr3[k++] = arr2[j++];
    }

}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
