#include <stdio.h>
#include <string.h>

int main()
{
    char userIDs[3][20] = {"Ahmed", "Amr", "Wael"};
    char passwords[3][20] = {"1234 7788", "5678 5566", "9870 1122"};

    char enteredID[20];
    char enteredPassword[20];
    int found = 0;

    printf("Enter User ID: ");
    scanf("%s", enteredID);

    printf("Enter Password: ");
    scanf(" %[^\n]", enteredPassword);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(enteredID, userIDs[i]) == 0 &&
            strcmp(enteredPassword, passwords[i]) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Login Successful\n");
    else
        printf("Invalid User ID or Password\n");

    return 0;
}