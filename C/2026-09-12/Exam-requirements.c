#include <stdio.h>

int main()
{
	printf("\nYour Name");
	//initialize all variable at -1 value
	//as placeholder for proper logic.
	int theory = -1;
	int lab = -1;
	int test1 = -1;
	int test2 = -1;
	int Twelfth_Marks = -1;
	//make all false using integer values as logic
	int attendance = 0;
	int test = 0;
	int Twelfth = 0;

	//take entries recursively until proper bounded entry is given
	printf("\nPlease Enter the following as it's asked.");
	printf("\nEverything is in percentage.");
	
	printf("\nEnter Attendance.");
	while (theory > 100 || theory < 0)
	{
		printf("\nEnter theory attendance : ");
		scanf("%d", &theory);
		
	}
	printf("Theory attendance is %d%%", theory);
	while (lab > 100 || lab < 0)
	{
		printf("\nEnter lab attendance : ");
		scanf("%d", &lab);
		
	} 
	printf("Lab attendance is %d%%", lab);
	
	printf("\nAttendance Entries Complete.");
	
	printf("\nPlease Enter Test Marks : ");
	while (test1 > 100 || test1 < 0)
	{
		printf("\nEnter test 1 marks : ");
		scanf("%d", &test1);
		
	}
	printf("Test 1 marks is %d%%", test1);
	while (test2 > 100 || test2 < 0)
	{
		printf("\nEnter Test 2 marks : ");
		scanf("%d", &test2);
		
	} 
	printf("Test 2 marks is %d%%", test2);
	
	printf("\nTest Marks Entries Complete.");

	while (Twelfth_Marks > 100 || Twelfth_Marks < 0)
	{
		printf("\nEnter 12th Marks : ");
		scanf("%d", &Twelfth_Marks);
		
	} 
	printf("12th marks is %d%%", Twelfth_Marks);

	//Logic Section of requirements	starts
	if (theory >= 80 || lab >= 85)
	{
		attendance = 1;
	}
	if (test1 >= 70 || test2 >= 75)
	{
		test = 1;
	}
	if (Twelfth_Marks >= 65)
	{
		Twelfth = 1;
	}

	//Final Logic peice
	if ((test && attendance) && Twelfth)
	{
		printf("\nAll Requirements are CLEARED !");
		printf("\nYou are eligible to give EXAMS.");
	}
	else
	{
        printf("\n   Attendance Req : "); attendance ? printf("pass") : printf("fail");
        printf("\n         Test Req : "); test ? printf("pass") : printf("fail");
        printf("\nTwelfth Marks Req : "); Twelfth ? printf("pass") : printf("fail");
		printf("\nSome or No Requirements are cleared.");
		printf("\nYou are NOT eligible to give exams.");
	}
	//end
	return 0;
}
