#include<iostream>
using namespace std;

void insertionsort(int arr[], int n);

void printarray(int arr[], int n);

int main(){

    int parul[7] = {10,1,7,4,8,2,11};

    insertionsort(parul,7);

    cout<<"Sorted are as below"<<endl;

    printarray(parul,7);

    return 0;
}

void insertionsort(int arr[], int n){
    for(int i = 1; i < n ; i++){
        
        int temp = arr[i];

        int j = i - 1;

    while(j >= 0){

       if(arr[j] > temp){
             arr[j + 1] = arr[j];
       }
       else{
        break;
       }

       j--;

    }

    arr[j + 1] = temp;

    }
    
    //   for(int i = 1; i<n; i++) {
    //     int temp = arr[i];
    //     int j = i-1;
    //     for(; j>=0; j--) {
            
    //         if(arr[j] > temp) {
    //             //shift
    //             arr[j+1] = arr[j];
    //         }
    //         else { // ruk jao
    //             break;
    //         }
            
    //     }
    //     //copy temp value
    //     arr[j+1] = temp;  
    // } 
}

void printarray(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        cout<<arr[i];
    }
}