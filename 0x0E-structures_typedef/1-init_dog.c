#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: dog
 * Description: Longer description
 */

	void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
