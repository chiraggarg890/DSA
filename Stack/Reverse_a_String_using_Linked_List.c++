//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char>s;
    int top=0;
    while(top<len)
    {
        char ch=S[top];
        s.push(ch);
        top++;
    }
    char* ans=new char[s.size()];
    int x=0;
    while(!s.empty())
    {
        char ch=s.top();
        ans[x]=ch;x++;
        s.pop();
    }
   // char* address=ans;
    return ans;
}
