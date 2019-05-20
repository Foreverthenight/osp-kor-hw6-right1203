#include <stdio.h>
#include <string.h>
#include "phone.h"

extern void registerPhoneData();
extern void printAll();
extern void searchByName();
extern void deleteByName();

char password[100] = "qwer1234";
static int count_service = 0;

int main()
{
	int service;		// a variable for storing user's request
	do
	{
       		printf("============ Telephone Book Management ============");
       		printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Exit >>>\n");
        	printf(" Please enter your service number (1-5)> ");
		scanf("%d", &service);

		switch(service)
		{
			case 1: registerPhoneData(); break;	// invoke find_ID
			case 2: printAll(); break;
          		case 3: searchByName(); break;
           		case 4: deleteByName(); break;
			default: break;
		}
		count_service++;
	} while (service != 5);	// if Exit is not entered, the loop continues
	printf("Total Service Count is %d\n", count_service);
	return 0;
}
