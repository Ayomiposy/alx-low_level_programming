#define DOG_FILE

/**
 * struct dog - structure for dog
 * @name: attribute pointer to char
 * @owner: attribute pointer to data type char
 * age: attribute pointer to data type float
 */

struct dog
{
	char *name;

	float age;

	char *owner
};

typedef struct dog dog_t;
