/*Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order. We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B)
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;
    // int j = 0;
    int cNo;
    int step = 0;
    cin >> A >> B >> C;
    for (int i = 2; C > 0; i++)
    {
        if (i % A == 0 || i % B == 0)
        {
            C--;
            cNo = i;
        }
    }
    int lcm;
    for (int i = 1; i <= A * B; i++)
    {
        if (i % A == 0 && i % B == 0)
        {
            lcm = i;
            break;
        }
    }
    if (cNo % A == 0 && cNo % B == 0)
    {
        step = lcm;
    }
    else if (cNo % A == 0)
    {
        step = A;
    }
    else
        step = B;

    for (int i = cNo; i >= 0; i = i - step)
    {
        cout << i << ' ';
    }
    return 0;
}