class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min=INT_MAX;
        int max=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            int temp=prices[i]-min;
            if(temp>max)
            {
                max=temp;
            }
        }
        return max;
    }
};
