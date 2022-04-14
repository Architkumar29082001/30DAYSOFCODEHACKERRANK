#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    for (size_t t = 0 ; t < T ; ++t) {
        int n;
        bool prime = true;
        cin >> n;
        if (n > 1) {
            for (size_t i = pow(M_E, log(n)/2) ; i > 1 ; --i) {
                if ( !(n % i) ) {
                    prime = false;
                    break;
                }
            }
        } else {
            prime = false;
        }
        if ( prime ) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
********************************************************************************************************************************************************************
/* second code 
*/


#include <bits/stdc++.h>
using namespace std;

bool primeornot(int );

int main() 
{
    int n, i;
    bool f;
    cin >> n;
    
    vector<int> arr(n);
    for(i = 0; i < n; ++i)
    {
        cin >> arr[i];
        bool f = primeornot(arr[i]);
        
        if(f)
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not prime"<<endl;
        }
    }    
    return 0;
}

bool primeornot(int n)
{
    int i ,sqr;
    if(n == 1)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    sqr = sqrt(n);
    for(i = 2; i <= sqr; ++i )
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
        
}
