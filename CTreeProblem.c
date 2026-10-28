#include <stdio.h>

static int i = 4;
void func(int n, char sp, char ap,char ep);
int main()
{
    func(4, 'A', 'B', 'C');    
   
    return 0;
}

void func(int n, char sp, char ap,char ep)
{
    i--;
    printf("stack winding i =%d\n", i);
    if (n==1)
    {
        printf("Move from %c to %c\n", sp, ep);
        i++;
        
    }
    else
    { 
        
        func(n-1, sp, ep, ap);
        func(1, sp, ' ', ep);
        func(n-1, ap, sp, ep);
    }
    printf("stack unwinding i =%d\n", i);
}