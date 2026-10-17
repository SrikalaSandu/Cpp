#include<iostream>
#include<vector>

using namespace std;

class Numbers{
    public:
    vector<int> numArr(){
        vector<int> arr={300,65,98,30};
        for(int i =0 ; i < arr.size() ; i++ ) 
        {
            arr[i];
        }
        return arr;
    }
};
int main()
{
    Numbers numbers;
    vector<int> result = numbers.numArr();
    for(int i=0 ; i<result.size() ; i++)
    {
        cout << "numbers: " << result[i] << endl;
    }
}