/*Would you help his friends to convert given Binary String to Decimal and participate in Binod's GPL.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    string s;
    cin >> t;
    while (t--)
    {
        long long int res = 0;
        long long int pwr = 1;
        cin >> n;
        cin >> s;
        for (int i = s.size()-1; i >= 0; i--)
        {
            int bin = s[i] - '0';
            res = res + (bin * pwr);
            pwr = pwr * 2;
        }
        cout << res << endl;  
    }    
}