#include<iostream>
using namespace std;

class Solution{
    int jump(vector<int> jg[])
    {
        int maxindex = 0;
        for(int i =0; i<maxindex ; i++)
        {
            if(i>maxindex)
            { return false; }
            maxindex = max(maxindex, i+jg[i]);
        }
        return true;
    }
};
int main()
{
    Solution solution;
    cout << "result:" << solution.jump() << endl;
}