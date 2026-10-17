#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class longestPalindrome{
    public:
    int longPalindrome(string s)
    {
        unordered_map<char, int> charCounts;
        for(char c : s)
        {
            charCounts[c]++;
        }
        int length = 0;
        bool hasOdd=false;
        for(auto pair : charCounts){
            int count = pair.second;
            length+= (count/2) * 2;
            if (count%2==1)
            {
                hasOdd = true;
            }
        }
        if(hasOdd)
        {   length += 1;   }
        return length;
    }
};

int main()
{
    longestPalindrome pal;
    cout << pal.longPalindrome("a");
    return 0;
}