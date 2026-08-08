#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            x++;
        }
        else if (s[1] == '-')
        {
            x--;
        }
    }
    cout << x << endl;
}