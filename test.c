#include <stdio.h>
#include <stdlib.h>

int main(){
    int menu, ctrl=0;

    do{
        printf("=================================\n");
        printf("\t\tMENU\n\n");
        printf("\t1 - Input Values\n");
        printf("\t2 - Option 2\n");
        printf("\t3 - Option 3\n");
        printf("\t4 - Option 4\n");
        printf("\t5 - Exit\n");
        printf("=================================\n");
        printf("Choice: ");
        scanf("%d", &menu);
        system("cls");

        if(menu == 1){
            //codes
            ctrl+=1;
        }
        else if(menu>=2 && menu<=4 && ctrl!=0){
            if(menu == 2){
                //codes
            }
            else if(menu == 3){
                //codes
            }
            else if(menu == 4){
                //codes
            }
        }
        else if(menu>=2 && menu<=4 && ctrl==0){
            printf("Please input values first!\n");
            continue;
        }
        else if(menu == 5){
            printf("Program Terminates!\n\n");
            return 0;
        }
        else{
            printf("Invalid Input!\n\n");
            return 0;
        }
    }while(menu != 5);

    return 0;
}