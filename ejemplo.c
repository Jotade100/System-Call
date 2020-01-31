#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
    int parametro;
    scanf("%d", &parametro);
    syscall(548, parametro);
    printf("\n La System call 'sys_so' ha terminado");
    return 0;
}