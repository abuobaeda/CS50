#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Usage: ./vigenere key");
    	return 1;
    }
    else {
    	int c = 0;
    	int k_j = 0;
    	int c_s = 0;
 		string key = (string)argv[1];

	    for (int i = 0, k = strlen(key); i < k; i++)
	    {
	    	if (!((key[i] >= 65 && key[i] <= 90) || (key[i] >= 97 && key[i] <= 122)))
	    	{
	    		printf("Keyword must only letters A-Z | a-z\n");
	    		return 1;
	    	}
	    }

	    string plaintext = GetString();

	    for (int i = 0, n = strlen(plaintext), j = strlen(key); i < n; i++)
	    {
	    	// Check of characters
            if (isalpha(plaintext[i])) {
            	// Check of uppercase
	    		if (isupper(plaintext[i]))
	    		{
	    			k_j = tolower(key[c_s % j]) - 97;
	    			c = ((plaintext[i] - 65 + k_j) % 26);
	    			plaintext[i] = c + 65;
	    		}
	    		// Check of lowercase
	    		if (islower(plaintext[i]))
	    		{
	    			k_j = tolower(key[c_s % j]) - 97;
	    			c = ((plaintext[i] - 97 + k_j) % 26);
	    			plaintext[i] = c + 97;
	    		}
	    		c_s++;
            }
	    }

	    printf("%s\n", plaintext);
	    return 0;
    }
}
