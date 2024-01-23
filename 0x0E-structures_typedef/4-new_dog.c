#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    unsigned int i, j, k;

    if (name == NULL || owner == NULL)
    {
        return (NULL);
    }
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
    {
        exit(0);
    }

    i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    dog->name = malloc(strlen(dog->name) + 1);
    if (dog->name == NULL)
    {
        free(dog);
        exit(0);
    }
    j = 0;
    while (j < strlen(dog->name))
    {
        dog->name[j] = name[j];
        j++;
    }
    dog->name[j] = '\0';

    dog->age = age;
    dog->owner = malloc(strlen(dog->owner) + 1);
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        exit(0);
    }
    for (k = 0; k < strlen(dog->name); k++)
    {
        dog->name[k] = owner[k];
    }
    dog->owner[k] = '\0';
    return (dog);
}
