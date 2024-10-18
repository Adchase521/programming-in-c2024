//C structure for a Book Publication.
/*
//Program to outline a book publication's structure.
CHIEF EDITOR:Reesa Lynn
Date : 18/10/2024
*/
//preprocessor directive - scanf(),printf().
#include<stdio.h>
#include<string.h>
struct book{
char title[30];
char author[30];
char ISBN[13];
int publication_year;
float price;
}book1;
int main(){

 // Input the values 
strcpy(book1.title,"Introduction to C Programming");
book1.price=49.99;
strcpy(book1.author,"John Smith");
strcpy(book1.ISBN,"9780131103627");
book1.publication_year = 2022;

 // Output the results 

printf ("The title is:%s\n",book1.title);
printf ("The author is:%s\n",book1.author);
printf ("The publication year is:%d\n",book1.publication_year);
printf ("The ISBN is:%s\n",book1.ISBN);
printf ("The price is:%.2f\n",book1.price);

return 0;
}
