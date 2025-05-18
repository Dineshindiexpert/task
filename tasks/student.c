#include <stdio.h>



char id[5][10];
char name[5][50];
int age[5];
char number[5][15];
char gmail[5][50];
char rollno[5][20];

void registration();
void display();
void menu();
int choice;


int main()
 {
    while(1)
    {
    printf("\ngiven menu below.\n");
    menu();
    printf("enter your choice according to menu :");
    scanf("%d",&choice);
    if (choice==1)
    {
        registration();       
    }
    else if(choice==2)
    {
        display();
    }
    else 
    {
        printf("thanks....\n");
        printf("exiting.....\n");
        break;

    }

            

    }
    
    


    return 0;
}

void registration() {
    int inputdata;
    printf("Enter the number of students to register (max 5): ");
    scanf("%d", &inputdata);

    if (inputdata > 5 || inputdata <= 0) {
        printf("Invalid input. Please enter between 1 and 5.\n");
        return;
    }

    for (int i = 0; i < inputdata; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter student ID: ");
        scanf("%s", id[i]);
        printf("Enter student name: ");
        scanf(" %[^\n]", name[i]); // Handles multi-word input
        printf("Enter student age: ");
        scanf("%d", &age[i]);
        printf("Enter mobile number: ");
        scanf("%s", number[i]);
        printf("Enter student Gmail: ");
        scanf("%s", gmail[i]);
        printf("Enter student roll number: ");
        scanf("%s", rollno[i]);
        printf("\n");
        printf("\n");
    }
}

void display() 
{
    int displayData;
    printf("\nHow many students' data to display? ");
    scanf("%d", &displayData);

    if (displayData > 5 || displayData <= 0)
    {
        printf("Invalid input. Please enter between 1 and 5.\n");
        return;
    }

    for (int i = 0; i < displayData; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID: %s\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Age: %d\n", age[i]);
        printf("Mobile Number: %s\n", number[i]);
        printf("Gmail: %s\n", gmail[i]);
        printf("Roll No: %s\n", rollno[i]);
    }

}
void menu()
{
    printf("press 1. for the registration.\n");
    printf("press 2. for the display the student data.\n");
    printf("press 3 or any option to exit.\n");

}

