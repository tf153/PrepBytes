#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPalin(string str){
        string s2=str;
        reverse(s2.begin(),s2.end());
        return s2==str;
    }
public:
    string nearestPalindromic(string s) {
        int i=1;
        long n=stol(s);
        if(n<11)
            return(to_string(n-1));
        while(true){
            if(isPalin(to_string(n-i)))
                return to_string(n-i);
            if(isPalin(to_string(n+i)))
                return to_string(n+i);
            i++;
        }
        return "";
    }
};

int main() 
{
    string str;
    cin>>str;
    Solution s;
    cout<<s.nearestPalindromic(str);
    return 0;
}