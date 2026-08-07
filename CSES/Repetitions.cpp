#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();

    int mx = 1;
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        mx = max(mx, count);
    }
    cout << mx << endl;
}