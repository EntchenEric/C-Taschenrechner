#include <math.h>

int oper(){
    char* op = malloc(5);
    printf("\nBitte wähle aus, welche Operation du ausführen möchtest. \nDu hast folgende Möglichkeiten;\n(m)ultiplikation\n(a)ddition\n(s)ubtraktion\n(d)ivision\n");
    scanf("%s", op);
    if(strcmp(op, "addition") == 0 || strcmp(op, "a") == 0){
            return 1;
    }
    else if(strcmp(op, "subtraktion") == 0 || strcmp(op, "s") == 0){
            return 2;
    }
    else if(strcmp(op, "multiplikation") == 0 || strcmp(op, "m") == 0){
            return 3;
    }
    else if(strcmp(op, "division") == 0 || strcmp(op, "d") == 0 ){
            return 4;
    }
    return 0;
}

int calculate(){
        float num1;
    float num2;
    printf("Bitte gebe deine erste Zahl ein: ");
    scanf("%f", &num1);
    printf("\nBitte gebe deine Zweite Zahl ein: ");
    scanf("%f", &num2);


    int x = 0;
    while (x == 0){
        x = oper();
    }
    if(x == 1){
        float result = num1 + num2;
        printf("%f + %f = %f", num1, num2, result);
    }
    else if(x == 2){
        float result = num1 - num2;
        printf("%f - %f = %f", num1, num2, result);
    }
    else if(x == 3){
        float result = num1 * num2;
        printf("%f * %f = %f", num1, num2, result);
    }
    else if(x == 4){
        float result = num1 / num2;
        printf("%f / %f = %f", num1, num2, result);
    }
    char* yesorno[2];
    printf("\n\nmöchtest du noch eine Berechnung durchführen? \ny/n:");
    scanf("%s", yesorno);

    if(strcmp(yesorno, "y") == 0){
            printf("\n\n");
        return calculate();
    }
    else{
        return 0;
    }

}

int main(){
    int yesno = calculate();
    return 0;
}

