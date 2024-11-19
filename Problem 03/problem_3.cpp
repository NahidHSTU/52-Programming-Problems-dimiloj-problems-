#include<bits/stdc++.h>
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    optimize();
    for (int i = 1000; i >=1 ; --i)
    {
    	cout<<i<<"\t";
    	if ((1001 - i) % 5 == 0) {
            cout << endl;
        }
    }
    return 0;
}