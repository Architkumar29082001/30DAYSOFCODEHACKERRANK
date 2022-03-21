#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int x;
    double y;
    string input_string;
    cin>>x;
    cin>>y;
    cin.get();
    getline(cin,input_string);
    x=x+i;
    d=y+d;
    string full = s + input_string;
    cout<<x<<endl;
    cout<<d<<endl;
    cout<<full<<endl;


    return 0;
}
