class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        //Time Complexity - O(n)

         for (int i = arr.size() - 1 ; i >= 0 ; i--){

             if (arr[i] == 9){
                 arr[i] = 0 ;
             }
             else{
                 arr[i] += 1 ;
                 return arr;
             }
         } 
         //Space Complexity - O(n)

         // vector<int>ans(digits.size()+1);
         // ans[0]=1;
         // return ans;

         //Space Complexity - O(1)
         arr.insert(arr.begin(), 1);
         return arr ;       
    }
};