#include<iostream>
using namespace std;

int aggressivecows(int arr[],int n, int k);

bool ispossible(int arr[], int k, int mid ,int n);

int main(){
    
    int ak[5] = {1,2,3,4,6};

    cout<<"The answer is "<<aggressivecows(ak,5,2);

    return 0;
}


int aggressivecows(int arr[],int n,int k){

    int s = 0;

    int e = n - 1;

    int ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e){
        if(ispossible(arr,k,mid,n)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}


bool ispossible(int arr[],int k, int mid , int n){
    
    int cowcount = 1;
    
    int lastpos = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] - lastpos >= mid){
            cowcount++;
            if(cowcount == k)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}