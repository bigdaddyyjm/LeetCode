class Solution {
public:
    int reverse(int x) {
        int flag;
        unsigned long long ans=0;
        int ele;
         vector<int> list_x;
        if(x>=0){flag=1;}
        else {flag=0;}
        int a = abs(x);
        //if(unsigned(x)>INT_MAX)return 0;
        while(a!=0){
            ele = a%10;
            list_x.push_back(ele);
            a = a/10;
        }
        //int last_ans = 0;
        for(int i=0;i<list_x.size();i++){
            //if(ans > ans + pow(10,(list_x.size()-i-1))*list_x[i])return 0;
            ans = ans + pow(10,(list_x.size()-i-1))*list_x[i]; 
            //if (last_ans > ans)return 0;
        }
        if(ans > INT_MAX)return 0;
        if(flag == 1)return ans;
        else return 0-ans;
        //{
        //    if(flag == 1) return ans;
        //    else return 0-ans;
        //}
    }
};