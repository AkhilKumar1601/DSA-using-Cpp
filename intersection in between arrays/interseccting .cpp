#include<iostream>
using namespace std;

int intersection(int arr1[], int n, int arr2[], int m);

int main(){
   
    int papa[5] = {1,2,2,2,3,4};
    int mom[4] = {2,2,3,3};
    
    cout<<intersection(papa,5,mom,4);

    return 0;

}

int intersection(int arr1[], int n, int arr2[], int m){
    
    int i,j = 0;
    int ans;

    while( i<n && j<m){
       
        if(arr1[i] == arr2[j]){
           ans = arr1[i];
           i++;
           j++;
        }
       
        elseif(arr1[i] < arr[j]){
           i++;
        }
       
        else{
            j++;
        }
    
    }
     
    return ans;

}