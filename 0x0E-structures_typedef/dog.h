#ifndef DOG
#define DOG
/**
 *struct dog - dog data
 *@name: dogs name
 *@age: dogs age
 *@owner: dogs owner
 *
 * Description: doge data
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
