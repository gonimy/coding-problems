//URL : https://leetcode.com/problems/two-sum/
class Solution {
public:

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];

                  if(find(nums.begin()+i+1, nums.end(), diff) != nums.end()){
  
            auto it = find(nums.begin()+i+1, nums.end(), diff) ;
            int j = distance(nums.begin(), it);
            res.push_back(i);
            res.push_back(j);
        }
    }
    return res;
}


};
