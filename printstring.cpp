#include<string>
#include<iostream>
using namespace std;
class printsString{
    public:
    void stringS(string word)
    {
        for(int i=0;i<word.length();i++)
        {
            cout<<word[i]<<endl;
        }
    }
};
int main()
{
    string word="program";
    printsString ps;
    ps.stringS(word);
}