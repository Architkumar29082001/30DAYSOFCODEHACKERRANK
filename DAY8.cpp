
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp;
    cin>>temp;
    string name, name2;
    int number;
    map<string, int> phonebook;
    while(temp--){
            cin>>name>>number;
            cin.ignore();
            phonebook[name] = number; 
    }
    while(getline(cin,name2))
        {             
            if(phonebook.find(name2) != phonebook.end())
            {
                cout<<name2<<"="<<phonebook[name2]<<endl;
            }
            else{
                cout<<"Not found"<<endl;
            }
    }
    return 0;

}
