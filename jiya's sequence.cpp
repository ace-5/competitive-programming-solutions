/*Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.Print "YES" or "NO",whether Jiya likes the sequence or not.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int noi;
    cin >> t;
    while (t--)
    {
        long long int r = 1; //r is defined as long long int to prevent overflow
        cin >> noi;
        int A; //or int A[noi]
        for (int i = 0; i < noi; i++)
        {
            cin >> A;  // cin >> A[i];
            r = r * A; // r = r * A [i];
            //cout << r <<endl; to check output in case of any error
        }

        int l = r % 10; //to get lsb
        if (l == 2 || l == 3 || l == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}