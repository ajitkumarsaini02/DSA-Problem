#include <iostream>
#include <vector>
using namespace std;

class Bank {
    vector<long long> balance;  

public:
    Bank(vector<long long>& b) {
        balance = b;
        for(int i=0; i<balance.size(); i++)
            cout << balance[i] << " ";
        cout << endl;
    }
    
    bool transfer(int account1, int account2, long long money) {
        account1--; account2--;
        if(account1<0 || account2<0 || account1>=balance.size() || account2>=balance.size() || balance[account1]<money)
            return false;
        balance[account1] -= money;
        balance[account2] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        account--;
        if(account<0 || account>=balance.size()) return false;
        balance[account] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        account--;
        if(account<0 || account>=balance.size() || balance[account]<money) return false;
        balance[account] -= money;
        return true;
    }
};

/**
 * Example usage:
 * Bank* obj = new Bank(balance);
 * bool success1 = obj->transfer(account1, account2, money);
 * bool success2 = obj->deposit(account, money);
 * bool success3 = obj->withdraw(account, money);
 */