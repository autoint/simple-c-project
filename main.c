// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>

int main() {

   const int maxInput = 100;
   int i, a=0;
   double number, average, sum = 0.0;
    
   printf("Program to calculate the sum and average of positive numbers\n");
   printf("If the user enters a negative number, the sum and average are displayed.\n");

   for (i = 1; i <= maxInput; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);
      
      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }
   
   while(a<=10) {
      if(a==5)
         break;
            printf("\nStatement %d.",a);
            a++;
   }

jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   return 0;
}
