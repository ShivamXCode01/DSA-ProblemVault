class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       

        //Approach - 3 using set 
        // Time Complexity - O(n) 
        //Space Complexity - O(n)

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
        // Time Complexity - O(nlogn)
        //Space Complexity - O(1)


        // sort(nums.begin(), nums.end());

        // for (int i = 0 ; i < nums.size() - 1 ; i++){
        //     if (nums[i] == nums[i+1]){
        //         return true ;
        //     }
        // }
        // return false ;



        //Approach - 1
        // Time Complexity of this method is O(n^2)
        //Space Complexity - O(1)
        
        
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
