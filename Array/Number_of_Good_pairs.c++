#include<map>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,pair<int,bool>>store;int ans=0;
        for(int i=0;i<nums.size();i++)
        {
           if(store[nums[i]].second==false)
           {
              //tore[nums[i]]=nums[i];
               store[nums[i]].second=true;
               store[nums[i]].first=1;
           }
            else
            {
                store[nums[i]].first++;
            }
          //cout<<store[nums[i]].first<<endl;
        }
  //    cout<<store.size()<<endl;
        map<int,pair<int,bool>>::iterator itr;
       for(itr=store.begin();itr!=store.end();itr++)
       { 
           int n=(itr->second).first;
        // cout<<store[nums[i]].first<<endl;
           if(n!=1)
           {
               ans+=(n*(n-1))/2;//ut<<ans<<endl;
           }
       }
        return ans;
    }
};
