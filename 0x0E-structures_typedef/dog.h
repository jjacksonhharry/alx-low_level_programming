#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char* owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif /* struct dog */
