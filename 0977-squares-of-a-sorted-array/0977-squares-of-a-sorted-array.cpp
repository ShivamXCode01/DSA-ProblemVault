class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        

        //Approach - 2 
        // Time Complexity - O(n)
        // Space Complexity - O(n)
         int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            
            if (abs(nums[left]) > abs(nums[right])) {
                ans[i] = nums[left] * nums[left];
                left++;
            }
            else {
                ans[i] = nums[right] * nums[right];
                right--;
            }
        }
        return ans ; 

        //Approach - 1 
        // Time Complexity - O(nlogn)
        // Space Complexity - O(1)
        
        // for (int i = 0 ; i < nums.size() ; i ++ ){
        //     nums[i] *= nums[i];
        // }

        // sort(nums.begin(), nums.end());
        // return nums;


    }
};