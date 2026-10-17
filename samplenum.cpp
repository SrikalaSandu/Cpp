#include<iostream>

using namespace std;

class Calculator{
    public:
    int sumOfThreeNumbers(int n1 , int n2, int n3){
        return n1+n2+n3;
    }
};
int main()
{
    Calculator calc;
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    cout << "sum of three nums : " << calc.sumOfThreeNumbers(n1,n2,n3) << endl;
}