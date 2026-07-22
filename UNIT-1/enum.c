#include<stdio.h>
#include<conio.h>

enum weeks {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

void main(){
    enum weeks w;
    w = Tue;

    printf("\n Value of Tue is : %d", w);

    getch();
}
