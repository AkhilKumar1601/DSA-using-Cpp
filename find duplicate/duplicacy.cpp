#include<iostream>
using namespace std;

int findduplicate(int arr[], int n);


int main(){
    int boy[7] = {1,2,3,4,5,6,3};

    cout<<"Duplicate Number in the array is "<<findduplicate(boy,7);

    return 0;
}

int findduplicate(int arr[],int n){

    int ans = 0;

    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }

    for(int i = 1; i<n; i++){
        ans = ans^i;
    }

    return ans;
}