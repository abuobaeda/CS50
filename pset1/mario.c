#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	int heigth = 0;

	do {
		printf("Height:");
		heigth = GetInt();
        if (heigth == 0)
        {
            return 0;
        }
	} while (heigth < 1 || heigth > 23);

	for(int i = 0; i < heigth; i++) 
	{
		// Print the required spaces
        for(int j = 0; j < heigth-i-1; j++)
        {
            printf("%s", " ");
        }
        // Print the '#' character.
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
	return 0;
}