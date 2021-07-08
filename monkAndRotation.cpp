// https://www.hackerearth.com/practice/codemonk/ Array and String
// Monk and Rotation
/* Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int n = 0;
	int k = 0;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> k;
		int a[n];
		for (int i = 0; i < n; i++)\
		{
			cin >> a[i];
		}
        int b[n];
        for (int i = 0; i < n; i++)
        {
            // this condition check logic gives runtime error
            // if ((i+k) < n)
            // {
            //     b[i+k] = a[i];
            // }
            // else
            // {
            //     b[(i+k) - n] = a[i];
            // }
            b[(i+k)%n] = a[i];
        }
        for (int  i = 0; i < n; i++)
            cout << b[i] << ' ';
        cout << endl; //!!!!!IMPORTANT!!!!!!!! gave me headache for 30 minutes
	}
}
