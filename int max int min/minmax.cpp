#include<iostream>
using namespace std;

int getmax(int array[],int n );         // array declaration
int getmin(int array[],int n);

int main(){
    int size;
    cout<<"Enter the how many elements you want to enter in an array"<<endl;
    cout<<"don't enter the more than 100"<<endl;
    cin>>size;

    int array[100];                        // intialising an array

   for (int i=0; i<size ; i++){
        cin>>array[i];
   }

   cout<<"Maximum value is "<<getmax(array,size)<<endl;      //Functioin call
   cout<<"Minimum value is "<<getmin(array,size);

   return 0;
}

int getmax( int array[],int  n){
    int max;
    max=INT32_MIN;

   for(int i=0; i<n; i++){
    if (array[i]>max)
    {
        max=array[i];
    }
   }
   return max;
}
int getmin(int array[],int n){
    int min;
     min=INT32_MAX;

    for(int i=0; i<n; i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
}
