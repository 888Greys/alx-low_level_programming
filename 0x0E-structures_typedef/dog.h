#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog's basic information
 * @name: pointer to a character string with dog's name
 * @age: dog's age as a floating point number
 * @owner: pointer to a character string with owner's name
 *
 * Description: Defines a structure with the dog's basic information.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
