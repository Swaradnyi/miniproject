typedef struct student {			
	char name[20];
	char std_id[20];
	char address[40];
	char city[40];
	char state[40];
	int age;
	char gender[10];
	char mobno[20];

}student;

typedef struct staff {				
	char name[20];
	char address[40];
	char city[40];
	char state[40];
	int age;
	char mobno[20];
	char gender[10];
	char qualif[50];
	double salary;
}staff;
void verification();
int menu();
//void staff_info();
//void student_info();
//void course();
//void fee();

