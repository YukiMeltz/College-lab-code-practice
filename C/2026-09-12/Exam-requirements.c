#include <stdio.h>

int main()
{
	printf("\nYour Name"); //here, Himanshu Raj (alias YukiMeltz)
	//initialize all variable at -1 value
	//as placeholder for proper logic.
	float theory = -1;
	float lab = -1;
	float test1 = -1;
	float test2 = -1;
	float Twelfth_Marks = -1;
	//make all false using integer values as logic
	int attendance = 0;
	int test = 0;
	int Twelfth = 0;

	//take entries repetetively until proper bounded entry is given
	printf("\nPlease Enter the following as it's asked.");
	printf("\nEverything is in percentage.");
	
	printf("\nEnter Attendance.");
	while (theory > 100 || theory < 0)
	{
		printf("\nEnter theory attendance : ");
		scanf("%f", &theory);
		
	}
	printf("Theory attendance is %.3f%%", theory);
	while (lab > 100 || lab < 0)
	{
		printf("\nEnter lab attendance : ");
		scanf("%f", &lab);
		
	} 
	printf("Lab attendance is %.3f%%", lab);
	
	printf("\nAttendance Entries Complete.");
	
	printf("\nPlease Enter Test Marks : ");
	while (test1 > 100 || test1 < 0)
	{
		printf("\nEnter test 1 marks : ");
		scanf("%f", &test1);
		
	}
	printf("Test 1 marks is %.3f%%", test1);
	while (test2 > 100 || test2 < 0)
	{
		printf("\nEnter Test 2 marks : ");
		scanf("%f", &test2);
		
	} 
	printf("Test 2 marks is %.3f%%", test2);
	
	printf("\nTest Marks Entries Complete.");

	while (Twelfth_Marks > 100 || Twelfth_Marks < 0)
	{
		printf("\nEnter 12th Marks : ");
		scanf("%f", &Twelfth_Marks);
		
	} 
	printf("12th marks is %.3f%%", Twelfth_Marks);

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
