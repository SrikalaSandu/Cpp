#include<iostream>
using namespace std;
class Solution{
    int removeDuplicates(vector<int> nums)
    {
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i+1]=nums[j];
            }
        }
        return i+1;
    }
};
int main(){
    Solution solution;
    cout << solution.removeDuplicates(nums);
}