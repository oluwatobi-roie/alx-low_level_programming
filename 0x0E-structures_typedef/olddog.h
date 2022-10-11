#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - defines the type of dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog as also a string
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
