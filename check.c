/*College Management System*/
#include<stdio.h>
int printmenu() {
	int choice;
	printf("1.Verification\n"\
		"2.Staff info\n"\
		"3.Student info \n"\
		"4.Course Details\n"\
		"5.Fee Structure\n"\
		"6.Marks of students\n"\
		"7.exit \n");
	scanf("%d", &choice);	
	return choice;
}
int main() {
	int choice;
	char user_name[64];
	char password[8];	
	while(1) {
		choice = printmenu();
		switch(choice) {
		case 1: /*Verification */ 
			//printf("Enter the Username and password\n");
			//scanf("%s%s",user_name, password);
			verification();
			break;
		case 2: /*Staff info*/
			//staff_info();
			break;
		case 3: /*Student info */
			//student_info();
			break;
		case 4: /*Course Details*/
			//course();
			break;
		case 5: /*Fee structure */
			//fee();
			break;
		case 6: /*Marks of students */
			//marks();
			break;
		case 7: /*exit */
			exit(0);
			break;
		}	
	}
	return 0;
}

