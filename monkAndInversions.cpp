// https://www.hackerearth.com/practice/codemonk/ Array and string
// Monk and Inversions
/*
Now, Micro has asked Monk to find out the number of inversion in the matrix M. Number of inversions, in a matrix is defined as the number of unordered pairs of cells {(i,j), (p,q)} such that M[i][j] > M[p][q] & i<=p & j <=q.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >>  n;
        int count=0;
        int m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        } 
        for (int i=0; i<n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                /*
                    x and y itirates each element from elements selected by [i][j] to [n][n] 
                    only then it moves to next elements selected by increasing j by 1 till j<n
                    then it moves to next row by increasing i by 1
                */
                for (int x = i; x<n; x++) 
                {
                    for (int y = j; y<n; y++)
                    {
                        if (m[x][y] < m [i][j]) 
                        {
                            count++;
                        }
                        
                    }
                    
                }  
            }
        }
        cout << count << endl;
    }
    return 0;
}