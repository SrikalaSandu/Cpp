#include<iostream>
#include<string>
using namespace std;
class marksBySrikala{
    public:
    void markGrade(char word){
        switch(word)
        {
        case 'A':
            cout<<"1";
            break;
        case 'B':
            cout<<"2";
            break;
        case 'C':
            cout<<"3";
            break;
        case 'D':
            cout<<"4";
            break;
        case 'F':
            cout<<"5";
            break;
        default:
        cout<<"invalid";
        }
    }
};
int main(){
    marksBySrikala mmarks;
    char word;
    cin>>word;
    cout<<"number:";
    mmarks.markGrade(word);
}