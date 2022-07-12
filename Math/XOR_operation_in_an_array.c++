class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;int store=0;
        for(int i=1;i<n;i++)
        {
           store=start+(2*i);
            ans=ans^store;
        }
        return ans;
    }
};
