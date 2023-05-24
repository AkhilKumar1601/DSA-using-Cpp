#include<iostream>
using namespace std;

bool search(int array[],int size,int key);

int main(){
    int arr[9]={7,8,9,4,6,2,1,0,10};

    int key;
    cout<<"Enter the number you want to find"<<endl;
    cin>>key;

    bool found=search(arr,9,key);

    if(found){
        cout<<"Entered number is present "<<endl;
    }
    else{
        cout<<"Entered number is not present"<<endl;
    }

    return 0;

}

bool search( int array[],int size,int key){
    for(int i=0; i<size; i++){
        if(key==array[i]){
            return 1;
        }
    }

     return 0;

}
