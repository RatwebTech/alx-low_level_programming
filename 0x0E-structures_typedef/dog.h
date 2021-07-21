#ifndef HOLBERTON
#define HOLBERTON

/**
 * struct dog - It's a dog, what can I say
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Description: It's a dog, what can I say
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
