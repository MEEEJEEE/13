#include <stdio.h>
#include <stdlib.h>

//실습1 

struct student {
	int ID; 
	char name[100]; 
	double grade; 
}; 

int main (void) 
{ 
	struct student s1 = {123, "MIJI", 4.3}; 
	
	system("PAUSE");
	return 0;

}