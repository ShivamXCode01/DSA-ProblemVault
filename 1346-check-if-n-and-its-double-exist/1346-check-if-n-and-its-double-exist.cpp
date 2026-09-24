class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        //Time Complexity - O(n) and Space Complexity - O(n)
        set<int>s;
        for (int n : arr){
             if (s.contains(n * 2) || 
                (n % 2 == 0 && s.contains(n / 2))){
                return true;
            }
            s.insert(n);
        }
        return false;
    }
};