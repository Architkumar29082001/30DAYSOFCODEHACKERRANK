#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%2==0 && x>20 ){
        cout<<"Not Weird";
        
    }
    else if (x%2==0 && x<=5) {
        cout<<"Not Weird";
    }
    else {
        cout<<"Weird";
    }
}
