#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
        long long withoutAi = (n + (x + y) - 1) / (x + y);

        long long withAi;

        if (x * z >= n)
        {
            withAi = (n + x - 1) / x;
        }
        else
        {
            long long rem = n - z * x;
            withAi = z + (rem + (x + y * 10) - 1) / (x + y * 10);
        }
        cout << min(withAi, withoutAi) << endl;
    }
}