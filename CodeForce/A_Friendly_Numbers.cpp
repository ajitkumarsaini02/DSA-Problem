#include<iostream>
#include<cmath>
using namespace std;

int digitSum(long long n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int count =0;
        for(int i=1;i<=90;i++){
            int y = n + i;
            if(digitSum(y) == i){
                count++;
            }
        }
        cout<<count<<endl;;
           }
    return 0;
}