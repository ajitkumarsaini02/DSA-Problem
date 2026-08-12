#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] + arr[1] + arr[2] >= 2)
            ans++;
    }
    cout << ans << endl;
}