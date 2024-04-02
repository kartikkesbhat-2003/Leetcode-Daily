# Valid Palindrome

## Problem Link
[LeetCode - Valid Palindrome](https://leetcode.com/problems/valid-palindrome/submissions/1064586408/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given a string `s`, we are to determine if it is a palindrome after ignoring non-alphanumeric characters and considering uppercase and lowercase characters to be equal.
- We define helper functions to check if a character is valid (i.e., alphanumeric) and to convert a character to lowercase.
- We iterate through the string, converting each valid character to lowercase and storing it in a temporary string.
- We then check if the temporary string is a palindrome by comparing characters from the start and end of the string.

## Time Complexity
O(n), where n is the length of the input string `s`.
- We iterate through the string once to create the temporary string.
- Checking if the string is a palindrome also takes O(n) time.

## Space Complexity
O(n)
- We use additional space to store the temporary string, which can be at most the same length as the input string.

## Code
```cpp
class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        } else {
            return false;
        }
    }

    char toLowerCase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            return ch - 'A' + 'a';
        }
    }

    bool checkPalindrome(string v) {
        int s = 0;
        int e = v.length() - 1;
        while (s < e) {
            if (v[s] != v[e]) {
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
        int i = 0;
        while (s[i] != '\0') {
            if (valid(s[i])) {
                temp.push_back(toLowerCase(s[i]));
            }
            i++;
        }
        return checkPalindrome(temp);        
    }
};
