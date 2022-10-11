#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 *
 * Description: intiailizes a struc variable
 *
 * @d: this is the structure of dog
 * @name: this is the name of the dog
 * @age: this is the age of the dog
 * @owner: this is the name of the owner of the dog
 *
 * Return: return tyoe is void so it returns nothing
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
