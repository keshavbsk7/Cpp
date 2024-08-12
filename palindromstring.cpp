class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end)
        {
            if(!isalpha(s[start])&&!isdigit(s[start]))
            {
                start++;
                continue;
            }
            if(!isalpha(s[end])&&!isdigit(s[end]))
            {
                end--;
                continue;
            }
            if((char)tolower(s[start])==(char)tolower(s[end]))
            {
                start++;
                end--;
            }
            else return false;
        }
        return true;
    }
};