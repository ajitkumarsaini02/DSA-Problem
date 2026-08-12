#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ans = "";
        int n = s.length();

        if (n > 10)
        {
            ans += s[0];
            ans += to_string(n - 2);
            ans += s[n - 1];
            cout << ans << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}