// Application of Dairy By Shawon...
// Here user can Add Data,Read Data,Delete Data,Edit Data,Edit Password... :)

#include <stdio.h>
#include <string.h>
void Add();
void Read();
void Edit();
void Delete();
void EditPassword();
char filename[50],name[50],password[30],s[50],str[50],ch;
FILE *f1,*f2,*f3;
int main()
{
    int choice;
    printf("\n\t\t\t| DAIRY |\n");
    do{
        printf("\n\n\t MENU:\n");
        printf("\t ----\n");
        printf("\n\t(1) ADD\n\t(2) READ\n\t(3) EDIT\n\t(4) Delete\n\t(5) Edit Password\n\t(6) EXIT");
        printf("\n\n\tEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Add();
            break;
        case 2:
            Read();
            break;
        case 3:
            Edit();
            break;
        case 4:
            Delete();
            break;
        case 5:
            EditPassword();
            break;
        default:
            exit(0);
        }
    }while(1);
    return 0;
}
void Add()
{
    system("cls");
    int i;
    printf("\n\tEnter the filename: ");
    scanf("%s",filename);
    f1=fopen(filename,"w");
    printf("\n\tEnter the text and press '*' to save the text\n\n\t");
    while((ch=getchar())!=EOF){
        if(ch=='*') break;
        putc(ch,f1);
    }
    fclose(f1);
    printf("\n\tEnter your name: ");
    scanf("%s",name);
    strcpy(s,filename);
    strcat(s,"@");
    f2=fopen(s,"w");
    for(i=0;name[i];i++)
        putc(name[i],f2);
    fclose(f2);
    printf("\n\tEnter your password: ");
    i=0;
    while(1){
       ch=getch();
       if(ch=='\r') break;
       printf("*");
       name[i++]=ch;
    }
    name[i]='\0';
    printf("\n");
    strcat(s,"@");
    f3=fopen(s,"w");
    for(i=0;name[i];i++)
        putc(name[i],f3);
    fclose(f3);
}
void Read()
{
    system("cls");
    printf("\n\tEnter the filename: ");
    scanf("%s",filename);
    f1=fopen(filename,"r");
    if(f1==NULL){
    printf("\n\tFile not found!");
    goto close;
  }
  printf("\n\tEnter your name: ");
  scanf("%s",name);
  strcpy(s,filename);
  strcat(s,"@");
  f2=fopen(s,"r");
  int i=0;
  while(!feof(f2)){
        ch=getc(f2);
        str[i++]=ch;
    }
    str[i-1]='\0';
    fclose(f2);
    if(strcmp(name,str)==0){
        printf("\n\tEnter your password: ");
        getchar();
        i=0;
        while(1){
        ch=getch();
        if(ch=='\r') break;
        printf("*");
        password[i++]=ch;
    }
    printf("\n");
    password[i]='\0';
        strcat(s,"@");
        f3=fopen(s,"r");
        i=0;
        while(!feof(f3)){
        ch=getc(f3);
        str[i++]=ch;
    }
    str[i-1]='\0';
    fclose(f3);
    if(strcmp(password,str)==0){
       printf("\n\tYour note:\n");
       while(!feof(f1)){
        ch=getc(f1);
        printf("%c",ch);
    }
    printf("\n");
    fclose(f1);
    }
    else{
        printf("\n\tYou have entered wrong password.\n");
        fclose(f1);
    }
    }
    else{
        printf("\n\tInvalid user name");
        fclose(f1);
    }
close:
  fclose(f1);
}
void Edit()
{
    system("cls");
    printf("\n\tEnter the filename: ");
    scanf("%s",filename);
    f1=fopen(filename,"r");
    if(f1==NULL){
        printf("\n\tFile not Found!");
        goto close;
    }
    printf("\n\tEnter your name: ");
    scanf("%s",name);
    strcpy(s,filename);
    strcat(s,"@");
    f2=fopen(s,"r");
    int i=0;
    while(!feof(f2)){
        ch=getc(f2);
        str[i++]=ch;
    }
    str[i-1]='\0';
    fclose(f2);
    if(strcmp(name,str)==0){
        printf("\n\tEnter your password: ");
        getchar();
        i=0;
        while(1){
            ch=getch();
            if(ch=='\r') break;
            printf("*");
            password[i++]=ch;
        }
        printf("\n");
        password[i]='\0';
        strcat(s,"@");
        f3=fopen(s,"r");
        i=0;
        while(!feof(f3)){
            ch=getc(f3);
            str[i++]=ch;
        }
        str[i-1]='\0';
        fclose(f3);
        if(strcmp(password,str)==0){
            printf("\n\tYour previous note:\n");
            while(!feof(f1)){
                ch=getc(f1);
                printf("%c",ch);
            }
            printf("\n");
            fclose(f1);
            int choice;
            printf("\n\twhich one do you want?\n");
            printf("\n\t1.Whole text Edit.\n\t2.Add new text with old ones.\n");
            printf("\n\tChoice: ");
            scanf("%d",&choice);
            printf("\n\tEdit the text and press 'Ctrl+S' to save the text\n\n");
            if(choice==2)
                f1=fopen(filename,"a");
            else if(choice==1){
                f1=fopen(filename,"w");
                putc('\n',f1);
            }
            i=0;
            while(1){
                ch=getch();
                if(ch==19)
                    goto close;
                if(ch==13){
                    ch='\n';
                    printf("\n ");
                    putc(ch,f1);
                }
                else{
                    if(i==0&&choice==2){
                        printf(" ");
                        putc(' ',f1);
                        i=1;
                    }
                printf("%c",ch);
                putc(ch,f1);
            }
        }
        printf("\n");
        goto close;
    }
        else{
            printf("\n\tYou have entered wrong password.\n");
            goto close;
        }
    }
    else{
        printf("\n\tInvalid user name");
        goto close;
    }
    close:
        fclose(f1);
}
void Delete()
{
    system("cls");
    printf("\n\tEnter the filename: ");
    scanf("%s",filename);
    f1=fopen(filename,"r");
    if(f1==NULL){
    printf("\n\tFile not found!");
    goto close;
  }
  printf("\n\tEnter your name: ");
  scanf("%s",name);
  strcpy(s,filename);
  strcat(s,"@");
  f2=fopen(s,"r");
  int i=0;
  while(!feof(f2)){
        ch=getc(f2);
        str[i++]=ch;
    }
    str[i-1]='\0';
    fclose(f2);
    if(strcmp(name,str)==0){
        printf("\n\tEnter your password: ");
        getchar();
        i=0;
        while(1){
        ch=getch();
        if(ch=='\r') break;
        printf("*");
        password[i++]=ch;
    }
    printf("\n");
    password[i]='\0';
        strcat(s,"@");
        f3=fopen(s,"r");
        i=0;
        while(!feof(f3)){
        ch=getc(f3);
        str[i++]=ch;
    }
    str[i-1]='\0';
    fclose(f3);
    if(strcmp(password,str)==0){
    fclose(f1);
    remove(filename);
    printf("\n\tDeleted!");
    }
    else{
        printf("\n\tYou have entered wrong password.\n");
        fclose(f1);
    }
    }
    else{
        printf("\n\tInvalid user name");
        fclose(f1);
    }
close:
  fclose(f1);
}
void EditPassword()
{
    system("cls");
    printf("\n\tEnter the filename: ");
    scanf("%s",filename);
    f1=fopen(filename,"r");
    if(f1==NULL){
        printf("\n\tFile not found!");
        goto close;
    }
    printf("\n\tEnter your previous password: ");
    getchar();
    int i=0;
    while(1){
        ch=getch();
        if(ch=='\r') break;
        printf("*");
        password[i++]=ch;
    }
    password[i]='\0';
    printf("\n");
    strcpy(s,filename);
    strcat(s,"@@");
    f2=fopen(s,"r");
    i=0;
    while(!feof(f2)){
        ch=getc(f2);
        str[i++]=ch;
    }
    str[i-1]='\0';
    fclose(f2);
    if(strcmp(password,str)==0){
        printf("\n\tEnter new password: ");
        f2=fopen(s,"w");
        while(1){
            ch=getch();
            if(ch=='\r') break;
            printf("*");
            putc(ch,f2);
        }
        printf("\n\n\tPassword changed successfully.\n");
        fclose(f2);
        goto close;
    }
    else{
        printf("\n\tYou have entered wrong password!");
        goto close;
        }
    close:
        fclose(f1);
}
