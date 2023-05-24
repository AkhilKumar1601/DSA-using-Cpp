#include<iostream>
using namespace std;

int painterallocate(int arr[],int n, int m);

bool ispossible(int arr[], int n, int m, int mid);

int main(){
    
    int pops[4] = {5,5,5,5};

    cout<<"The answer is "<<painterallocate(pops,4,2);

    return 0;
}

int painterallocate(int arr[], int n, int m){
    
    int s = 0; 
    
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    int e = sum;
    
    int ans = -1;
    
    int mid = s + (e - s)/2;
 
    while(s <= e){
        if(ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}


bool ispossible(int arr[], int n, int m, int mid){
    
    int paintercount = 1;
    
    int completerboardsum = 0;

    for(int i = 0; i<n; i++){
        if(completerboardsum + arr[i] <= mid){
            completerboardsum += arr[i];
        }
        else{
           
            paintercount++;
           
            if(paintercount > m || arr[i] > mid){
                return false;
            }
            completerboardsum = arr[i];
        }
        if(paintercount > m){
            return false;
        }
    
    }
    return true;
}