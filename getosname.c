#include <stdio.h>

int getOsName(void){
    FILE *fp;
    char buffer[50] = " ";
    fp = popen("lsb_release -ds", "r");
    fgets(buffer, 50, fp);
    pclose(fp);
    printf("Name of the OS is : %s",buffer);
    return 0;
}
