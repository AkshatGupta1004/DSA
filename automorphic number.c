#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,c=0,lastdigit,t;  
    printf("enter the number");
    scanf("%d",&n); 
    n1 = n*n;
    t=n;
    while(n>0)
    {
      
        c=c+1;
        n = n / 10;
        
    }
    lastdigit= n1 % (int) pow(10,c);
    if(t==lastdigit)
    printf("the number is automorphic  ");
    else
    printf("the no. is not automorphic");

return 0;

}
