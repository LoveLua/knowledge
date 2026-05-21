// standard library 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//Third-party library 
#include <sqlite3.h>

//haru free pdf library , japanse developer [source by github ]
#include <hpdf.h>

//self define header file


//program entry
int main(){
    puts("some data and suggestion");
	char birthday[] = "1995 1 24";
	printf("My birthday is : %s \n" ,birthday);

	time_t now = time(NULL);
	struct tm *local  = localtime(&now);
	int current_year = local->tm_year + 1900 ;
	int current_month = local->tm_mon +1 ;
	int current_day = local->tm_mday ;
	printf("current date is : %d : %d : %d \n" , current_year , current_month ,current_day );

	char birthday_year_str[5] ;
	strncpy(&birthday_year_str[0] ,birthday ,4);
	birthday_year_str[4] = '\0';

	char birthday_month_str[2];
	strncpy(&birthday_month_str[0] ,&birthday[5] ,1);
	birthday_month_str[1] = '\0';
	int birthday_month = atoi(&birthday_month_str[0] );

	int birthday_year = atoi(&birthday_year_str[0] );
	int age = current_year - birthday_year ;

	char birthday_day_str[3];
	strncpy(&birthday_day_str[0] ,&birthday[7] ,2 );
	birthday_day_str[2] = '\0' ;
	int birthday_day = atoi(&birthday_day_str[0] );
	//int birthday_day = atoi(birthday_day_str );
	printf("get year birthday : %d ,get month : %d ,get day : %d \n " ,birthday_year ,birthday_month ,birthday_day );

	if(current_month > birthday_month || ( current_month == birthday_month && current_day >= birthday_day )){
			; //year deviation establish 
	}else{
		age--;
	}
	printf("Current Age is %d \n",age );
	// is or not pass birthday at this year . judge 
//	if

	//tell me next step for building hobby apps . [1]
	
	//tell me that your life costing to help me manage expectation . [2]
	
	//tell me that your income expect to give me confidence . [3]
	
	//tell me that recent diet structure to keep health . [4]
	
	//health , cash flow .future . total three parts , let me reassuring .
    return 0;
}

// pixel art draw skills :


// the money for the moment cannot have what change .
