#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void mainMenu();
void flexMode();
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
void wrongInput();
void rmline(char *string);

/**
 * main - Entry point of the calculator program
 * Return: 0 (success)
 */
int main(void)
{

    puts("THE MAESTRO CODE'S CALCULATOR PROGRAM\n");

    mainMenu();

    return (0);
    
}

void mainMenu()
{

    puts("MAIN MENU\n");
    puts("Select your prefered mode");
    puts("1. Flex mode                    2. AI mode");
    puts("3. Factorial of a number        4. Round up a number");
    puts("0. About the program (find how each mode functions)");
    puts("Q. Quit the program");

    int opcode;
    scanf("%d", &opcode);

    switch(opcode) {

        case 1:
        flexMode();
        break;

        case 2:
        //aiMode();
        break;

        case 3:
        //factorialMode();
        break;

        case 4:
        //roundUpANumber();
        break;

        default:
        wrongInput();
        mainMenu();
    }

}

void flexMode() {

    puts("FLEX MODE\n");
    puts("Calculate in flex mode");

    int i;
    double figure1, figure2, current;
    char operator;

    printf("Figure: ");
    scanf("%lf", &figure1);

    for (i = 0; i < 100; i++) {
        
        printf("Operator: ");
        scanf(" %c", &operator);
        printf("Figure: ");
        scanf("%lf", &figure2);

        switch(operator) {

            case '+':
            current = addition(figure1, figure2);
            printf("\nAnswer: %lf\n", current);
            figure1 = current;
            break;

            case '-':
            current = subtraction(figure1, figure2);
            printf("\nAnswer: %lf\n", current);
            figure1 = current;
            break;

            case '*':
            current = multiplication(figure1, figure2);
            printf("\nAnswer: %lf\n", current);
            figure1 = current;
            break;

            case '/':
            current = division(figure1, figure2);
            printf("\nAnswer: %lf\n", current);
            figure1 = current;
            break;

            default:
            wrongInput();
            printf("\nYour final answer: %lf\n", current);
            mainMenu();

        }
    }

}


double addition(double x, double y) {

    double sum = x + y;
    return (sum);
}


double subtraction(double x, double y) {

    double diff = x - y;
    return (diff);
}


double multiplication(double x, double y) {

    double prod = x * y;
    return (prod);
}


double division(double x, double y) {

    if (y <= 0) {

        puts("invalid expression!");
        return (x);
    }
    else {

        double div = x / y;
        return (div);
    }
}

void wrongInput() {

    puts("Invalid option/input! Try something else...\n");
}

/**
 * rmline - removes the new line character from the end of the string when the fgets method is used
 * @string: the String or text from which the ending new line is to be removed
*/
void rmline(char string[]) {

    string[strcspn(string, "\n")] = '\0';
}

