#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "miniproject.h"	
void verification(){
	char u_pass[8] = {"user"};
	char s_pass[8] = {"student"};
	char a_pass[8] = {"admin"};
	char user[16];
	char student[16];
	char admin[16];
	int vchoice;
	while(1){
		vchoice = menu();
		switch (vchoice){
			case 1: /*User*/
				printf("Enter the password\n");
				scanf("%s", user);
				if (strcmp(user, "user") == 0)
					printf("Welcome\n");
				else 
					printf("Wrong password.Please try again.\n");
				break;
			case 2:/*Student*/
				printf("Enter the password\n");
				scanf("%s", student);
				if (strcmp(student, "student") == 0)
					printf("Welcome\n");
				else 
					printf("Wrong password.Please try again.\n");
				break;
			case 3:/*Admin*/
				printf("Enter the password\n");
				scanf("%s", admin);
				if (strcmp(admin, "admin") == 0)
					printf("Welcome\n");
				else 
					printf("Wrong password.Please try again.\n");
				break;
			case 4:/*exit*/
				exit(0);
				break;
		}
	}
}
int menu(){
	int vchoice;
	printf("1.User\n"\
		"2.Student\n"\
		"3.Admin \n"\
		"4.exit \n");
	scanf("%d",&vchoice);
	return vchoice;
}		

	
