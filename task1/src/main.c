#include <stdio.h>
#include "headers/abonent.h"

void menu(struct abonent abonents[SIZE]);

void print_options(); 

int read_option(); 

int call_function_by_option(struct abonent abonents[SIZE], int option);

int read_values_and_add_abonent(struct abonent abonents[SIZE]);

int delete_abonents(struct abonent abonents[SIZE]); 

int find_abonents(struct abonent abonents[SIZE]);

void print_abonents(struct abonent abonents[SIZE]);

void init_array(struct abonent abonents[SIZE]);

int main(void) {
  struct abonent abonents[SIZE];
  init_array(abonents);
  menu(abonents);   
  return 0;
}

void menu(struct abonent abonents[SIZE]) {
  printf("___MENU___\n");
  int option;
  while (1) {
    print_options();
    option = read_option();
    
    int result = call_function_by_option(abonents, option);

    if (result == -1) {
      return;
    }
    if (result == -2) {
      printf("Wrong option\n");
    }
  }
}

void print_options() {
  printf("1) Add abonent\n");
  printf("2) Delete abonent\n");
  printf("3) Find abonent by name\n");
  printf("4) Print all abonents\n");
  printf("5) Exit\n");
}

void init_array(struct abonent abonents[SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    delete_abonent(&abonents[i]);
  }
}

int read_option() {
  int option;
  
  printf("Enter option: ");
  if (scanf("%d", &option) == 0) {
    return -1;
  } 
  
  return option;
}

int call_function_by_option(struct abonent abonents[SIZE], int option) {
  switch (option) {
    case 1:
      return read_values_and_add_abonent(abonents);
    case 2:
      return delete_abonents(abonents);
    case 3:
      return find_abonents(abonents);
    case 4:
      print_abonents(abonents);
      return 0; 
    case 5:
      return -1; 
    default:
      return -2;
  }
}

int read_values_and_add_abonent(struct abonent abonents[SIZE]) {
  char name[STR_SIZE];
  char second_name[STR_SIZE];
  char tel[STR_SIZE];

  printf("Enter name: ");
  if (scanf("%s", name) == 0) {
    return 0;
  }

  printf("Enter second name: ");
  if (scanf("%s", second_name) == 0) {
    return 0;
  }
  
  printf("Enter telephone: ");
  if (scanf("%s", tel) == 0) {
    return 0;
  }  
  add_abonent(abonents, name, second_name, tel);
  return 1;
}

int delete_abonents(struct abonent abonents[SIZE]) {
  char name[STR_SIZE];

  printf("Enter name: ");
  if (scanf("%s", name) == 0) {
    return 0;
  }  
  
  delete_abonents_by_name(abonents, name);

  return 1;
}

int find_abonents(struct abonent abonents[SIZE]) {
  char name[STR_SIZE];

  printf("Enter name: ");
  if (scanf("%s", name) == 0) {
    return 0;
  }  
  find_abonents_by_name(abonents, name);
  return 1;
}

void print_abonents(struct abonent abonents[SIZE]) {
  print_all_abonents(abonents); 
}

