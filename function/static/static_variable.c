#include<stdio.h>
#include<stdint.h>

void get_static_variable () {
        static int32_t x = 0;
        x+=1;
        printf("%d\n", x);


        return;
}

int main(){
    for(int i =1; i<=10; i++){
        get_static_variable();
    }


    return 0;
}
