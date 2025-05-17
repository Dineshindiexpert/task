#include <stdio.h>

char menu();
char registration();
char display();

int choice;
char stid[5][20];
char stname[5][50];
char stnumber[5][15];
char gmail[5][30];
int stage[5];
int stno = 0; 
int uchoice;

int main()
{
    printf("Welcome to the Student Management System.\n");
    printf("If you want to use the system, type 1: ");
    scanf("%d", &uchoice);

    while (uchoice ==1)
    {
        menu(); 
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            registration();
        } 
        else if (choice == 2)
        {
            display();
        }
        else if (choice == 3)
        {
            printf("Exiting the program.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
         printf("If you want to continue.press 1.\n");
         printf("if you want to exit press any another key.\n");
         printf("enter your choice :");

        scanf("%d", &uchoice);  
    }

    return 0;
}
char menu()
{
    printf("\n..... Menu....\n");
    printf("1. Student registration\n");
    printf("2. Display student status\n");
    printf("3. Exit\n");
    return '0';
}
char registration() 
{
    int temp;
    printf("\nNote: You can register up to 5 students in total.\n");
    printf("Enter how many students to input: ");
    scanf("%d", &temp);
    
    for (int i = 0; i < temp; i++) 
    {
        printf("\n--- Student %d ---\n", stno + 1);
         printf("Enter the student ID: ");
        scanf(" %[^\n]", stid[stno]);
        printf("Enter the student name: ");
        scanf(" %[^\n]", stname[stno]);
        printf("Enter the student age: ");
        scanf("%d", &stage[stno]);
        printf("Enter the student contact number: ");
        scanf(" %s", stnumber[stno]);
        printf("Enter the student Gmail: ");
        scanf(" %s", gmail[stno]);
        stno++;
    }

    return '0';
}

char display()
{
    if (stno == 0)
    {
        printf("\nNo student data available to display.\n");
        return '0';
    }

    printf("Student data\n");
    for (int i = 0; i < stno; i++)
    {
        
        printf("ID: %s\n", stid[i]);
        printf("Name: %s\n", stname[i]);
        printf("Age: %d\n", stage[i]);
        printf("Contact: %s\n", stnumber[i]);
        printf("Gmail: %s\n", gmail[i]);
    }

    return '0';
}
