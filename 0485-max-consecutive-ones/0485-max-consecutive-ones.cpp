class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        //Time Complexity - O(n)
        //Space Complexity - O(1)

        int maxOne = 0 ;
        int cnt = 0 ;

        for (int i = 0 ; i < nums.size() ; i++){
            if (nums[i] == 1){
                cnt ++;
            }
            else{
                maxOne = max(cnt,maxOne) ;
                cnt = 0 ;
            }
        }
        return max(cnt,maxOne);
    }
};