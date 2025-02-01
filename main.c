#include <stdio.h>

struct User {
	char *name;
	char age;
};

int main()
{
	struct User user = {"Xurshid", 16};
	printf("User name: %s", user.name);
}