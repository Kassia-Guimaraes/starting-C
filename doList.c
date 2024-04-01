#include <stdio.h>
#include <math.h>

int addTask(char toDo[], int sizeList, char addTask){
    printf("Type the task you want to add to the list\n");
    scanf("%s", addTask);
    
}

int main(){
    int flagAdd, sizeList;
    char toDo[]= {},  addTask;

    printf("The to-do list is empty. Want to add a task?\n 1 -> Yes\n 2 -> No");
    scanf("%d", flagAdd);

    if (flagAdd==1){

    }

    return 0;
}