#include<stdio.h>
 
int main()
{
    int BOI1,BOI2,BOI3;
    
	printf("\n\nEnter three numbers=");
    scanf("%d %d %d",&BOI1,&BOI2,&BOI3);
     
	 if(BOI1>BOI2 && BOI2>BOI3)
	  {
	    printf("%d", BOI1);
      }
	  else if(BOI2>BOI1 && BOI1>BOI3)
	   {
	   	 printf("%d", BOI2);
	   }
	   else if(BOI3>BOI2 && BOI2>BOI1)
	    {
	       printf("%d", BOI3);
	    }
}
