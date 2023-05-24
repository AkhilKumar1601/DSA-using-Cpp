#include<iostream>
using namespace std;

int firstocc(int arr[], int size , int key);

int lastocc(int arr[], int size , int key);

int main(){
    int even[8] = {5,7,7,8,9,10,12,14};

    cout<<"The first occurence of 7 is at index "<<firstocc(even,8,7)<<endl;
    cout<<"The last occurence of 7 is at index "<<lastocc(even,8,7)<<endl;

    int first = firstocc(even,8,7);
    int last = lastocc(even,8,7);

    int totaloccurence = (last - first) + 1;


    cout<<"The total number of occurence of 7 is "<<totaloccurence<<endl;
    
    
    return 0;
}

int firstocc(int arr[], int size , int key){
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s)/2;
    int ans = -1; 

    while(s <= e){
        if( arr[mid] == key ){
           ans = mid;
           e = mid - 1;
        }
        else if( arr[mid] < key ){
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



int lastocc(int arr[], int size , int key){
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s)/2;
    int ans = -1; 

    while(s <= e){
        if( arr[mid] == key ){
           ans = mid;
           s = mid + 1;
        }
        else if( arr[mid] < key ){
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


