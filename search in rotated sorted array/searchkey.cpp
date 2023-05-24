#include<iostream>
using namespace std;

int getpivot(int arr[], int n);
int binarysearch(int arr[],int s, int e, int key);
int findfunction(int arr[], int n, int k);

int main(){
    int array[5] = {7,9,1,2,3};

    int p = findfunction(array,5,2);

    cout<<"Index of key is "<<p<<endl;

    return 0;
}

int getpivot(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}



int binarysearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = s + (e - s)/2;
    

    while(start < end){
        if(arr[mid] == key){
         return mid;
        }
        else if(mid > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = s + (e - s)/2;
    } 
 
    return -1;

}

int findfunction(int arr[], int n, int k){
    
    int pivot = getpivot(arr,n);

    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch( arr,0,pivot,k);
    }
}