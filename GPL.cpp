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
        for (int i = s.size()-1; i >= 0; i--) //start backward loop to get lsb at first
        {
            int bin = s[i] - '0';// convert binary stored as string to int
            res = res + (bin * pwr);// multiply binary with 2^n starting with 2^0 i.e 1
            pwr = pwr * 2;// increase the power of 2 by 1
        }
        cout << res << endl;  
    }    
}
