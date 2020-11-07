#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int grade(int mid, int final)
{
	int grade;
	if (mid >= 0 && final >= 0)
	{
		if (mid + final >= 80)
		{
			grade = 4;
		}
		else if (mid + final >= 75)
		{
			grade = 3.5;
		}
		else  if (mid + final >= 70)
		{
			grade = 3;
		}
		else if (mid + final >= 65)
		{
			grade = 2.5;
		}
		else  if (mid + final >= 60)
		{
			grade = 2;
		}
		else if (mid + final >= 55)
		{
			grade = 1.5;
		}
		else if (mid + final >= 50)
		{
			grade = 1;
		}
		else (grade = 0);

	}
	else { grade = 5; }

	return grade;
}
int main()
{
	struct stdInfo
	{
		int ID;
		char name[50];
		int scoreMid;
		int scoreFinal;
	}std1, std2;

	int std1grade, std2grade;

	printf("Student 1 ID : ");
	scanf("%d", &std1.ID);
	printf("\nStudent 1 name : ");
	scanf("%s", &std1.name);
	printf("\nStudent 1 Midterm score : ");
	scanf("%d", &std1.scoreMid);
	printf("\nStudent 1 Final score : ");
	scanf("%d", &std1.scoreFinal);

	printf("\nStudent 2 ID : ");
	scanf("%d", &std2.ID);
	printf("\nStudent 2 name : ");
	scanf("%s", &std2.name);
	printf("\nStudent 2 Midterm score : ");
	scanf("%d", &std2.scoreMid);
	printf("\nStudent 2 Final score : ");
	scanf("%d", &std2.scoreFinal);

	std1grade = grade(std1.scoreMid, std1.scoreFinal);
	std2grade = grade(std2.scoreMid, std2.scoreFinal);

	if (std1grade == 5 || std2grade == 5)
	{
		printf("ERROR ! ! !");
	} 
	else
	{
		printf("\nStudent 1\nID : %d\nName : %s\n Grade = %d ",std1.ID,std1.name,std1grade);
		printf("\n\nStudent 2\nID : %d\nName : %s\n Grade = %d ", std2.ID, std2.name, std2grade);
	}
}