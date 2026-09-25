class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>result(heights.size());
        int cnt = 0 ; 
        for (int i = 0 ; i < heights.size() ; i ++){
            result[i] = heights[i];
        }
        sort(result.begin(),result.end());
        
        

        for (int i = 0 ; i < heights.size() ; i++){
            if (result[i] != heights[i]){
                cnt += 1 ;
            }
        }
        return cnt ;

    }
};