#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    for (char &c : s1) c = tolower(c);
    for (char &c : s2) c = tolower(c);

    if (s1 < s2) cout << -1;
    else if (s1 > s2) cout << 1;
    else cout << 0;

    return 0;

}