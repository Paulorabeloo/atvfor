#include <stdio.h>
int main(){
    int n;
    scanf("%i", &n);
    for (; n >= 0 ;){
        printf("%i", &n);
        --n;
    }
return 0;
}
