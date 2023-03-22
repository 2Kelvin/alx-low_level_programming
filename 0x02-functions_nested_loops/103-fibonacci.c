 #include <stdio.h>
 /**
   * main - print sum of even numbers in the Fibonacci sequence 
   * Return: 0
   */
 int main(void)
 {
         int numberCount = 3;
         long int firstNo = 1;
         long int secondNo = 2;
         long int nextNo = firstNo + secondNo;
	 long int evenSum = 0;

         printf("%lu, ", firstNo);
         printf("%lu, ", secondNo);
         while (numberCount <= 4000000)
         {
                 if (firstNo % 2 == 0)
			 sum += firstNo;
                 firstNo = secondNo;
                 secondNo = nextNo;
                 nextNo = firstNo + secondNo;
                 numberCount++;
         }
	 printf("%lu\n", sum);
         return (0);
 }
