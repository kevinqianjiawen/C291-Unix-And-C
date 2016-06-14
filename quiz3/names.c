/* names.c */

/* Code: */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "names.h"

//we want to import the record based on the last name you type
//the comand line is
// ./importexport phone_list_in.csv phone_list_out.csv Kenn
name_t * import_name_list (FILE * fp, char * name) {
  char line[100];
  int items_returned;
  name_t * first = NULL;
  name_t * last = NULL;
  name_t * current;
  char * field;

  while (1) {
    items_returned = fscanf(fp,"%s",line);
    if (items_returned == EOF){
      break;
    }
    else {
      if(field = strtok(line,",")) {
	//compare two string
	if(strncmp(field, name, strlen(name)) == 0){
	  
	  current = (name_t *) malloc(sizeof(name_t));
	  current->next = NULL;
	  
	  strcpy(current->lname,field);
	  if (field = strtok(NULL,",")) {
	    strcpy(current->fname,field);
	  }
	  else break;
	  if (field = strtok(NULL,",")) {
	    strcpy(current->phone_number,field);
	  }
	  else break;
	  if (last) {
	    last->next = current;
	    last = current;
	  }
	  else {
	    first = current;
	    last = current;
	  }
	}
      }
      else break;
    }
  }
  return(first);
}

void print_list (name_t * list) {
  while (list) {
    printf("%s %s %s\n",list->fname,list->lname,list->phone_number);
    list = list->next;
  }
}
 
void export_list(FILE *fp, name_t * list) {
  while (list) {
    fprintf(fp,"%s,%s,%s\n",list->lname,list->fname,list->phone_number);
    list = list->next;
  }
}

/* names.c ends here */
