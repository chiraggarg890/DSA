class Solution{
  public:
  vector<int> nextSmallerElement(int*arr,int m)
  {
      vector<int>ans(m);
      stack<int>s;
      s.push(-1);
      for(int i=m-1;i>=0;i--)
      {
          while((s.top()!=-1)&&(arr[s.top()]>=arr[i]))
          {
              s.pop();
          }
           ans[i]=s.top();
          s.push(i);
         
      }
      return ans;
  }
  vector<int> previousSmallerElement(int*arr,int m)
  {
      vector<int>ans(m);
      stack<int>s;
      s.push(-1);
      for(int i=0;i<m;i++)
      {
          while((s.top()!=-1)&&(arr[s.top()]>=arr[i]))
          {
              s.pop();
          }
          ans[i]=s.top();
          s.push(i);
          
      }
      return ans;
  }
  int largestRectangleArea(int* arr,int m)
  {
     int area=INT_MIN;
     vector<int>next(m);
     next=nextSmallerElement(arr,m);
     vector<int>prev(m);
     prev=previousSmallerElement(arr,m);
     
     for(int i=0;i<m;i++)
     {
         if(next[i]==-1)
         {
             next[i]=m;
         }
         int b=next[i]-prev[i]-1;
         int l=arr[i];
         area=max(area,(l*b));
     }
     return area; 
  }
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        // Your code here
        
        int area=largestRectangleArea(M[0],m);
      
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(M[i][j]!=0)
                {
                    M[i][j]=M[i][j]+M[i-1][j];
                }
                else
                {
                    M[i][j]=0;
                }
                
            }
            int newArea=largestRectangleArea(M[i],m);
           // cout<<newArea<< " ";
            area=max(area,newArea);
        }
        return area;
    }
};
