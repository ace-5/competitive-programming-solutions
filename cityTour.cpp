/* For a given number of steps (N), calculate the count of possible final position vertices you may end in if you initially started from the origin.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        cout << N * 4 << endl;
    }
    return 0;
}

/*Alternately ::>>>>>
 int main()
{
    int t;
    long long int N;
    long long int x, y;
    cin >> t;
    while (t--)
    {
        int result = 0;
        cin >> N; //0<= N <=10^12 i.e N is always +ve
        for (x = 0; x <= N; x++) // since N is always +ve we can count possible vetices for 1st quadrant 
        {
            for ( y = 0; y <= N; y++)
            {
                if (x+y == N)
                    result++;
            }    
        }
        result = result * 4; // multiply by 4 to count possible vertices for all quadrant
        result = result - 4; // subract 4 to remove vertices on axix which are counted twice
        cout << result << endl;
    }
}
*/