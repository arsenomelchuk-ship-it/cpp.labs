#include <stdio.h> 
#include <curses.h>
#include <stdlib.h> //srand

int main()
{
    randomize();

start: // мітка безумовного переходу

 int a = random(2)+1,b;

printf("enter 1 or 2 ?:");
scanf ("%d",&b);

if (a==b)
{
printf("You won.");
}
else 
{
    printf(You lost.);
}

goto start; // перехід на мітку 


return 0;
}



