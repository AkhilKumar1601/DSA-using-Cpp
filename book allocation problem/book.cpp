#include<iostream>
using namespace std;

int bookallocate(int arr[],int n, int m);

bool ispossible(int arr[], int n, int m, int mid);

int main(){
    
    int pops[4] = {10,20,30,40};

    cout<<"The answer is "<<bookallocate(pops,4,2);

    return 0;
}

int bookallocate(int arr[], int n, int m){
    
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
    
    int studentcount = 1;
    
    int pagesum = 0;

    for(int i = 0; i<n; i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
           
            studentcount++;
           
            if(studentcount > m || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
        if(studentcount > m){
            return false;
        }
    
    }
    return true;
}