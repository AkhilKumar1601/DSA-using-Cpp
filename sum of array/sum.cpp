#include<iostream>
using namespace std;

int sumarr(int arr[],int n);

int main(){
    int papa[6]={45,68,74,85,95,77};

   int chacha = sumarr(papa,6);

    cout<<"Addition of array "<<chacha<<endl;

    return 0;
}

int sumarr(int arr[],int n){
     int sum = 0;

     for(int i = 0; i<n; i++){
        sum = sum+arr[i];
     }

     return sum;

}