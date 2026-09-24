int calPoints(char** operations, int operationsSize) {
    int l = operationsSize;
    int st[1001];
    int top=-1;
    for(int i=0;i<l;i++)
    {
        char ch = operations[i][0];
         if(ch=='+')
        {
            int a=st[top]+st[top-1];
            top++;
            st[top]=a;
        }
        else if(ch=='D')
        {
           int z=st[top]*2;
            top++;
            st[top]=z;
        }
        else if(ch=='C')
        {
            top--;
        }
        else
        {
            st[++top] = atoi(operations[i]);
        } 
    }
    int sum=0;
    for(int i=0;i<=top;i++)
    {
        sum+=st[i];
    }
    return sum;
}