int reverse(int x){
int m=x;
    int l=0,i,j;
    while(m!=0)
    {
        l=m%10;
        j=j*10+l;
        m=m/10;
    }
    
        return j;
}

void main()
{
int n;
scanf("%d",&n);
printf("reverse is '%d',reverse(n));
}