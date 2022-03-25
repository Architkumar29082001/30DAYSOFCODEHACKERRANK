#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x;
    cin>>x;
    for (int i=0;i<x;i++){
        string str;
        cin>>str;
        for(int j=0;j<str.length();j++){
            if(j%2==0){
                cout<<str[j];
            }
        }
        cout<<" ";
        for(int k=0;k<str.length();k++){
            if(k%2!=0){
                cout<<str[k];    
            }
        }
        cout<<endl;
    }
    return 0;
}
