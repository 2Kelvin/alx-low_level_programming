/*
 *
 *  gen-passwd.c: generate a random password
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_CHAR 8
#define MAX_CHAR 1023
#define BUF_SIZE 1024
#define PRIME_MOD 937

int main (int argc, char **argv)
{
    int N;
    char password [BUF_SIZE];

    while (1)
    {
        while (1)
	{
            printf ("Enter number of digits: ");
            scanf ("%d", &N);
            if (!N) exit (EXIT_SUCCESS);
            if (N >= MIN_CHAR && N <= MAX_CHAR)
                break;
            printf ("Password should be between %d - %d characters\n", MIN_CHAR, MAX_CHAR); 
        }
    
        time_t now = time (NULL);

        srand ((unsigned int) (now % PRIME_MOD));

        for (int i = 0; i < N; i++) 
            password [i] = 33 + rand () % 94;
    
        password [N] = '\0';

        printf ("password = %s\n", password);
    }
}
