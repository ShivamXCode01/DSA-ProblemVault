class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // Approach -1 Time Complexity - O(nlogn)
        // for (int i = 0 ; i < n  ; i++){
        //     nums1[m+i] = nums2[i]; 
        // }
        // sort(nums1.begin(),nums1.end());

        // Approach - 2 Time Complexity - O(n) 
        int p1 = m-1 ;
        int p2 = n-1 ;

        for (int p = m + n -1 ; p >= 0 ; p-- ){
            if (p2 < 0){
                break;
            }
            if (p1 >= 0 && nums1[p1] > nums2[p2]){
                nums1[p] = nums1[p1];
                p1--;
            }
            else{
                nums1[p] = nums2[p2];
                p2--;
            }
        }
    }
};
