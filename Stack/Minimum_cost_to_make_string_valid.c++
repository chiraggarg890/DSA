#include<stack>
int findMinimumCost(string str) {
  // Write your code here
    if(str.length()%2!=0)
    {
        return -1;
    }
    stack<char>st;
    for(int i=0;i<str.length();i++)
    {
        char ch=str.at(i);
        if(ch=='{')
        {
            st.push(ch);
                    }
        else
        {
       if(!st.empty()&&st.top()=='{')
            {
                st.pop();
            }
            else
            st.push(ch);
        }
    }
        int a=0,b=0;
        while(!st.empty())
        {
            char ch=st.top();
            if(ch=='{')
            {
                a++;
            }
            else
            {
                b++;
            }
            st.pop();
        }
        int ans=(((a+1)/2)+((b+1)/2));
        return ans;
    
}
