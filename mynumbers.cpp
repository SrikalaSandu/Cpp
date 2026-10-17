#include<iostream>
using namespace std;

class MyNumbers
{
    public:
    bool isEven(int num){
        if(num%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int sumOfTwoNumbers(int n1, int n2){
        return n1+n2;
    }
};
int main()
{
    MyNumbers numbers;
    int n1, n2;
    int num;
    cin >> n1 >> n2;
    cout << numbers.sumOfTwoNumbers(n1,n2);
}