#include<iostream>
using namespace std;

long long int binarysearch(int n);

double moreprecission(int n, int precision, int tempsol);


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int tempsol = binarysearch(n);
    cout<<"Square root of the given number is "<<moreprecission(n,3,tempsol);

    return 0;
}

long long int binarysearch(int n){
    
    int s = 0;
    
    int e = n;
    
    long long int mid = s + (e - s)/2;
     
   int ans = -1;

    while(s <= e){
        long long square = mid * mid;
        if(square == n)
           return mid;
        else if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}


double moreprecission(int n, int precision, int tempsol){
    double factor = 1;
    double ans = tempsol;

    for(int i = 0; i<precision; i++){
        factor = factor/10;
        for(double j = ans; j*j<n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}