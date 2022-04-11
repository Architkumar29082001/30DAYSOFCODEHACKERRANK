#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    int num[n];
    int count = 0;
    for (int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (num[i]>num[j]){
                    temp=num[i];
                    num[i]=num[j];
                    num[j]=temp;
                    count++;
                }
            }
        }
    
    int len = sizeof(num)/sizeof(num[0]);
    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
    cout<<"First Element: "<<num[0]<<endl;
    cout<<"Last Element: "<<num[len-1]<<endl;


}

