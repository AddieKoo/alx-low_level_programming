#include "main.h"
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: character to insert
 * Return: NULL if fails, pointer to array if success
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = c;
return (array);
}
