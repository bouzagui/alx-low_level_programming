#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    unsigned int i, k;

    if (name == NULL || owner == NULL)
    {
        return (NULL);
    }
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
    {
        return (NULL);
    }

    dog->name = malloc(strlen(name) + 1);
    if (dog->name == NULL)
    {
        free(dog);
        exit(0);
    }

    for (i = 0; i < strlen(name); i++)
    {
        dog->name[i] = name[i];
    }
    dog->name[i] = '\0';

    dog->age = age;

    dog->owner = malloc(strlen(owner) + 1);
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        exit(0);
    }
    for (k = 0; k < strlen(owner); k++)
    {
        dog->owner[k] = owner[k];
    }
    dog->owner[k] = '\0';
    return (dog);
}
