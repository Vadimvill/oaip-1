#include "input.h"

void input_string(char** string)
{
	int char_; 
	int i = 0;
	rewind(stdin);
	while ((char_ = getchar()) != EOF && char_ != '\n')
	{
		(*string)[i++] = char_;
		(*string) = (char*)realloc((*string), (i + 1) * sizeof(char));
	}
	(*string)[i] = '\0';
}
