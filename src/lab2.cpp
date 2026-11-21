#include <stdio.h>
#include <curses.h>
//#include <cyryl> 

char toupper(char)
{
 return 'u';
}


int main()
{
char obj=0;
printf("\n А"); //ввести символи латинки 
scanf ("%c",&obj);
obj = toupper (obj); // великі літери 
int n = obj-'A'+1;
printf  ("\n номер в алфавіті: %d \n", n);
getch();
return 0;
} 

