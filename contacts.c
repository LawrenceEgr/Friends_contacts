#include<stdio.h>

int main(){

  FILE *fptr;
  char buffer[100];
  char details;
  char *name;
  char *email;
  int *phone;
  int number;

  //select option from menu
  printf("\n ---------------Menu---------------\n 1. Add new friend. \n 2. Display contact info. \n 3. Exit \n ----------------------------------");
  printf("\n Enter an number : %d",number);
  scanf("%d",&number);

  if(number == 1){
    fptr = fopen("contact.txt","a");
    if ( fptr != NULL){
        printf("\n Enter the your friends details.");
        printf("\n Name : %s", name);
        scanf("%s",&name);
        fprintf(fptr,"Name : %s\n",name);
        printf("\n Phone : %d",phone);
        scanf("%d",&phone);
        fprintf(fptr,"Phone : %d\n",phone);
        printf("\n Email : %s", email);
        scanf("%s",&email);
        fprintf(fptr,"Email : %s\n",email);
      //putc(name,fp);
     //fputs(phone,fp);
     //fputs(email,fp);

     fclose(fptr);
    }

    else{
        printf("\n There was an error in adding your friends details");
    }

  }
  else if (number == 2){
    fptr = fopen("contact.txt","r");
    if (fptr != NULL){
        details = fgets(buffer,100,fptr);
        while(details != EOF){
                printf("%s",buffer);
            details= fgets(buffer,100,fptr);
        }
    }
    fclose(fptr);
    //else{
     //   printf("\n There was an error in displaying your friends details");
    //}
  }
  else if (number == 3){
    end();
  }
  else if(number == NULL){
    printf( "you have not entered anything!");
    printf("\Please enter a number : %d",number);
    scanf("%d",&number);
  }
  else {
    printf("\n Invalid option");
    printf("\Please enter the GIVEN number : %d",number);
    scanf("%d",&number);
  }
  return 0;
}
