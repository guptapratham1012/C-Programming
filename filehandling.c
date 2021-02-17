#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp,*fp2;
    char buff[50],s[50]=" ";
    fp = fopen("C:/Users/prath/Desktop/one.txt","r");
    fp2=fopen("C:/Users/prath/Desktop/two.txt","w+");
    fscanf(fp, "%s", buff);
    printf("Input to the reverse function:  %s\n",buff);
    for(i=strlen(buff)-1;i>=0;i--)
        s[strlen(buff)-i]=buff[i];
    printf("Output:   %s",s);
    fputs(s,fp2);
    fclose(fp);
    fclose(fp2);
    return 0;
}
