#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8


void takepassword(char pwd[50]){
	int i;
	char ch;
	while(1){
		ch = getch();
		if(ch == ENTER || ch == TAB){
			pwd[i] = '\0';
			break;
		}else if(ch == BCKSPC){
			if(i>0){
				i--;
				printf("\b \b");
			}
		}else{
			pwd[i++] = ch;
			printf("* \b");
		}
	}
}

int main(){
    int x,i;
    char str[100];
   

    while(1)
	{
   
    printf("\t\t\t\t---ENCRYPTION/DECRYPTION SYSTEM-------\n");
	printf("\n\n\nEnter your message:\t");
    takepassword(str);
    printf("\n\n1. Encrypt \n2. Decrypt");
    printf("\n\nEnter your operation:");
    scanf("%d",&x);
    
    switch (x)
    {
    case 1:
    	system("cls");
    for(i=0; (i<=100 && str[i] !='\0' ); i++)
    str[i]=str[i]+4; 
    printf("\nEncryprion sucess!");
    printf("\nEncrypted message: %s\t",str);
    printf("\t\t\t\t\n\n\nPRESS ENTER TO CONTINUE.......");
    getch();
    system("cls");
        break;

    case 2:
    	system("cls");
    for(i=0; (i<=100 && str[i]!='\0'); i++)
    str[i]=str[i]-4;
   printf("\nDecryprion sucess!");
    printf("\nDecrypted message: %s\t",str);
    printf("\t\t\t\t\n\n\nPRESS ENTER TO CONTINUE.......");
    getch();
    system("cls");
    break;
    default:
    printf("Error");
        break;

    }
}
    getch();
}
