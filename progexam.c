#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mybooklib.h"

int main()
{ 
 BookList_t Library;
 int choice;
 instructions();
 printf("\nChoice: "); 
 scanf("%d", &choice);
 while(choice!=4)
  {
  switch (choice) 
     {
      case 1: 
      printf("Enter a book:\n");
      insTail(&Library);
      break;
      
      case 2:
      printf("Enter the id:\n");
      Cell_t *p = searchId();
      printElem(&p->book);
      break;
 
      case 3:
      printf("Find the book from its id:\n");
      searchId();
     }  
  printf("\nChoice: "); scanf("%d", &choice);
  } 
 return 0;
}  