#include<iostream>
#include <utility>
using namespace std;

class Swapnumbers{
    public:
    void swapNum(int& n1,int& n2)
    {
        swap(n1,n2);
    }
};
int main(){
    Swapnumbers swap;
    int n1,n2;
    cin >> n1 >> n2;
    cout<< " n1: " << n1 << " n2: " << n2 << endl;
    swap.swapNum(n1,n2);
    cout << " swapped numbers: " ;
    cout<< " n1: " << n1 << " n2: " << n2 << endl;
}