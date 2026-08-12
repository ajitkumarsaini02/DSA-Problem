#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s;
    cin>>s;

    int upper = 0;
    int lower = 0;
    for(char ch : s){
        if(islower(ch)) lower++;
        else upper++;
    }
    if(lower < upper){
        for (char &c : s) c = toupper(c);
    }
    else{
        for (char &c : s) c = tolower(c);
    }
    cout << s;

}