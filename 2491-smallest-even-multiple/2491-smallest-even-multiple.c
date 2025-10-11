int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int smallestEvenMultiple(int n) {
    int mult=n*2;
    int ans=gcd(2,n);
    int answer=mult/ans;
    return answer;
}