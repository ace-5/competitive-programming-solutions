// https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/

/*Christmas tree of height N
This year Santa wants to make a Christmas tree. But this time he wants to decorate it with numbers as in the Pascal’s triangle. But Santa is very busy in packing the gifts. Now, you being Santa’s friend help in making the tree.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n][n]; //due to overflow
        a[0][0] = 1;
        for (int i = 1; i < n; i++)
        {
            a[i][0] = 1; //first num of each row is 1
            a[i][i] = 1; //last num of each row is 1
            for (int j = 1; j < i; j++) //loop places value of a[][] from second element to second last element in each row
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j]; //add elements that has index value 1 less and same as required elements in upper row
            }
        }
       
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << a[i][j] << ' ';
            }
            cout << "\n";
        }
    }
}