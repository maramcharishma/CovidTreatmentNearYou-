#include<stdio.h>
#include<string.h>

void user();
void corona(int );
void admin_corona(int );
void other_diseases(int , int );
void admin_other_diseases( int );


int main()
{
    char s[50];
    printf("\n\n\n\n\n\n\n\t\t\t-------------------- WELCOME ------------------- \n\n");
    printf("\t\t\tenter your name : ");
    gets(s);
    printf("\n\t\t\tHi ");
    puts(s);
    printf("\n");
    user();
    return 0;
}
void user()
{
    while(1)
    {
        int choice;
        int a;
        printf("\t\t\tSelect either admin or user \n\n");
        printf(" \t\t\tIf ADMIN choose 1 \n\n \t\t\tIf PATIENT choose 2 \n\n");
        printf("\t\t\tEnter choice : ");
        scanf("%d",&a);
        while(a!=1 && a!=2)
        {
            printf("\n\n\t\t\t ENTER VALID CHOICE: ");
            scanf("%d",&a);
        }
        while(a!=1 && a!=2)
    {
         printf("\n\n\t\t\tEnter valid number : ");
         scanf("%d",&a);
    }
        system("cls");
        if(a==2)
            {
                int age;
                printf("\n\n\n\n\n\n\n\t\t\tEnter your age: ");
                scanf("%d",&age);
                while(age<=0)
                {
                   printf("\n");
                   printf("\t\t\tEnter valid age: ");
                   scanf("%d",&age);
                }
                //printf("\n\n\t\t\tCORRECT AGE ENTERED !");
                system("cls");
                printf("\n\n\n\n\n\n\n\t\t\tselect your problem : \n\n");
                printf("\t\t\t 1. Corona \n\n\t\t\t 2. Other problems \n\n");
                printf("\t\t\t Enter: ");
                scanf("%d",&choice);
                while(choice!=1 && choice!=2)
                {
                        printf("\n\n\t\t\tEnter valid number : ");
                        scanf("%d",&choice);
                }
                system("cls");
                int n;
                printf("\n\n\n\n\n\n\n\t\t\tSelect the place you live in (nearby) \n\n");
                printf("\t\t\t 1. Gachibowli \n\n\t\t\t 2. Jubilee Hills \n\n\t\t\t 3. Banjara Hills \n\n\t\t\t Enter : ");
                scanf("%d",&n);
                while(n!=1 && n!=2)
                {
                    if(n!=3)
                    {
                        printf("\n\n\t\t\tEnter valid number : ");
                        scanf("%d",&n);
                    }
                    else if(n==3)
                    {
                        break;
                    }
                }
                system("cls");
                if(choice==1)
                corona(n);

                else if(choice == 2)
                {
                    printf("\n\n\t\t\tHI! HOPE YOU ARE DOING GOOD!\n\n");
                    printf("\t\t\tIf you are suffering from the following please take a corona test : \n\n");
                    printf("\t\t\t***COMMON SYMPTOMS***\n\n");
                    printf("\t\t\t 1. Fever \n\t\t\t 2. Dry Cough \n\t\t\t 3. Tiredness \n \n");
                    printf("\t\t\t***LESS COMMON SYMPTOMS***\n\n");
                    printf("\t\t\t 4. aches and pains \n\t\t\t 5. sore throat \n\t\t\t 6. conjunctivitis \n\t\t\t 7. headache \n\t\t\t 8. loss of taste or smell \n\n");
                    printf("\t\t\t***SERIOUS SYMPTOMS***\n\n");
                    printf("\t\t\t 9. Difficulty in breathing or shortness of breath \n");
                    printf("\t\t\t 10. chest pain or pressure \n\t\t\t 11. loss of speech or movement \n\n");
                    int temp;
                    printf("\t\t\tIf you want us you to redirect to corona enter 1 \n");
                    printf("\t\t\tIf you want to continue with other diseases enter 2 \n");
                    printf("\t\t\tEnter: ");
                    scanf("%d",&temp);
                    system("cls");
                    if(temp==1)
                        corona(n);
                   else if(temp==2)
                   {
                       other_diseases(age,n);
                   }
               }
               else
                  printf("Please Enter Valid Number \n\n");
         }
         else if(a==1)
       {
        int place,option;
        printf("\n\n\n\n\n\n\n\t\t\tDo you want to update corona hospitals or doctor's(Other diseases)\n\n");
        printf("\t\t\tSelect\n\n\t\t\t 1 for corona \n\n\t\t\t 2 for other diseases\n\n");
        printf("\t\t\tEnter: ");
        scanf("%d",&option);
        system("cls");
        if(option==1)
        {
            printf("\n\n\n\n\n\n\n\t\t\tSelect place of hospital you want to update : \n\n");
            printf("\t\t\t 1. Gachibowli \n\n\t\t\t 2. Jubilee Hills \n\n\t\t\t 3. Banjara Hills \n\n\t\t\t Enter : ");
            scanf("%d",&place);
            system("cls");
            admin_corona(place);
        }

        if(option == 2)
        {
            printf("\n\n\n\n\n\n\n\t\t\tSelect the place of hospital you want to update : \n\n");
            printf("\t\t\t 1. Gachibowli \n\n\t\t\t 2. Jubilee Hills \n\n\t\t\t 3. Banjara Hills \n\n\t\t\t Enter : ");
            scanf("%d",&place);
            system("cls");
            admin_other_diseases( place );
        }
    }

    int x;
    printf("\n\n\n\n\n\n\n\t\t\tEnter 1 if you want to continue\n\n\t\t\tEnter 2 for exit");
    printf("\n\n\t\t\t Enter: ");
    scanf("%d",&x);
    system("cls");
    if(x==1)
        continue;
    else if(x==2)
        exit(0);
    }
}

void other_diseases(int a, int place) //a corresponds to age
{
    int choice;
    printf("\n\n\n\n\n\n\n\t\t\tSelect the problem you are suffering from: \n\n");
    printf(" \t\t\t1. Pediatrics \n\t\t\t 2. Orthopedic \n\n");
    printf("\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    system("cls");
    if(a<18)
    {
        if(place==1)
        {
           if(choice==1 )
            {
                FILE *file;
                file = fopen("PGachibowli.txt","r");
                char c;
                c = fgetc(file);
                while (c != EOF)
                {
                     printf ("%c", c);
                     c = fgetc(file);
                }
                fclose(file);
            }
            if(choice==2 )
            {
                FILE *file;
                file = fopen("OGachibowli.txt","r");
                char c;
                c = fgetc(file);
                while (c != EOF)
                {
                     printf ("%c", c);
                     c = fgetc(file);
                }
                fclose(file);
            }
        }
        if(place==2)
        {
            if(choice==1 )
            {
                FILE *file;
                file = fopen("PJubilee hills.txt","r");
                char c;
                c = fgetc(file);
                while (c != EOF)
                {
                     printf ("%c", c);
                     c = fgetc(file);
                }
                fclose(file);
            }
            if(choice==2 )
            {
                FILE *file;
                file = fopen("OJubilee hills.txt","r");
                char c;
                c = fgetc(file);
                while (c != EOF)
                {
                     printf ("%c", c);
                     c = fgetc(file);
                }
                fclose(file);
            }
        }
        if(place==3)
        {
            if(choice==1)
            {
                FILE *file;
                file = fopen("PBanjara hills.txt","r");
                char c;
                c = fgetc(file);
                while (c != EOF)
                {
                     printf ("%c", c);
                     c = fgetc(file);
                }
                fclose(file);
            }
            if(choice==2)
            {
                FILE *file;
                file = fopen("OBanjara hills.txt","r");
                char c;
                c = fgetc(file);
                while (c != EOF)
                {
                     printf ("%c", c);
                     c = fgetc(file);
                }
                fclose(file);
            }
        }
    }

}

void admin_other_diseases(int place)
{
    int n;
    printf("\n\n\n\n\n\n\n\t\t\tSelect what do you want to update from the following: \n\n");
    printf("\t\t\t 1. pediatrics  \n\t\t\t 2. Orthopedic \n\n");
    printf("\t\t\tEnter your choice: ");
    scanf("%d",&n);
    while(n!=1 && n!=2)
        {
            printf("\n\n\t\t\t ENTER VALID CHOICE: ");
            scanf("%d",&n);
        }
    while(n!=1 && n!=2)
    {
         printf("\n\n\t\t\tEnter valid number : ");
         scanf("%d",&n);
    }
    system("cls");

    if(place == 1)
    {
        if(n==1)
        {
            FILE *file;
            file = fopen("PGachibowli.txt","a");
            char data[200];

            printf("");
            fgets(data, 200, stdin);
            fputs("\n", file);

            printf("\n");

            printf("\t\t\tEnter Doctors name: ");
            fgets(data, 200, stdin);
            fputs("   DOCTORS NAME: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter experience: ");
            fgets(data, 200, stdin);
            fputs("   Experience: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter the hospital the doctor works: ");
            fgets(data, 200, stdin);
            fputs("   Works at: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter Address of the hospital: ");
            fgets(data, 200, stdin);
            fputs("   Address: ", file);
            fputs(data,file);

            printf("\n");

            printf("\t\t\tEnter Consultancy fee at clinic: ");
            fgets(data, 200, stdin);
            fputs("   Consultation fee at clinic: ", file);
            fputs(data, file);

            printf("\n");
            printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");

            fclose(file);
        }
        if(n==2)
        {
            FILE *file;
            file = fopen("OGachibowli.txt","a");
            char data[200];

            printf("");
            fgets(data, 200, stdin);
            fputs("\n", file);

            printf("\n");

            printf("\t\t\tEnter Doctors name: ");
            fgets(data, 200, stdin);
            fputs("   DOCTORS NAME: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter experience: ");
            fgets(data, 200, stdin);
            fputs("   Experience: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter the hospital the doctor works: ");
            fgets(data, 200, stdin);
            fputs("   Works at: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter Address of the hospital: ");
            fgets(data, 200, stdin);
            fputs("   Address: ", file);
            fputs(data,file);

            printf("\n");

            printf("\t\t\tEnter Consultancy fee at clinic: ");
            fgets(data, 200, stdin);
            fputs("   Consultation fee at clinic: ", file);
            fputs(data, file);

            printf("\n");
            printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");

            fclose(file);
        }

    }
    if(place == 2)
    {
        if(n==1)
        {
            FILE *file;
            file = fopen("PJubilee hills.txt","a");
            char data[200];

            printf("");
            fgets(data, 200, stdin);
            fputs("\n", file);

            printf("\n");

            printf("\t\t\tEnter Doctors name: ");
            fgets(data, 200, stdin);
            fputs("   DOCTORS NAME: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter experience: ");
            fgets(data, 200, stdin);
            fputs("   Experience: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter the hospital the doctor works: ");
            fgets(data, 200, stdin);
            fputs("   Works at: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter Address of the hospital: ");
            fgets(data, 200, stdin);
            fputs("   Address: ", file);
            fputs(data,file);

            printf("\n");

            printf("\t\t\tEnter Consultancy fee at clinic: ");
            fgets(data, 200, stdin);
            fputs("   Consultation fee at clinic ", file);
            fputs(data, file);

            printf("\n");
            printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");


            fclose(file);
        }
        if(n==2)
        {
            FILE *file;
            file = fopen("OJubilee hills.txt","a");
            char data[200];

            printf("");
            fgets(data, 200, stdin);
            fputs("\n", file);

            printf("\n");

            printf("\t\t\tEnter Doctors name: ");
            fgets(data, 200, stdin);
            fputs("   DOCTORS NAME: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter experience: ");
            fgets(data, 200, stdin);
            fputs("   Experience: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter the hospital the doctor works: ");
            fgets(data, 200, stdin);
            fputs("   Works at: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter Address of the hospital: ");
            fgets(data, 200, stdin);
            fputs("   Address: ", file);
            fputs(data,file);

            printf("\n");

            printf("\t\t\tEnter Consultancy fee at clinic: ");
            fgets(data, 200, stdin);
            fputs("   Consultation fee at clinic ", file);
            fputs(data, file);

            printf("\n");
            printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");


            fclose(file);
        }
    }
    if(place == 3)
    {
        if(n==1)
        {

            FILE *file;
            file = fopen("PGachibowli.txt","a");
            char data[200];

            printf("");
            fgets(data, 200, stdin);
            fputs("\n", file);

            printf("\n");

            printf("\t\t\tEnter Doctors name: ");
            fgets(data, 200, stdin);
            fputs("   DOCTORS NAME: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter experience: ");
            fgets(data, 200, stdin);
            fputs("   Experience: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter the hospital the doctor works: ");
            fgets(data, 200, stdin);
            fputs("   Works at: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter Address of the hospital: ");
            fgets(data, 200, stdin);
            fputs("   Address: ", file);
            fputs(data,file);

            printf("\n");

            printf("\t\t\tEnter Consultancy fee at clinic: ");
            fgets(data, 200, stdin);
            fputs("   Consultation fee at clinic ", file);
            fputs(data, file);

            printf("\n");
            printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");


            fclose(file);
        }
        if(n==2)
        {
            FILE *file;
            file = fopen("OGachibowli.txt","a");
            char data[200];

            printf("");
            fgets(data, 200, stdin);
            fputs("\n", file);

            printf("\n");

            printf("\t\t\tEnter Doctors name: ");
            fgets(data, 200, stdin);
            fputs("   DOCTORS NAME: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter experience: ");
            fgets(data, 200, stdin);
            fputs("   Experience: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter the hospital the doctor works: ");
            fgets(data, 200, stdin);
            fputs("   Works at: ", file);
            fputs(data, file);

            printf("\n");

            printf("\t\t\tEnter Address of the hospital: ");
            fgets(data, 200, stdin);
            fputs("   Address: ", file);
            fputs(data,file);

            printf("\n");

            printf("\t\t\tEnter Consultancy fee at clinic: ");
            fgets(data, 200, stdin);
            fputs(" Consultation fee at clinic ", file);
            fputs(data, file);

            printf("\n");
            printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");


            fclose(file);
        }
    }

}

void admin_corona(int p)
{
   if(p==1)
   {
       FILE *file;
       file = fopen("Gachibowli.txt","a");
       char data[200];

       printf("");
       fgets(data, 200, stdin);
       fputs("\n", file);

       printf("\n");

       printf("\t\t\tEnter hospital name (in caps): ");
       fgets(data, 200, stdin);
       fputs("   ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter address: ");
       fgets(data, 200, stdin);
       fputs("   Address: ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter availability time: ");
       fgets(data, 200, stdin);
       fputs("   ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter contact number: ");
       fgets(data, 200, stdin);
       while(strlen(data)!=11) // 11 because it takes space as one character
       {
           printf("\n\n");
           printf("\t\t\tEnter contact number: ");
           fgets(data, 200, stdin);
       }
       fputs("   phone: ", file);
       fputs(data, file);

       printf("\n");
       printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");


       fclose(file);
   }
   if(p==2)
   {
       FILE *file;
       file = fopen("Jubilee hills.txt","a");
       char data[200];

       printf("");
       fgets(data, 200, stdin);
       fputs("\n", file);

       printf("\n");

       printf("\t\t\tEnter hospital name (in caps): ");
       fgets(data, 200, stdin);
       fputs("   ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter address: ");
       fgets(data, 200, stdin);
       fputs("   Address: ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter availability time: ");
       fgets(data, 200, stdin);
       fputs("   ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter contact number: ");
       fgets(data, 200, stdin);
       while(strlen(data)!=11)
       {
           printf("\n\n");
           printf("\t\t\tEnter contact number: ");
           fgets(data, 200, stdin);
       }
       fputs("   phone: ", file);
       fputs(data, file);

       printf("\n");
       printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");

       fclose(file);
   }
   if(p==3)
   {
       FILE *file;
       file = fopen("Banjara hills.txt","a");
       char data[200];

       printf("");
       fgets(data, 200, stdin);
       fputs("\n", file);

       printf("\n");

       printf("\t\t\tEnter hospital name (in caps): ");
       fgets(data, 200, stdin);
       fputs("   ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter address: ");
       fgets(data, 200, stdin);
       fputs("   Address: ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter availability time: ");
       fgets(data, 200, stdin);
       fputs("   ", file);
       fputs(data, file);

       printf("\n");

       printf("\t\t\tEnter contact number: ");
       fgets(data, 200, stdin);
       while(strlen(data)!=11)
       {
           printf("\n\n");
           printf("\t\t\tEnter contact number: ");
           fgets(data, 200, stdin);
       }
       fputs("   phone: ", file);
       fputs(data, file);

       printf("\n");
       printf("\t\t\t***DATA SUCCESSFULLY ADDED***\n\n\n\n");


       fclose(file);
   }
}


void corona(int n)
{
    //printf("%d",n);
    if(n == 1)
    {
        //printf("entered if block");
          FILE *file;
          file = fopen("Gachibowli.txt","r");
          char c;
          c = fgetc(file);
          while (c != EOF)
          {
                 printf ("%c", c);
                 c = fgetc(file);
           }
           fclose(file);
    }
    if(n==2)
    {
        FILE *file;
          file = fopen("Jubilee hills.txt","r");
          char c;
          c = fgetc(file);
          while (c != EOF)
          {
                 printf ("%c", c);
                 c = fgetc(file);
           }
           fclose(file);
    }
    if(n==3)
    {
        FILE *file;
          file = fopen("Banjara hills.txt","r");
          char c;
          c = fgetc(file);
          while (c != EOF)
          {
                 printf ("%c", c);
                 c = fgetc(file);
           }
           fclose(file);
    }
}



