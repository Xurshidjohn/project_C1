#include <stdio.h>

struct User {
	char *name;
	char age;
};

struct User create_user(char *name, int age)
{
	struct User user = {name, age};
	return user;
}

int main()
{
	struct User user = create_user("Xurshid", 16);
	printf("%s", user.name);
}