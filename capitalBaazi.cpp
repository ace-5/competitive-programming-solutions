/* Given the input of one line, having words separated by a single space, print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == ' ')
      cout << "\n";
    else
    {
      str[i] = str[i] - 32;
      cout << str[i];
    }
  }
  return 0;
}