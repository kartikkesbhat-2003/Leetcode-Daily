#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool valid(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    char toLowerCase(char ch)
    {
        if((ch >= 'a' && ch<= 'z') || (ch >= '0' && ch<=9))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string v)
    {
        int s = 0;
        int e = v.length() - 1;
        while(s<e)
        {
            if(v[s] != v[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp;
        int i=0;
        while(s[i]!='\0')
        {
            if(valid(s[i]))
            {
                temp.push_back(toLowerCase(s[i]));
            }
            i++;
        }
        return checkPalindrome(temp);        
    }
};