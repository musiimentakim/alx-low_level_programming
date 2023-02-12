#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: structure showing a dog's identity
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototypes*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
