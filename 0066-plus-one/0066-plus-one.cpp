class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        //Time Complexity - O(n)

        for (int i = digits.size() - 1 ; i >= 0 ; i--){

            if (digits[i] == 9){
                digits[i] = 0 ;
            }
            else{
                digits[i] += 1 ;
                return digits;
            }
        } 
        //Space Complexity - O(n)

        // vector<int>ans(digits.size()+1);
        // ans[0]=1;
        // return ans;

        //Space Complexity - O(1)
        digits.insert(digits.begin(), 1);
        return digits ;
    }
};