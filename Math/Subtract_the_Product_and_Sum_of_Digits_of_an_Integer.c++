class Solution {
public:
    int subtractProductAndSum(int n) {
        int ex=0;
        int product=1;
        int sum=0;
        while(n!=0)
        {
            ex=n%10;
            product=product*ex;
            sum+=ex;
            n=n/10;
        }
        int ans=(product-sum);
        return ans;
    }
};
