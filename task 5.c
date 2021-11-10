#include <stdio.h>  
#include <string.h>  
   
void rev(char *x)  
{  
    char temp;
    char *end=x;
	while(*x>0)
	{
		x++;	
	}
	x--;
  while(end < x)
  {
		temp = *end;
		*end = *x;
		*x = temp;   
		end++;
		x--;
  }
}  
      
int main()
{  
    char x[100];
    printf("Enter Your string :\n");
    scanf("%s",&x);
    rev(x);
    printf ("Your string After reverseing is \"%s\" ", x);
	return 0;
}
