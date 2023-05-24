#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key);

int main(){
    int even[8] = {2,5,6,9,13,14,21,22};
    int odd[5] = {0,1,3,5,9};

    int index = binarysearch(even,8,13);

    cout<<"Index of 13 is "<<index<<endl;

    int indexx = binarysearch(odd,5,0);

    cout<<"Index of 0 is "<<indexx<<endl;

    return 0;
}

int binarysearch(int arr[], int size ,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if( arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}