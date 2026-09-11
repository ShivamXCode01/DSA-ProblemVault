class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // 1,2,3,1
        //   i
        //     j

        // better approach 
        sort(nums.begin(), nums.end());

        for (int i = 0 ; i < nums.size() - 1 ; i++){
            if (nums[i] == nums[i+1]){
                return true ;
            }
        }
        return false ;

        // Time Complexity of this method is O(n)
        // int n = nums.size();
        // for (int i = 0 ; i < n-1 ; i++){
        //     for (int j = i+1 ; j < n ; j++ ){
        //         if (nums[i] == nums[j]){
        //          return true;
        //         }
        //     }
        // }
        // return false;
    }
};