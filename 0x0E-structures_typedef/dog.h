#ifndef DOG_H
#define DOG_H

/**
  * struct dog - dog class
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - new typedef struct for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
