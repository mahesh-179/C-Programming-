//// structure in c programing
//#include<stdio.h>
//#include<string.h>
//
//struct student {
//	int roll;
//	char name[20];
//	char address [20];
//};
//
//struct student s1; // structure variable
//
//int main()
//{
//	s1.roll = 10;
//	strcpy(s1.name,"MAHESH");
//	strcpy(s1.address,"POKHARA");
//	printf("********************************************");
//printf("\n Name of Student:-%s\n Roll Number:- %d\n Address:- %s\n ",s1.name,s1.roll,s1.address);
//printf("************************************************");
//return 0;
//}
#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[20];
    char address[20];
};

struct student s1[5];

int main()
{
    int i;

    // Input
    for(i = 0; i < 5; i++)
    {
        printf(" Enter %d Student Name: ", i + 1);
        printf(" Enter %d Student Roll No: ", i + 1);
        printf(" Enter %d Student Address: ", i + 1);

        scanf("%s %d %s", s1[i].name, &s1[i].roll, s1[i].address);
    }

    // Output
    for(i = 0; i < 5; i++)
    {
        printf("\nName: %s\t Roll: %d\t Address: %s\n",
               s1[i].name, s1[i].roll, s1[i].address);
    }

    return 0;
}
