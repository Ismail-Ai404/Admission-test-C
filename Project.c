#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ! Admin Related
void StudentInfo();

void Admin();

// ! Student related
void question();
void StudentLogin();
void Register();
void Studentportal();

// ! main menu funtion
void Mainmenu();

void StudentInfo()
{
    FILE *fptr6;
    fptr6 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\Aname.txt", "r");

    char name[50][50];
    int marks[50];

    int count2 = 0;
    while (fscanf(fptr6, "%s %d\n", name[count2], &marks[count2]) != EOF)
    {
        count2++;
    }
    int array[100], n, c, d, swap;

    char temp[50];
    // ! BUBBLE SORT FOR MARKS AND NAME
    for (c = 0; c < count2; c++)
    {
        for (d = 0; d < count2 - c - 1; d++)
        {
            if (marks[d] < marks[d + 1]) /* For decreasing order use '<' instead of '>' */
            {
                swap = marks[d];
                marks[d] = marks[d + 1];
                marks[d + 1] = swap;
                strcpy(temp, name[d]);
                strcpy(name[d], name[d + 1]);
                strcpy(name[d + 1], temp);
            }
        }
    }

    printf("NAME\t\tMARKS:\n\n");

    for (c = 0; c < count2; c++)
    {
        printf("%s\t\t", name[c]);
        printf("%d\n\n", marks[c]);
    }
}

void Admin()
{
    printf("\n******************************************************\n\t\tWelcome Admin\n******************************************************");

    printf("\n\n\t\tLogin\n\n");

    printf("\n\n\n\t\tEnter Admin ID:");
    gets(stdin);
    char id[10], pass[10];
    scanf("%s", id);
    printf("\t\tEnter Password:");
    scanf("%s", pass);
    char defid[10] = "POST", defpass[10] = "MALONE";
    int val = strcmp(id, defid), val1 = strcmp(pass, defpass);
    if (val == 0 && val1 == 0)
    {
        printf("\n\n\t\tLogin Success\n\n");
        StudentInfo();
    }
    else
    {
        printf("\n\n\t\tWrong Input\n");
        printf("\t\tRetry(Y/N):");

        char y;
        scanf(" %c", &y);
        if (y == 'Y' || y == 'y')
        {
            printf("\n\n\n");
            Admin();
        }
        else if (y == 'N' || y == 'n')
        {
            printf("\n\n\t\tReturn to mainmenu  or exit (M/E):");
            char z;
            scanf(" %c", &z);

            if (z == 'M' || z == 'm')
            {
                printf("\n\n\n");
                Mainmenu();
            }
            else if (z == 'E' || z == 'e')
            {
                printf("\n\n\n\t\t***Thank you!***");
            }
            else
            {
                printf("\n\n\t\tWrong Input\n");
                printf("\t\tReturned from admin\n\n");
                Mainmenu();
            }
        }
        else
        {
            exit(1);
        }
    }
}
void question()
{

    FILE *fptr, *fptr2, *fptr3;
    fptr2 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\qOption.txt", "w");
    fptr3 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\qAns.txt", "w");
    fptr = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\qQuestion.txt", "w");

    fprintf(fptr, "Which of the following is the largest NGO in Bangladesh?\n");
    fprintf(fptr2, "i.BRAC ii.PKSF iii.Proshika iv.ASA\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Which one is widest river in Bangladesh?\n");
    fprintf(fptr2, "i.the Jamuna ii.The Meghna iii.The Surma iv.The Padma\n");
    fprintf(fptr3, "ii\n");

    fprintf(fptr, "Which of the following is not considered a primary color of light?\n");
    fprintf(fptr2, "i.green ii.blue iii.red iv.yellow\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "What is the national symbol of japan?\n");
    fprintf(fptr2, "i.Dragon ii.Rose iii.Lilly flower iv.Chrysanthemum\n");
    fprintf(fptr3, "ii\n");

    fprintf(fptr, "Which country ranked the top in 2009 corruption concept index?\n");
    fprintf(fptr2, "i.Somalia ii.Afganistan iii.Bangladesh iv.Mymanmar\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Which Arab country first recognized Bangladesh as an independent nation?\n");
    fprintf(fptr2, "i.Iraq ii.Iran iii.Saudi Arabia iv.Lebanon\n");
    fprintf(fptr3, "iii\n");

    fprintf(fptr, "Niagara falls is located in-\n");
    fprintf(fptr2, "i.Asia ii.North America iii.Australia iv.South America\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "Which one is the largest desert in the world?\n");
    fprintf(fptr2, "i.Patagonia desert ii.Takla desert iii.Gobi desert iv.None of these\n");
    fprintf(fptr3, "ii\n");

    fprintf(fptr, "Which country is the defending champion of the world cup football?\n");
    fprintf(fptr2, "i.Brazil ii.Argentina iii.France iv.None of these\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "For which literary work as Rabindranath Tagore awarded with the novel prize?\n");
    fprintf(fptr2, "i.Sanchita ii.song offering iii.khanika iv.sonartori\n");
    fprintf(fptr3, "iii\n");

    fprintf(fptr, "From which country does Bangladesh get his highest Foreign Direct investment?\n");
    fprintf(fptr2, "i.The UAE ii.The UK iii.The USA iv.Japan\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "What is the name of central bank of India?\n");
    fprintf(fptr2, "i.Bank of India ii.State Bank of India iii.Reserve Bank of India iv.Federal Bank of India\n");
    fprintf(fptr3, "ii\n");

    fprintf(fptr, "Which file extensions do indicate only graphics files?\n");
    fprintf(fptr2, "i.BMP and GIF ii.TXT and STK iii.JPEG and TXT iv.BMP and DOC\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "The name of which of the following cities was changed to Retrograde and Leningrad?\n");
    fprintf(fptr2, "i.Moscow ii.Tashkent iii.Kiev iv.St. Petersburg\n");
    fprintf(fptr3, "iii\n");

    fprintf(fptr, "Who is regarded as the father of the science fiction?\n");
    fprintf(fptr2, "i.Isaac Asimov ii.Jules Verne iii.Arthur C.Clarke iv.H.G.Wells\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "Among the following lights which one has the shortest wavelength?\n");
    fprintf(fptr2, "i.violet ii.blue iii.green iv.red\n");
    fprintf(fptr3, "ii\n");

    fprintf(fptr, "In terms of land area the largest continent on the earth is-\n");
    fprintf(fptr2, "i.Europe ii.North America iii.Antarctica iv.Chines\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Which one of the following is the brightest planet of the solar system as seen from the earth?\n");
    fprintf(fptr2, "i.mars ii.venus iii.mercury iv.uranus\n");
    fprintf(fptr3, "iii\n");

    fprintf(fptr, "who is the founder of Wikileaks?\n");
    fprintf(fptr2, "i.Rick perry ii.Steve jobs iii.Bill gates iv.Julian Assange\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "Which of the following countries claimed the title of the FIFA women�s world cup 2011 ?\n");
    fprintf(fptr2, "i.USA ii.Japan iii.Germany iv.Brazil\n");
    fprintf(fptr3, "ii\n");

    fprintf(fptr, "How many districts constitute Dhaka Division?\n");
    fprintf(fptr2, "i.17 ii.16 iii.18 iv.15\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "The main memory of a computer is also called-\n");
    fprintf(fptr2, "i.internal memory ii.primary memory iii.all of these iv.Primary storage\n");
    fprintf(fptr3, "iii\n");

    fprintf(fptr, "one character is represented by-\n");
    fprintf(fptr2, "i.one megabyte ii.one kilobyte iii.one bit iv.one byte\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "which type of disk can store up to 17GB of data?\n");
    fprintf(fptr2, "i.floppy disk ii.dvd iii.optical disk iv.cd\n");
    fprintf(fptr3, "ii\n");

    fprintf(fptr, "which one of the following is an example of file compression software?\n");
    fprintf(fptr2, "i.winzip ii.MS compress iii.wincompress iv.MS file zip\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "In Ms word which of the following is not a font style?\n");
    fprintf(fptr2, "i.Bold ii.Regular iii.Italic iv.superscript\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "Of the following countries which is a member of NATO?\n");
    fprintf(fptr2, "i.pakistan ii.japan iii.turkey iv.albania\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "First atom bomb was dropped in \n");
    fprintf(fptr2, "i.1944 ii.1945 iii.1933 iv.1935\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Sania mirza is a\n");
    fprintf(fptr2, "i.actress ii.model iii.tennis player iv.singer\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Hepatitis C increases the risk of �\n");
    fprintf(fptr2, "i.blood cancer ii.stomach cancer iii.liver cancer iv.HIV AIDS\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "The world bank is a-\n");
    fprintf(fptr2, "i.Multinational Bank ii.National Bank  iii.U.N Body iv.International Financial Institution\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "ICC officer has been shifted from lords, England to-\n");
    fprintf(fptr2, "i.Qatar ii.India iii.Dubai iv.Srilanka\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Which of the following is not a part of milk?\n");
    fprintf(fptr2, "i.Proteins ii.Carbohydrate iii.Sugar iv.Fat\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Phulbari coal mine is in �\n");
    fprintf(fptr2, "i.South Bengal ii.West Bengal iii.North Bengal iv.Murshidabad\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Paharpur monastery is in-\n");
    fprintf(fptr2, "i.Natore ii.Naogoan iii.Bogra iv.Joupur Hat\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "which city is known as the pink city?\n");
    fprintf(fptr2, "i.Tokyo ii.Joypur iii.Delhi iv.Beijing\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "The famous book odyssey is written by\n");
    fprintf(fptr2, "i.Shakespeare ii.Homer iii.Keats iv.Bayron\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Which of the following is called city of culture?\n");
    fprintf(fptr2, "i.Amsterdam ii.Athens iii.Paris iv.Rome\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "who directed the film named palassy to 32 dhanmondi?\n");
    fprintf(fptr2, "i.Zahir raihan ii.Shamima Akter iii.Abul Gaffar Chowdhury iv.Amzad Hossain\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "During liberation war of Bangladesh dhaka was under which sector ?\n");
    fprintf(fptr2, "i.1 ii.2 iii.4 iv.5\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Who is the third president of Russia ?\n");
    fprintf(fptr2, "i.Vladimir puin ii.George bush iii.Dmitry medvedev iv.Alexandae kosigin\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "The secretariate of the SAARC is situated at-\n");
    fprintf(fptr2, "i.Islamabad ii.Dhaka iii.New Delhi iv.Kathmandu\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "Which of the following banks has recently been declared to be a public ltd. Co.?\n");
    fprintf(fptr2, "i.Rupali ii.Pubali iii.Shonali iv.Brac\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "The capital of united Arab Emirates is :\n");
    fprintf(fptr2, "i.Dubai ii.Abu Dhabi iii.Sharjah iv.Al Ain\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "The jumana bridge is the largest bridge in the world.\n");
    fprintf(fptr2, "i.5th ii.9th iii.10th iv.13th\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "which asian country belongs to the G-8 countries?\n");
    fprintf(fptr2, "i.Japan ii.China iii.Singapore iv.South Korea\n");
    fprintf(fptr3, "i\n");

    fprintf(fptr, "In which year was the Islamic development bank established?\n");
    fprintf(fptr2, "i.1970 ii.1971 iii.1975 iv.1978\n");
    fprintf(fptr3, "iii\n");

    fprintf(fptr, "Which of the following is a Scandinavian country ?\n");
    fprintf(fptr2, "i.Italy ii.Demmark iii.England iv. Japan\n");
    fprintf(fptr3, "iii\n");

    fprintf(fptr, "In IPL championship 2011 who was adjudged man of the series?\n");
    fprintf(fptr2, "i.Dhoni ii.Donald trump iii.Shahruk khan iv.Gayle\n");
    fprintf(fptr3, "iv\n");

    fprintf(fptr, "Kim jong il was the supreme leader of which country?\n");
    fprintf(fptr2, "i.America ii.North kores iii. Japan iv.South Korea\n");
    fprintf(fptr3, "ii\n");

    fclose(fptr);
    fclose(fptr2);
    fclose(fptr3);

    fptr2 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\qOption.txt", "r");
    fptr3 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\qAns.txt", "r");
    fptr = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\qQuestion.txt", "r");

    char qus[50][250];
    char opt[50][250];
    char ans[50][5];
    int count = 0;
    //qus
    while (fgets(qus[count], 1000, fptr) != NULL)
    {
        count++;
    }
    //opt
    int count2 = 0;
    while (fgets(opt[count2], 1000, fptr2) != NULL)
    {
        count2++;
    }
    //ans
    int count3 = 0;

    int k = 0;
    while (fscanf(fptr3, "%s\n", ans[k]) != EOF)
    {
        k++;
    }
    fclose(fptr);
    fclose(fptr2);
    fclose(fptr3);
    int count4 = 0, marks = 0;
    char userans[50][50];
    int val[50];
    for (count4 = 0; count4 < 50; count4++)
    {
        printf("\t\t\n\n*** Question %d ***\n\n", count4 + 1);
        printf("%s\n", qus[count4]);
        printf("%s\n", opt[count4]);

        printf("Insert Answer here:");
        gets(userans[count4]);

        val[count4] = strcmp(userans[count4], ans[count4]);

        if (val[count4] == 0)
        {
            marks++;
        }
    }
    printf("\n\n\tPlease Re-enter your name:");

    char name[50];
    gets(name);

    printf("\n\n\n\t\t*****The Examination is over*****");
    printf("\t\t*****Please be patient until the results*****\n");
    printf("\t\t*****GooD LuCk!*****\n\n\n\n\n\n");

    FILE *fptr6;
    fptr6 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\Aname.txt", "a");
    fprintf(fptr6, "%s %d\n", name, marks);
    fclose(fptr6);
    Mainmenu();
}
void StudentLogin()
{
    printf("\n\n\n******************************************************\n\t\tStudent Login\n******************************************************\n");
    FILE *fptr, *fptr1;
    fptr = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\Student Password.txt", "r");
    fptr1 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\Student Username.txt", "r");
    char name[50], pass[50], userpass[50][50], usercheck[50][50];
    printf("\n\n\n\t\tEnter Username:");
    scanf("%s", name);
    printf("\t\tEnter Password:");
    scanf("%s", pass);

    int i = 0;

    while (fscanf(fptr, "%s\n", userpass[i]) != EOF)
    {
        i++;
    }
    int k = 0;
    while (fscanf(fptr1, "%s\n", usercheck[k]) != EOF)
    {
        k++;
    }

    int j;
    int track = 0;
    // !SEEING IF PASSWORD AND USERNAME MATCH
    for (j = 0; j != i + 1; j++)
    {
        /*puts(pass);
        printf("\t");
        puts(userpass[j]);
        printf("\n");
        puts(name);
        printf("\t");
        puts(usercheck[j]);*/
        int x = strcmp(name, usercheck[j]);
        int val1 = strcmp(pass, userpass[j]);
        //printf("%d %d\n", x, val1);
        // !if THEY MATCH GOES TO QUESTION
        if (x == 0 && val1 == 0)
        {
            printf("\n\n\t\t**************************\n\t\tLogin successful\n\t\tGood luck!\n\t\t**************************");

            printf("\n\t\tAdmission Test\n\n\t\tRead each question carefully before answering");
            fclose(fptr);
            gets(stdin);
            question();
        }
    }

    fclose(fptr);
    printf("\n\n\t\tWrong password or wrong username\n\t\tTry again\n\n");
    printf("\t\tRetry(Y/N):");

    char y;
    scanf(" %c", &y);
    if (y == 'Y' || y == 'y')
    {
        printf("\n\n\n");
        StudentLogin();
    }
    else if (y == 'N' || y == 'n')
    {
        printf("\n\n\t\tReturn to mainmenu  or exit (M/E):");
        char z;
        scanf(" %c", &z);

        if (z == 'M' || z == 'm')
        {
            printf("\n\n\n");
            Mainmenu();
        }
        else if (z == 'E' || z == 'e')
        {
            printf("\n\n\n\t\t***Thank you!***");
        }
    }
}
void Register()
{
    FILE *fptr1, *fptr2, *fptr3;
    // ! FILE CREATION AND READING
    fptr1 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\Student Password.txt", "a+");
    fptr2 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\Student name.txt", "a+");
    fptr3 = fopen("C:\\Users\\ayon0\\OneDrive\\Desktop\\Cse115\\Student Username.txt", "a+");
    char name[50], username[50], pass[50];

    printf("\n\n\n******************************************************\n\t\tStudent Registration\n******************************************************\n");
    gets(stdin);
    printf("\n\t\tName:");
    gets(name);
    printf("\n\t\tUsername(Dont use space):");
    gets(username);
    printf("\n\t\tPassword(Dont use space):");
    gets(pass);
    char usercheck[50][50];
    int i = 0;
    // !READ USERNAME
    while (fscanf(fptr3, "%s\n", usercheck[i]) != EOF)
    {
        i++;
    }
    int j;
    // !CHECKING TO SEE IF USERNAME EXISTS OR NOT
    for (j = 0; j != i; j++)
    {

        int val = strcmp(username, usercheck[j]);

        /*puts(username);
        printf("\t");
        puts(usercheck[j]);

        printf("\t %d\n", val);*/

        if (val == 0)
        {
            printf("\n\n\t\t**************************\n\t\tRegistration Unsuccessful\n\t\tUsername Already Exists\n\t\t**************************");

            printf("\n\t\tPlease try again\n\t\t\"%s\" is already taken\n\n", username);

            printf("\t\tRetry(Y/N):");

            char y;
            scanf(" %c", &y);
            if (y == 'Y' || y == 'y')
            {
                printf("\n\n\n");
                Register();
            }
            else if (y == 'N' || y == 'n')
            {
                printf("\n\n\n\t\t***Thank you!***");
            }
            else
            {
                exit(1);
            }
        }
    }
    // !if USERNAMNE DOESNT EXIST PRIVIOUSY EVERTHING IS SAVED IN FILE
    fprintf(fptr1, "%s\n", pass);
    fprintf(fptr2, "%s\n", name);
    fprintf(fptr3, "%s\n", username);
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    printf("\n\n\n\t\tRegistration Successful");
    printf("\n\n\t\tContinue to login(Y/N):");
    // !ASKING USER TO CONTINUE TO LOGIN
    char x;
    scanf(" %c", &x);
    if (x == 'y' || x == 'Y')
    {
        StudentLogin();
    }
    else if (x == 'n' || x == 'N')
    {
        Mainmenu();
    }
    else
    {
        printf("\n\n\t\tWrong Input\n");
        printf("\t\tRetry(Y/N):");

        char y;
        scanf(" %c", &y);
        if (y == 'Y' || y == 'y')
        {
            printf("\n\n\n");
            Mainmenu();
        }
        else if (y == 'N' || y == 'n')
        {
            printf("\n\n\n\t\t***Thank you!***");
        }
        else
        {
            exit(1);
        }
    }
}
void Studentportal()
{
    printf("\n\n\n******************************************************\n\t\tWelcome to Student portal\n******************************************************");
    printf("\n\n\t\t1.Login\n\t\t2.Registration\n\n");
    printf("\t\tInput option:");
    char x = 0;
    scanf(" %c", &x);
    if (x == '1')
    {
        StudentLogin();
    }
    else if (x == '2')
    {
        Register();
    }
    else
    {
        printf("\n\n\t\tWrong Input\n");
        printf("\t\tRetry(Y/N):");

        char y;
        scanf(" %c", &y);
        if (y == 'Y' || y == 'y')
        {
            printf("\n\n\n");
            Studentportal();
        }
        else if (y == 'N' || y == 'n')
        {
            printf("\n\n\t\tReturn to mainmenu  or exit (M/E):");
            char z;
            scanf(" %c", &z);

            if (z == 'M' || z == 'm')
            {
                printf("\n\n\n");
                Mainmenu();
            }
            else if (z == 'E' || z == 'e')
            {
                printf("\n\n\n\t\t***Thank you!***");
            }
            else
            {
                printf("\n\n\t\tWrong Input\n");
                printf("\t\tReturned from Student portal\n\n");
                Mainmenu();
            }
        }
    }
}
void Mainmenu()
{ // !DISPLAY OF MAINMENU
    printf("***********************************************************\n\t\tWelcome To NSU Admission Test\n\***********************************************************\n\n\t\tAre you a Student or an Admin? ");
    printf("\n\t\t1.Student\n\t\t2.Admin\n\n");
    printf("\t\tInput Option:");
    char x = 0;
    scanf(" %c", &x);
    if (x == '1')
    {
        Studentportal();
    }
    else if (x == '2')
    {
        Admin();
    }
    else
    {
        printf("\n\n\t\tWrong Input\n");
        printf("\t\tRetry(Y/N):");

        char y;
        scanf(" %c", &y);
        if (y == 'Y' || y == 'y')
        {
            printf("\n\n\n");
            Mainmenu();
        }
        else if (y == 'N' || y == 'n')
        {
            printf("\n\n\n\t\t***Thank you!***");
        }
        else
        {
            exit(1);
        }
    }
}
void main()
{
    Mainmenu();
    //question();
}
