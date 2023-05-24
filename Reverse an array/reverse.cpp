#include<iostream>
using namespace std;

void reverse(int arr[],int size);
void printarray(int arr[],int size);

int main(){
   
    int nayaarr[10]={1,2,3,4,5,6,7,87,57,0};

    reverse(nayaarr,10);
    printarray(nayaarr,10);

    return 0;

    }

    void reverse(int arr[],int size){
       int start=0;
       int end=size-1;

        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void printarray(int arr[],int size){
        for (int i=0; i<size; i++){
            cout<<arr[i];
        }
    }