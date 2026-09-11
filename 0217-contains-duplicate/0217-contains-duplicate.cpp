class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       

        //Approach - 3 using set 

        set <int> s ;

        for (int num : nums){
            if (s.contains(num)){
                return true ;
            }
            s.insert(num);
        }
        return false;




        //Approach -2  
        // first we sort our array then find duplicates in it 
        // Time Complexity - O(n)
        sort(nums.begin(), nums.end());

        for (int i = 0 ; i < nums.size() - 1 ; i++){
            if (nums[i] == nums[i+1]){
                return true ;
            }
        }
        return false ;



        //Approach - 1

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