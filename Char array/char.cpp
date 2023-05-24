#include<iostream>
using namespace std;

int getLength(char name[]);

void reverse(char name[], int n);

bool checkpalindrome(char a[], int n);

int main(){

    char name[20];

    cout<<"Enter your name "<<endl;
    cin>> name;
    name[3] = '\0';

    cout<<"your name is ";
    cout<< name <<endl;

    int shabad = getLength(name);

    cout<<"Length: "<<shabad<<endl;

    reverse(name,shabad);

    cout<< name <<endl;

    cout<<"Name is palindrome or not "<<checkpalindrome(name,shabad)<<endl;

    return 0;

}

int getLength(char name[]){
    int count = 0;
    
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

void reverse(char name[],int n){
     int s = 0;
     int e = n - 1;
     while(s < e){
        swap(name[s++],name[e--]);
     }
}

bool checkpalindrome(char str[],int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        if(str[s] != str[e])
          return 0;
        else{
          s++;
          e--;
        }
    }

    return 1;
}