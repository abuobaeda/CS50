#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Usage: ./caesar key");
    	return 1;
    }
    else {
    	int c = 0;
 		int key = atoi(argv[1]);

	    string plaintext = GetString();

	    for (int i = 0, n = strlen(plaintext); i < n; i++)
	    {
	    	// Check of characters
            if (isalpha(plaintext[i])) {
            	// Check of uppercase
	    		if (isupper(plaintext[i]))
	    		{
	    			c = ((plaintext[i] - 65 + key) % 26);
	    			plaintext[i] = c + 65;
	    		}
	    		// Check of lowercase
	    		if (islower(plaintext[i]))
	    		{
	    			c = ((plaintext[i] - 97 + key) % 26);
	    			plaintext[i] = c + 97;
	    		}
            }
	    }

	    printf("%s\n", plaintext);
    }
}
