#include "dog.h"
/**
 *init_dog -  initialize a variable of type struct dog
 *
 *@name: dogs name
 *@age: dogs age
 *@owner: dogs owner name
 *@d: pointer to structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
