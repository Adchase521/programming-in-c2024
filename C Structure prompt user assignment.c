//C structure to prompt user to enter information about a Book.
/*
//Program to enter a Book's information 
CHIEF EDITOR: Ressa Lynn 
Date:18/10/2024
*/
//preprocessor directive - scant(), printf().
#include<stdio.h>
#include<string.h>
struct students{
char title[30];
char author[30];
char ISBN[13];
int publication_year;
float price;
}book1;
int main(){

//Input the values.
printf ("Enter the book title:\n");
scanf ("%s",&book1.title);
printf("Enter the book author:\n");
scanf ("%s",&book1.author);
printf ("Enter the publication year:\n");
scanf ("%d",&book1.publication_year);
printf ( "Enter the book's ISBN:\n");
scanf ("%s",&book1.ISBN);
printf( "Enter the book's price:\n");
scanf ("%f",&book1.price);

//Output the results 
printf ("The book title is:%s\n",book1.title);
printf ("The book author is:%s\n",book1.author);
printf ("The publication year is:%d\n",book1.publication_year);
printf ("The book's ISBN is:%s\n",book1.ISBN);
printf ("The book's price is:%f\n",book1.price);

return 0;
}
