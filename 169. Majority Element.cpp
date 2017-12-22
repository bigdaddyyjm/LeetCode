class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
//         int lastNum = 0;
//         if(nums.size() == 1)return nums[0];
//         int lo = 0,hi = 0;
//         while(hi-lo<=nums.size()/2){
//             if(nums[lo] == nums[hi]){
//                 //count++;
//                 hi++;
//             } else {
//                 hi = ++lo;
//             }
           
//         }
        return nums[nums.size()/2] ;
        // nums.push_back(0);
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i]-nums[i-1] != 0){
        //         int count = i - lastNum;
        //         if (count > (nums.size()-1)/2) return nums[i-1];
        //         else lastNum = i;
        //     }
        // }
    }
};
