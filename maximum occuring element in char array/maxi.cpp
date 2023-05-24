#include<iostream>
using namespace std;

char getmaxoccur(string s);

int main(){
    string s;
    cin >> s;
    cout<<getmaxoccur(s);

    return 0;
}

char getmaxoccur(string s){
    
    int arr[26] = {0};

    // create an count of character
    for(int i = 0; i<s.length(); i++){
        int number = 0;
        char ch = s[i];
        //lowercase
        if(ch >= 'a' && ch <= 'z')
        number = ch - 'a';
        else//uppercase
        number = ch - 'A';
        arr[number]++;
    }

    //find maximum occuring character
    int maxi = -1, ans = 0;
    for(int i = 0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

