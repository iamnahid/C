#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,c,d,e,f,scan,nw,fw,pol,mobOption,mobPrice;
    char mobName;
    pol = 50;
    int total = 0;


    printf("Welcome to Moto Point.\n");
    printf("----------------------\n");
            MainMenu:
    printf("Our Services:  \n");
    printf("1.  Wash\n");
    printf("2.  Mobil\n");
    printf("Please input number for your desired option:  ");
    scanf("%d",&scan);

    switch(scan)
    {
        case 1:
            printf("1. Normal Wash - BDT100.00\n");
            printf("2. Foam Wash - BDT150.00\n");
            printf("3. Others\n\n");
            printf("Input your option:   ");
            scanf("%d", &a);
            switch(a)
            {
                case 1:
                    nw= 100;
                    total = total + nw;
                    printf("1. Print Bill? \n");
                    printf("0. Go Back \n");
                    scanf("%d",&b);
                    if (b == 1)
                        {
                            system("COLOR 04");
                            printf("\n\nTotal Bill:  %d\n",total);
                        }
                    else{
                            goto MainMenu;
                            break;
                    }
                    break;
                case 2:
                    fw= 150;
                    total = total + fw;
                    printf("1. Print Bill? \n");
                    printf("0. Go to Main Menu \n");
                    scanf("%d",&c);
                    if (c == 1)
                        {
                            system("COLOR 0A");
                            printf("\n\nTotal Bill:  %d\n",total);
                            break;
                        }
                    else{
                            goto MainMenu;
                            break;
                    }
                    break;
                case 3:
                    printf("1. Polish - BDT50.00\n\n");
                    printf("Input your option:  ");
                    scanf("%d",&pol);
                    total = total + 50;
                    printf("\n1. Print Bill? \n");
                    printf("0. Go to Main Menu \n");
                    scanf("%d",&f);
                    if (f == 1)
                        {
                            system("COLOR 04");
                            printf("\n\nTotal Bill:  %d\n",total);
                            break;
                        }
                    else if (f == 0){
                            goto MainMenu;
                            break;
                    }
                    else{
                        printf("Invalid!\n");
                    }
                    break;
                default:
                    printf("Invalid Input\n");
                    break;
            break;
            }
        break;
        case 2:
            printf("Mobil's Prices\n");
            printf("--------------\n");
            printf("X- BDT800.00 \n");
            printf("Y- BDT950.00 \n");
            printf("Z- BDT600.00\n\n\n");
            MobilOptions:
            printf("-> 1) Buy Mobil\n");
            printf("-> 2) Change Mobil\n");
            printf("-> 0) Go to Main Menu\n\n");
            printf("Choose your option:   ");
            scanf("%d",&mobOption);
            printf("\n\n");
            if (mobOption == 1){
                printf("Input your Mobil Name: ");
                scanf("%s",&mobName);
                switch(mobName){
                    case 'X':
                        total = total + 800;
                        printf("Mobil Added!\n");
                        printf("1. Print Bill? \n");
                        printf("0. Go Back \n");
                        scanf("%d",&b);
                        if (b == 1)
                            {
                                printf("Total Bill:  %d\n",total);
                            }
                        else{
                                goto MainMenu;
                                break;
                        }
                        break;
                    case 'Y':
                        total = total + 950;
                        printf("Mobil Added!\n");
                        printf("1. Print Bill? \n");
                        printf("0. Go Back \n");
                        scanf("%d",&b);
                        if (b == 1)
                            {
                                printf("Total Bill:  %d\n",total);
                            }
                        else{
                                goto MainMenu;
                                break;
                        }
                        break;
                    case 'Z':
                        total = total + 600;
                        printf("Mobil Added!\n");
                        printf("1. Print Bill? \n");
                        printf("0. Go Back \n");
                        scanf("%d",&b);
                        if (b == 1)
                            {
                                printf("Total Bill:  %d\n",total);
                            }
                        else{
                                goto MainMenu;
                                break;
                        }
                        break;
                    case '0':
                        goto MobilOptions;
                        break;
                    default:
                        printf("Invalid Mobil Name!\n");
                        break;
                }
            }
            else if (mobOption == 2)
            {
                printf("**Note:  Changing will cost BDT50.00 extra along with Mobil Price\n\n");
                printf("Input your Mobil Name: ");
                scanf("%s",&mobName);
                switch(mobName){
                    case 'X':
                        total = total + 800 + 50;
                        printf("Mobil Added!\n");
                        printf("1. Print Bill? \n");
                        printf("0. Go Back \n");
                        scanf("%d",&b);
                        if (b == 1)
                            {
                                system("COLOR 0B");
                                printf("\n\nTotal Bill:  %d\n",total);
                                break;
                            }
                        else{
                                goto MainMenu;
                                break;
                        }
                        break;
                    case 'Y':
                        total = total + 950 + 50;
                        printf("Mobil Added!\n");
                        printf("1. Print Bill? \n");
                        printf("0. Go Back \n");
                        scanf("%d",&b);
                        if (b == 1)
                            {
                                system("COLOR 0C");
                                printf("\n\nTotal Bill:  %d\n",total);
                                break;
                            }
                        else{
                                goto MainMenu;
                                break;
                        }
                        break;
                    case 'Z':
                        total = total + 600 + 50;
                        printf("Mobil Added!\n");
                        printf("1. Print Bill? \n");
                        printf("0. Go Back \n");
                        scanf("%d",&b);
                        if (b == 1)
                            {
                                system("COLOR 0D");
                                printf("\n\nTotal Bill:  %d\n",total);
                                break;
                            }
                        else{
                                goto MainMenu;
                                break;
                        }
                        break;
                    case '0':
                        goto MobilOptions;
                        break;
                    default:
                        printf("Invalid Mobil Name!");
                        break;
                }
            }
            else{
                goto MainMenu;
                break;
            }
            break;
        default:
            printf("Invalid Number!");
            break;

    }

    return 0;
}
