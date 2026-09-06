class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> fn;
        int i =0; 
        int j = 0; 
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                fn.push_back(nums2[j]);
                j++;
            }
            else{
                fn.push_back(nums1[i]);
                i++;
            }
        }

        while(i<nums1.size()){
            fn.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            fn.push_back(nums2[j]);
            j++;
        }
        double median = 0;

        if(fn.size()%2==0){
            median = (fn[fn.size()/2-1] + fn[fn.size()/2])/ 2.0;
        }
        else{
            median = fn[fn.size()/2];
        }

        return median;
 
        
        
    }
};