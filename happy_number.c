#include<stdio.h>
#include<math.h>
int Some(int n)
{    
    int s=0;    
    while(n!=0)    
    {        
        int r=n%10;        
        s+=pow(r,2);        
        n=n/10;    
        
    }    
    return s;
    
}
int main()
{    
    int n;    
    scanf("%d",&n);    
    while(1)    
    {        
        if(n==1 || n==7)        
        {            
            printf("True");            
            break;        
            
        }        
        else        
        {            
            if(n<10)            
            {                
                printf("False");                
                break;            
                
            }            
            else            
            {                
                n=Some(n);            
                
            }        
            
        }
    }
}