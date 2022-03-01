7.#include <stdio.h>

int main()
{
   int n=5,i,j;
   for(i=0;i<=n;i++){
       for(j=0;j<=n;j++){
           printf("*");
       }
       printf("\n");
   }
}
o/p: *****
     *****
     *****
     *****
     *****

1.#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
       printf("*");     
        }
        printf("\n");
    }
    }
(or)
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the number or rows");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
       printf("*");     
        }
        printf("\n");
    }
    }

o/p: *
     **
     ***
     ****
     *****
3. #include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the number or rows");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
       printf("*");     
        }
        printf("\n");
    }
    }
o/p: *****
     ****
     ***
     **
     *
10. #include<stdio.h>
int main(){
    int n=5,i,j;
    int x,y;
    x=y=n;
    for(i=1;i<=n;i++){
        for(j=1;j<n*2-1;j++){
            if(j>=x&&j<=y)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        x--;
        y++;
    }
}
o/p:     *
        ***
       *****
      *******
     *********
11. #include<stdio.h>
int main(){
    int n=5,i,j;
    int x=1,y=n*2-1;
    for(i=1;i<=n;i++){
        for(j=1;j<n*2;j++){
            if(j>=x&&j<=y)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        x++;
        y--;
    }
}
o/p:
       *********
        *******
         *****
          ***
           *
4. #include<stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=5;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
o/p: *****
      ****
       ***
        **
         *
2. #include<stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
o/p:      *
         **
        ***
       ****
      *****
17. #include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			
		}
	}
	for(i=n-1;i>=1;i--,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
	}
}
o/p: 1
     12
     123
     1234
     12345
     1234
     123
     12
     1
20. #include<stdio.h>
int main()
{
	int n=5;
	int i,j,space;
	for(i=1;i<=5;i++){
	    for(space=n-1;space>=i;space--){
	        printf(" ");
	    }
	    for(j=1;j<=i;j++){
	        if(i%2!=0)
	            printf("%c",i+64);
	            else
	            printf("%c",i+96);	        }
	    }
	    printf("/n");
	}
o/p:  A
     bb
    CCC
   dddd
  EEEEE
5. #include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    printf("\n");
		for(j=1;j<n*2;j++)
		{
			if(j<=i || j>=n*2-i)
				printf("*");
			else
				printf(" ");
		}
	}
}
o/p: *       *
     **     **
     ***   ***
     **** ****
     *********    
               

         
