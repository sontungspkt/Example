#include <stdio.h>
#include <string.h>

void tong(){
    auto int a = 2;
    a++;
    printf("\n%d", a);
}

int main(int argc, char const *argv[])
{
    tong();
    tong();

}
