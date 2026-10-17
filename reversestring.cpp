#include<string>
#include<iostream>
using namespace std;
class reversesString{
    public:
    void stringS(string word)
    {
        string str;
        string temp;
        for(int i=0;i<word.length();i++)
        {
            temp=word[i];
            str[i]=temp;
            word[i]=str[i];
        }
        cout<<word;
    }
};
int main()
{
    string word="program";
    reversesString rs;
    rs.stringS(word);
}