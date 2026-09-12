class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        // Time Complexity - O(n)
        // Space Complexity - O(n)       

    int result = 0 ;
    for (int i = 0 ; i < arr.size() ; i++){
        result = result ^ arr[i] ; 
    }
    return result ;

    // Approach 2 :- Here we use a map and store the frequency of each number 
    //               then traverse the map which number has frequency 1 return that number 
    // Time Complexity - O(n) 
    // Time Complexity - O(n)
    }
};