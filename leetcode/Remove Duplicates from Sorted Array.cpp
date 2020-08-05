class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.empty())
return 0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(j==i)
                continue;
            if(nums[i]==nums[j]){
continue;
            }else{
                int tmp=nums[j+1];
                nums[j+1]=nums[i];
                nums[i]=tmp;
                j++;
            }
        }
        return ++j;
        }
};
