#include<vector>



class Solution {
public:
    void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
    int partition (vector<int>& nums, int low, int high)
{
    int pivot = nums[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (nums[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&nums[i], &nums[j]);
        }
    }
    swap(&nums[i + 1], &nums[high]);
    return (i + 1);
}
    void quickSort(vector<int>& nums, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(nums, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(nums, low, pi - 1);
        quickSort(nums, pi + 1, high);
    }
}
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size() ; vector<int>ques(n);
         map<int,int>store;
        for(int i=0;i<n;i++)
        {
            store[nums[i]]=i;
            ques[i]=nums[i];
        }
    quickSort(nums, 0, n - 1);
       
        
        int i=0;int j=nums.size()-1;vector<int>ans;
        
        while(i<j)
        {
            int sum=nums[i]+nums[j];
            if(sum==target)
            {
                if(store[nums[i]]!=store[nums[j]])
                {    
                ans.push_back(store[nums[i]]);
                ans.push_back( store[nums[j]]);          
                return ans;
                }
                else
                {
                    ans.push_back(store[nums[j]]);
                    for(int k=0;k<n;k++)
                    {
                        if(nums[j]==ques[k])
                        {
                          ans.push_back( k);    return ans;   
                        }
                    }
                }
            }
         else if(sum<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};
