// https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/


/*Rules to convert a string to a number:
1. Convert the UpperCase letters to LowerCase letters
2. Convert the LowerCase letters to UpperCase letters

Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the LowerCase letters. The resultant number is X.

Note: If X is negative take absolute value of it

Print 1 if X is a prime number and 0 if not*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0;
    string s;
    int count = 0;
    cin >> s;

    /*To convert lowercase to uppercase and vice versa*/
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
            s[i] -= 32;
        else
            s[i] += 32;
    }
    
    /*To add ASCII value of individual char to x (or subtract)*/
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
            x -= s[i];
        else 
            x += s[i];
    }
    /*I tried to add the ASCII value of lowercase and subtract that of UPPERCASE from the original string directly but It was only partially accepted*/ 

    //Like this ==>
    /*
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
            x += s[i]; //add ASCII of lowercase 
        else
            x -= s[i]; //sub ASCII of uppercase
    }
    */

    /*To get absolute value if negative*/
    if (x < 0)
        x = x * (-1);

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }   
    }

    if (count == 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}