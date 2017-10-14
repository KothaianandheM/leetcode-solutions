#include<stdio.h>
#include<conio.h>
int reverse(int n);
int main()
{
    int n=0,rev1=0,rev2=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n<0)
        {
           n=abs(n);   
           rev1=reverse(n);
           printf("-%d",rev1);
        }
    else
        {
            rev2=reverse(n);
            printf("%d",rev2);
        }    
    return 0;
    
}

int reverse(int x) 
{  
    int rev=0;
   while(x>0)
   {
       int a=x%10;
       rev=(rev*10)+a;           
       x=x/10;                
   }
    return rev;
    
}
