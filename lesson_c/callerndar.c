#include <stdio.h>

bool isLeap(int year){
    return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}
int totalDays(int year, int month)
{
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(isLeap(year))days[2 - 1]++;
	return days[month - 1];
}
//Zeller's congruence
int weekDay(int year, int month, int day)
{
	if(month == 1 || month == 2){
		year--;
		month+=12;
	}
	return  ( year 
		 + year/4 
		 - year/100 
		 + year/400 
		 + (13 * month + 8)/5 
		 + day
		) % 7;
}
void outputCalendar(int year, int month)
{
    int weakDay = weekDay(year, month, 1);
    for(int i = 0; i < weakDay; i++){
		printf("   ");
	}
	for(int day = 1; day <= totalDays(year, month); day++){
		printf("%3d", day);
		weakDay++;
		if(weakDay == 7){
			printf("\n");
			weakDay = 0;
		}
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
    int year, month;
    printf("year?");
    scanf("%d", &year);
    printf("month?");
    scanf("%d", &month);
	outputCalendar(year, month);
}    
