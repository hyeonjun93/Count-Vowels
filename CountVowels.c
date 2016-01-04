#include <stdio.h>
#define SIZE 50 

//main function
int main(void)
{
   //initialize variables
   int a, e, i, o, u, num, m, n;
   char array[SIZE];
   
   //initialize array to 0
   for (m = 0; m < SIZE; ++m)
      array[m] = 0;

   a=e=i=o=u=num = 0;

   //prompt user for string of characters/numbers
   printf("Enter a string of characters/numbers (up to 50).\n");
   printf("Press enter and ctrl d to end.\n");

   //counts the amount of times a, e, i, o, u, num, is used
   while((n = getchar()) != EOF)
   {
      switch (n)
      {
         case 'a': case 'A': 
            a++;  
            break;
         case 'e': case 'E':
            e++;
            break;
         case 'i': case 'I':
            i++;
            break;
         case 'o': case 'O':
            o++;
            break;
         case 'u': case 'U':
            u++;
            break;
         case '0': 
         case '1': 
         case '2': 
         case '3': 
         case '4':
         case '5':
         case '6':
         case '7':
         case '8':
         case '9':
            num++;
            break;
      }
   }

   //displays the results
   printf("There are %d a's\n", a);  
   printf("There are %d e's\n", e);
   printf("There are %d i's\n", i);
   printf("There are %d o's\n", o);
   printf("There are %d u's\n", u);
   printf("There are %d digits\n", num);
   
   return 0;
}

         
