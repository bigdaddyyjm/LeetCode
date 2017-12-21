class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.front() == 0){
            vector<int> ans;
            ans.push_back(1);
            return ans;
        }
        long long num = digits.back();
        int n = digits.size();
        for(int i = n-2; i >= 0; i--){
            num = num + pow(10,(n-1-i))*digits[i];
        }
        long long ans = num + 1;
        vector<int> new_digit;
        // new_digit.push_back(ans);
        // return new_digit;
        while(ans != 0){
            new_digit.push_back(ans%10);
            ans /= 10;
        }
        // return new_digit;
        vector<int> new_ans;
        for(int i = 0,j=new_digit.size()-1; i< new_digit.size()/2;i++,j--){
            new_digit[i] = new_digit[j]+new_digit[i];
            new_digit[j] = new_digit[i] - new_digit[j];
            new_digit[i] = new_digit[i] - new_digit[j];
        }
        return new_digit;
    }
};