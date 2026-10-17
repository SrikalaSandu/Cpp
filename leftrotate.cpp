#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> leftrotate(vector<int> arr)
    {
        int len=arr.size();
        int tmp;
        tmp = arr[0];
        for(int i=1 ; i < len-1 ; i++)
        {
            arr[i-1]= arr[i];
        }
        arr[len-1]=tmp;
        return arr;
    }
};
int main(){
    Solution solution;
    vector<int> arr={1,2,3,4,5};
    vector<int> result = solution.leftrotate(arr);
    for(int m:result){
        cout << m << endl;
    }
}