class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a(2);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    a[0]=i;
                    a[1]=j;
                }
            }
        }
     return a;   
    }
}; //Brute- force ---> Complexity: O(n^2) ---> Can be optimized

-------------------------------------------------------------
  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if (mp.find(complement) != mp.end()){
                return {mp[complement], i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
}; // unordered_map --->Complexity : O(n)---> Optimizer than Brute-force
