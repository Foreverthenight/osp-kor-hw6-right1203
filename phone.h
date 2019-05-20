// array of sturcure
#ifndef PHONE_H
#define PHONE_H

#define MAX 50

struct Contact
{
    char Name[10];
    char PhoneNumber[15];
};

struct Contact PhoneBook[MAX];

int size;  // store the actual numbers of PhoneBook

#endif
