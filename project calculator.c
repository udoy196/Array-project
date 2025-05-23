#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

void showMenu() {
    printf("\n====== Smart Calculator Menu ======\n");
    printf("1.Add (+)\n");
    printf("2.Subtract (-)\n");
    printf("3.Multiply(*)\n");
    printf("4.Divide (/)\n");
    printf("5.Exit\n");
    printf("6.Special Message & Exit\n");
    printf("===================================\n");
}

int main() {
    int choice;
    int num1, num2;

    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("\nThank you for using Smart Calculator!\n");
            break;
        }

        if (choice == 6) {
            printf("\nSpecial Message:\n");
            printf("📜 Sorboda sotto kota bolibe, soth pothe takibe 📜\n");
            printf("\nThank you for using Smart Calculator!\n");
            break;
        }
        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);
        switch (choice) {
            case 1:
                printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Result: %d - %d = %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Result: %d * %d = %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
                }
                break;
            default:
                printf("Invalid choice! Please select a valid option (1–6).\n");
        }
    }

    return 0;
}
