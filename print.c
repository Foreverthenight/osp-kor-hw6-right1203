#include <stdio.h>
#include "phone.h"

extern struct Contact PhoneBook[MAX];

void printAll()
{
	printf("<< Display all contacts in the PhoneBook >>\n");
	for (int i = 0 ; i < size ; i++)
		printf("%s\t\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);

    return ;
}

