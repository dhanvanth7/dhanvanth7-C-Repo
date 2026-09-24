char* removeDuplicates(char* s) {
    int l = strlen(s);
    char *s1 =(char*)malloc((l+1) * sizeof(char));
    int top=-1;
    for(int i=0;i<l;i++)
    {
        if( top>=0 && s[i]==s1[top])
        {
            top--;
        }
        else{
            top++;
            s1[top]=s[i];
        }
    }
    s1[top+1]='\0';
    return s1;
}