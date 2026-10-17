#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxnum=INT_MIN;
        int len = nums.size();
        for(int i=0 ; i<len ; i++)
        {
            maxnum=max(maxnum , nums[i]);
        }
        return maxnum;
    }
};
int main(){
    Solution solution;
    vector<int> nums;
    int n;
    cout << "how many numbers? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << "greatest number : " << solution.largestElement(nums);
}