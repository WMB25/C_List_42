#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int verify_separator(char c, char* charset)
{
	while(*charset)
	{
		if(c == *charset) { return (1); }
		charset++;
	}
	return (0);
}

int count_words(char* str, char* charset)
{
	int count;
	int in_word;

	count = 0;
	in_word = 0;
	while(*str)
	{
		if(verify_separator(*str, charset)) { in_word = 0; }
		else if(!in_word)
	       	{
		       	in_word = 1;
	       		count++;
		}
		str++;
	}
	return (count);
}

char* ft_strndup(char* src, int n)
{
	char* dest = malloc(n + 1);
	if(!dest) { return (NULL); }

	int i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

char** ft_split(char* str, char* charset)
{
	int word_count;
	char** result;
	int i;

	word_count = count_words(str, charset);
	result = malloc(sizeof(char*) * (word_count + 1));
	if(!result) { return (NULL); }

	i = 0;
	while(*str)
	{
		while(*str && verify_separator(*str, charset)) { str++; }

		if(!*str) { break; }

		char* start = str;
		while(*str && !verify_separator(*str, charset)) { str++; }

		int word_len = str - start;
		result[i] = ft_strndup(start, word_len);
		i++;
	}
	result[i] = NULL;
	return (result);
}

int main(int argc, char** argv)
{
	if(argc < 3) { return (0); }
	
	char** result = ft_split(argv[1], argv[2]);

	int i;

	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}

	free(result);
	return (0);
}


