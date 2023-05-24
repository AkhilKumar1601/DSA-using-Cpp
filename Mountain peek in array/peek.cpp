#include<iostream>
using namespace std;

int mountainpeek(int arr[], int size );

int main(){
    
    int mount[6] = {5,8,10,7,3,1};

    cout<<"Mountain peek in this array is at index "<<mountainpeek(mount,6)<<endl;

    return 0;
}

int mountainpeek(int arr[], int size){
    int s = 0;
    int e = size - 1; 
    int mid = s + (e - s)/2;

    while(s < e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}