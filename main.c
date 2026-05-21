// standard library 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//Third-party library 
#include <sqlite3.h>
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
	strncpy(birthday_year_str ,birthday ,4);
	birthday_year_str[4] = '\0';

	int birthday_year = atoi(birthday_year_str);
	printf("get year birthday : %d \n " ,birthday_year );
    return 0;
}

// pixel art draw skills :


// the money for the moment cannot have what change .
