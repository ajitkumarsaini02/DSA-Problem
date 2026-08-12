#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    bool isPalindrome(const string &s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    bool palindromePair(vector<string>& arr) {
        unordered_map<string, int> mp;
        
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]] = i;
        }
        
        for(int i=0;i<arr.size();i++) {
            string word = arr[i];
            int n = word.size();
            for(int j=0;j<=n;j++) {
                string left = word.substr(0, j);
                string right = word.substr(j);
                
                if(isPalindrome(left)) {
                    string revRight = right;
                    reverse(revRight.begin(), revRight.end());
                    
                    if(mp.count(revRight) && mp[revRight] != i)
                        return true;
                }
                
                if(j != n && isPalindrome(right)) {
                    string revLeft = left;
                    reverse(revLeft.begin(), revLeft.end());
                    
                    if(mp.count(revLeft) && mp[revLeft] != i)
                        return true;
                }
            }
        }
        return false;
    }
};