#include <stdio.h>
int auth(int db[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == db[i][0] && pin == db[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int db[3][2] = {{1234,1234},{5678,5678},{6789,6789}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN Number: ");
    scanf("%d",&pin);
    if(auth(db,id,pin)){
        printf("You have logged successfully in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}