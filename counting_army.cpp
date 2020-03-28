#include <stdio.h> 
#include <stdlib.h> 
int find(int); 
int main(void) 
{ 
    printf("find(1)=%d\n",find(1));  

    system("pause"); 
    return 0; 
} 

int find(int n) 
{ 
    int x=0,i=0;
    while(i<n)
    {
      x+=1;
      if((x%3==2) && (x%5==3) && (x%7==2))
      i+=1; 
    }
    return x;
} 

