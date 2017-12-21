class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans,cnt=0;
        ans = x ^ y;
        while(ans!=0){
            if(ans&1)
                cnt++;
            ans=ans>>1;
        }
        // int i=0;
        // for(;;){
        //     int a, b;
        //     a = x%2;
        //     b = y%2;
        //     x = x/2;
        //     y = y/2;
        //     if(a!=b)i++;
        //     if(x==0&&y==0)break;
        // }
        //printf("%d\n",ans);
        return cnt;
    }
};