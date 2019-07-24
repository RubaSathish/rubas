#include<stdio.h>
int main()
    {
      int i,j,n1,n2,c=0;
      scanf("%d%d",&n1,&n2);
      for(i=n1;i<=n2;i++)
      {
          c=0;
          for(j=1;j<=i;j++)
          {
              if(i%j==0)
              {
                  c++;
              }
          }
      if(c==2)
      {
          printf("%d",i);
      }
      }
      return 0;
    }
