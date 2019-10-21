#ifndef _DOG_
#define _DOG_
/**
 * struct dog - a cute little dogo
 * @name : dog's name
 * @age : dog's age
 * @owner : dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_ */
