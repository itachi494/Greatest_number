#include<stdio.h>
void main()
{
int a=500,b=40,c=4,d=100;
    if(a>b && a>d)
    {
        printf("Greatest number is = %d",a);

    }
    else if(b>c && b>d)
    {
        printf("Greatest number is = %d",b);
        
    }
    else if(c>d && c>b)
    {
        printf("Greatest number is = %d",c);
        
    }
    else if(d>a && d>c)
    {
        printf("Greatest number is = %d",d);
    }
        else
        {
            printf("All are equal");
        }    
    

}