#ifndef DOG_H
#define DOG_H

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

#endif
