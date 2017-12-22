class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if (numbers.size() < 2)
            return vector<int>({});
        int lo = 0; int hi = numbers.size()-1;
        while(lo < hi){
            if(numbers[lo] + numbers[hi] == target){
                return vector<int>({lo+1,hi+1});
            }
            else if(numbers[lo] + numbers[hi] < target){
                lo++;
            } else {
                hi--;
            }
        }
        //return vector<int>({lo+1,hi+1});
    }
};
