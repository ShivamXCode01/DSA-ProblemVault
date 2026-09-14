class Solution {
public:
    int findNumbers(vector<int>& nums) {
        //Time Complexity - O(n)
        //Space Complexity - O(1)

        //Approach - 1
        int cnt = 0 ;
        for (int i = 0 ; i < nums.size() ; i++){
            if ((nums[i] >= 10 && nums[i] <= 99) || (nums[i] >= 1000 && nums[i] <= 9999) 
                    || (nums[i] == 100000)){
                cnt ++;
            }
        }
        return cnt ;

        
        //Approach - 2
        // Convert the numbers in string then 
        // Count/calculate  the length of the string and divide it by 2 and maintain a variable count = 0  
        // if remainder is 0 then even and increase the cnt by 1  else odd    

    }
};