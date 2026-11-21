#include <stdio.h>
#include <curses.h>

#define SIZE 7

int main()

{
        printf("\n Piramid \n");

for(int A = 0; A < SIZE;A++)

{
for (int B = 0; B < SIZE -A -1; B++)
    {
        printf(" ");
    }

for(int C = 0; C <= A; C++)
    {
        printf("$");  
    }

for(int B = 0; B < SIZE -A -1; B++)
    {
        printf(" ");
    }
for (int C = 0; C <= A; C++)
    {
        printf("$");
    }


        printf("\n");
}
getch();
return 0;
}
// A - номер рядка 
// B - кількість пробілів 
// c кількість символів $

//в циклі for є три частини 
// початок 
// умова 
// крок
