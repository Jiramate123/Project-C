#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
typedef struct {
    int number;
    int sum,total,save;
    char q[1],nb[10],qq[10],date[40],name[50];
    int b,d,b1,b2,b3,b4,b5,b6,d1,d2,d3,d4,d5,d6;
}mom;
mom info;
int count=0;
int *p,la1,la2,la3,la4,la5,la6,la7,la8,la9;
//reset file
int resetshop(){
    FILE *reset;
    reset = fopen("shop1.txt", "w");
    fputs("",reset);

    fclose(reset);
}
//baised
int billshop(){
    int i;
    char dt[40];
	FILE *a,*real,*herr,*hed;
	herr=fopen("stock2.txt","a+");
	herr=fopen("stock.txt","a");
    printf("----------------------------------------------------------------------------------------\n");
    printf("\t\t\tTT CAFE BILL\n ");
    printf("----------------------------------------------------------------------------------------\n");
    if((a = fopen("shop1.txt","r")) == NULL){
        printf("Cannot open flie4");
    }
    if((real = fopen("shop2.txt","a")) == NULL){
        printf("Cannot open flie4");
    }
    for(i=0;i<info.b4;i++){
        fscanf(a,"%s %d %d",info.name,&info.b,&info.b1);
        if(info.b==1){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*30;
            p= &la1; *p++;
        }
        else if(info.b==2){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*40;
            p= &la2; *p++;
        }
        else if(info.b==3){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*45;
            p= &la3; *p++;
        }
        else if(info.b==4){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*45;
            p= &la4; *p++;
        }
        else if(info.b==5){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*50;
            p= &la5; *p++;
        }
        else if(info.b==6){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*55;
            p= &la6; *p++;
        }
        else if(info.b==7){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*60;
            p= &la7; *p++;
        }
        else if(info.b==8){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*55;
            p= &la8; *p++;
        }
        else if(info.b==9){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*50;
            p= &la9; *p++;
        }

         if(info.b==1){
            printf(" \t%d\t\tLatte\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tLatte\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==2){
            printf(" \t%d\t\tGreen tea\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tGreen tea\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==3){
            printf(" \t%d\t\tAmericano\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tAmericano\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==4){
            printf(" \t%d\t\tMocha\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tMocha\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==5){
            printf(" \t%d\t\tMacchiato\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tMacchiato\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==6){
            printf(" \t%d\t\tCappuccino\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tCappuccino\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==7){
            printf(" \t%d\t\tCold Brew\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tCold Brew\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==8){
            printf(" \t%d\t\tRed & Black Coffee\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tRed & Black Coffee\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==9){
            printf(" \t%d\t\tWhite Iced Cube Latte\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tWhite Iced Cube Latte\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(herr,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(hed,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        info.b2=0;
        info.b3=0;
    }
    info.b4=0;



    printf("----------------------------------------------------------------------------------------\n");
    printf("\n\tTOTAL\t\t\t\t%d BAHT\n",info.b5);
    printf("----------------------------------------------------------------------------------------\n");
    fprintf(real,"----------------------------------------------------------------------------------------\n");
    fprintf(real,"\tTOTAL\t\t\t\t%d BAHT\n",info.b5);
    fprintf(real,"----------------------------------------------------------------------------------------\n");
    info.b5=0;
	fclose(a);fclose(real);fclose(herr);fclose(hed);

    resetshop();
    printf("Please Get a ticket to Barista");
    getch();
    system("cls");
    main();
}
//vip
int vipshop(){
    int i;
    char dt[40];
	FILE *a,*real,*yer,*jud;
	jud=fopen("stock2.txt","a+");
	yer=fopen("stock.txt","a+");
    printf("----------------------------------------------------------------------------------------\n");
    printf("\t\t\tTT CAFE BILL\n ");
    printf("----------------------------------------------------------------------------------------\n");
    if((a = fopen("shop1.txt","r")) == NULL){
        printf("Cannot open flie4");
    }
    if((real = fopen("shop2.txt","a")) == NULL){
        printf("Cannot open flie4");
    }
    for(i=0;i<info.b4;i++){
        fscanf(a,"%s %d %d",info.name,&info.b,&info.b1);
        if(info.b==1){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*30;
        }
        else if(info.b==2){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*40;
        }
        else if(info.b==3){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*45;
        }
        else if(info.b==4){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*45;
        }
        else if(info.b==5){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*50;
        }
        else if(info.b==6){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*55;
        }
        else if(info.b==7){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*60;
        }
        else if(info.b==8){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*55;
        }
        else if(info.b==9){
            info.b2=info.b2+info.b1;
            info.b3=info.b2*50;
        }

         if(info.b==1){
            printf(" \t%d\t\tLatte\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tLatte\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
			info.b5=info.b5+info.b3;
            
        }
        else if(info.b==2){
            printf(" \t%d\t\tGreen tea\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tGreen tea\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
			info.b5=info.b5+info.b3;
            
        }
        else if(info.b==3){
            printf(" \t%d\t\tAmericano\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tAmericano\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==4){
            printf(" \t%d\t\tMocha\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tMocha\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==5){
            printf(" \t%d\t\tMacchiato\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tMacchiato\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==6){
            printf(" \t%d\t\tCappuccino\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tCappuccino\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==7){
            printf(" \t%d\t\tCold Brew\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tCold Brew\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==8){
            printf(" \t%d\t\tRed & Black Coffee\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tRed & Black Coffee\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        else if(info.b==9){
            printf(" \t%d\t\tWhite Iced Cube Latte\t\t%d BAHT\n",info.b2,info.b3);
            fprintf(real," %s\t%d\t\tWhite Iced Cube Latte\t\t%d BAHT\n",info.name,info.b2,info.b3);
            fprintf(yer,"Order %d can be sold %d ea\n",info.b,info.b2);
            fprintf(jud,"%d %d\n",info.b,info.b2);
            info.b5=info.b5+info.b3;
        }
        info.b2=0;
        info.b3=0;
    }
    info.b4=0;


    printf("----------------------------------------------------------------------------------------\n");
    printf("\n\tTOTAL\t\t\t\t\t\t\t\t%d BAHT\n",info.b5);
    printf("----------------------------------------------------------------------------------------\n");
    printf("\nFor member card 40 percent discount you need to pay %d BATH\n",(info.b5-(info.b5*40)/100));
    printf("----------------------------------------------------------------------------------------\n");
    fprintf(real,"----------------------------------------------------------------------------------------\n");
    fprintf(real,"\tTOTAL\t\t\t\t\t\t\t%d BAHT\n",info.b5);
    fprintf(real,"----------------------------------------------------------------------------------------\n");
    info.b5=0;
	fclose(a);fclose(real);fclose(yer);fclose(jud);

    resetshop();
    printf(" Press any key will be go to menu... ");
    getch();
    system("cls");
    main();
}
//veraaaaaa
char *now(char *dt) {
    time_t current = time(NULL);
    struct tm *info = localtime(&current);
    strftime(dt, 40, "%d-%m-%Y", info);
    return dt;
}

//shop function
int shop(){

    char dt[40];
    int n;

    FILE *a;
    a = fopen("shop1.txt","a");



    printf("\n|Cafe TT Welcome!|\n");
    printf(" [1] Latte-30baht \n [2] Green Tea-40baht \n");
    printf(" [3] Americano-40baht \n [4] Mocha-45baht\n");
    printf(" [5] Macchiato-45baht \n [6] Cappuccino-50baht\n");
    printf(" [7] Cold Brew \n [8] Red & Black Coffee\n");
    printf(" [9] White Iced Cube Latte \n");

	count=0;

	do{
		fprintf(a,now(dt));
		fprintf(a," ");
	    printf(" ENTER ORDER MENU NUMBER : ");
	    scanf("%d",&info.number);

		if((info.number<=0)||(info.number>10)){
	    	while(count<2){
	    		printf(" ENTER ORDER MENU NUMBER : ");
	    		scanf("%d",&info.number);
	    		if((info.number>0)||(info.number<=10)){
	    			*p=2;
				}
				*p=*p+1;
			}
			if((info.number<=0)||(info.number>10)){
		    	resetshop();
		    	system("cls");
	        	main();
			}
		}

	    if(info.number==1){
	        fprintf(a,"1 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==2){
	        fprintf(a,"2 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==3){
	        fprintf(a,"3 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==4){
	        fprintf(a,"4 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==5){
	        fprintf(a,"5 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==6){
	        fprintf(a,"6 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==7){
	        fprintf(a,"7 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==8){
	        fprintf(a,"8 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==9){
	        fprintf(a,"9 ");
	        info.b4=info.b4+1;
	    }
	
	    count=0;
	    printf(" ENTER QUANTITY : ");
	    scanf("%d",&n);
	    if(n<=0){
	    	while(count<2){
	    		printf(" ENTER NUMBER : ");
	    		scanf("%d",&info.number);
	    		if((info.number>0)||(info.number<=6)){
	    			*p=2;
				}
				*p=*p+1;
			}
			if(n<=0){
				resetshop();
		    	system("cls");
	        	main();
			}
		}
	    fprintf(a,"%d\n",n);

	    printf(" Do you want anything else? (Y/N) : ");
	    scanf("%s",info.q);

    }while((strcmp(info.q,"Y")==0)||(strcmp(info.q,"y")==0));

	fclose(a);

    if((strcmp(info.q,"N")==0)||(strcmp(info.q,"n")==0)){
	    printf(" DO YOU WANT TO SAVE (Y/N) : ");
	    scanf("%s",info.q);
	    if(strcmp(info.q,"Y")==0){
	        system("cls");
	        billshop();
	    }
	    else if(strcmp(info.q,"y")==0){
	        system("cls");
	        billshop();
	    }
	    else if(strcmp(info.q,"N")==0){
	        resetshop();
	        system("cls");
	        main();
	    }
	    else if(strcmp(info.q,"n")==0){
	        resetshop();
	        system("cls");
	        main();
	    }
	    else {
	        count=0;
			while(count<2){
				printf(" DO YOU WANT TO SAVE (Y/N) : ");
			    scanf("%s",info.q);
			    if(strcmp(info.q,"Y")==0){
			        system("cls");
			        billshop();
			    }
			    else if(strcmp(info.q,"y")==0){
			        system("cls");
			        billshop();
			    }
			    else if(strcmp(info.q,"N")==0){
                    resetshop();
                    system("cls");
                    main();
                }
                else if(strcmp(info.q,"n")==0){
                    resetshop();
                    system("cls");
                    main();
                }
				*p=*p+1;
			}
			resetshop();
		    system("cls");
		    main();
	    }
	}
	else{
		count=0;
		while(count<2){
			printf(" DO YOU WANT TO SAVE (Y/N) : ");
		    scanf("%s",info.q);
		    if(strcmp(info.q,"Y")==0){
		        system("cls");
		        billshop();
		    }
		    else if(strcmp(info.q,"y")==0){
		        system("cls");
		        billshop();
		    }
		    else if(strcmp(info.q,"N")==0){
                    resetshop();
                    system("cls");
                    main();
            }
            else if(strcmp(info.q,"n")==0){
                resetshop();
                system("cls");
                main();
            }
			*p=*p+1;
		}
		resetshop();
	    system("cls");
	    main();
	}
}
//vip
int shopee(){

    char dt[40];
    int n;

    FILE *a;
    a = fopen("shop1.txt","a");

    printf("\n|Cafe TT Welcome!|\n");
    printf(" [1] Latte-30baht \n [2] Green Tea-40baht \n");
    printf(" [3] Americano-40baht \n [4] Mocha-45baht\n");
    printf(" [5] Macchiato-45baht \n [6] Cappuccino-50baht\n");
    printf(" [7] Cold Brew \n [8] Red & Black Coffee\n");
    printf(" [9] White Iced Cube Latte \n");

	count=0;

	do{
		fprintf(a,now(dt));
		fprintf(a," ");
	    printf(" ENTER ORDER MENU NUMBER : ");
	    scanf("%d",&info.number);

		if((info.number<=0)||(info.number>10)){
	    	while(count<2){
	    		printf(" ENTER ORDER MENU NUMBER : ");
	    		scanf("%d",&info.number);
	    		if((info.number>0)||(info.number<=10)){
	    			*p=2;
				}
				*p=*p+1;
			}
			if((info.number<=0)||(info.number>10)){
		    	resetshop();
		    	system("cls");
	        	main();
			}
		}

	    if(info.number==1){
	        fprintf(a,"1 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==2){
	        fprintf(a,"2 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==3){
	        fprintf(a,"3 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==4){
	        fprintf(a,"4 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==5){
	        fprintf(a,"5 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==6){
	        fprintf(a,"6 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==7){
	        fprintf(a,"7 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==8){
	        fprintf(a,"8 ");
	        info.b4=info.b4+1;
	    }
	    else if(info.number==9){
	        fprintf(a,"9 ");
	        info.b4=info.b4+1;
	    }
	
	    count=0;
	    printf(" ENTER QUANTITY : ");
	    scanf("%d",&n);
	    if(n<=0){
	    	while(count<2){
	    		printf(" ENTER NUMBER : ");
	    		scanf("%d",&info.number);
	    		if((info.number>0)||(info.number<=6)){
	    			*p=2;
				}
				*p=*p+1;
			}
			if(n<=0){
				resetshop();
		    	system("cls");
	        	main();
			}
		}
	    fprintf(a,"%d\n",n);

	    printf(" Do you want anything else? (Y/N) : ");
	    scanf("%s",info.q);

    }while((strcmp(info.q,"Y")==0)||(strcmp(info.q,"y")==0));

	fclose(a);

    if((strcmp(info.q,"N")==0)||(strcmp(info.q,"n")==0)){
	    printf(" DO YOU WANT TO SAVE (Y/N) : ");
	    scanf("%s",info.q);
	    if(strcmp(info.q,"Y")==0){
	        system("cls");
	        vipshop();
	    }
	    else if(strcmp(info.q,"y")==0){
	        system("cls");
	        vipshop();
	    }
	    else if(strcmp(info.q,"N")==0){
	        resetshop();
	        system("cls");
	        main();
	    }
	    else if(strcmp(info.q,"n")==0){
	        resetshop();
	        system("cls");
	        main();
	    }
	    else {
	        count=0;
			while(count<2){
				printf(" DO YOU WANT TO SAVE (Y/N) : ");
			    scanf("%s",info.q);
			    if(strcmp(info.q,"Y")==0){
			        system("cls");
			        vipshop();
			    }
			    else if(strcmp(info.q,"y")==0){
			        system("cls");
			        vipshop();
			    }
			    else if(strcmp(info.q,"N")==0){
                    resetshop();
                    system("cls");
                    main();
                }
                else if(strcmp(info.q,"n")==0){
                    resetshop();
                    system("cls");
                    main();
                }
				*p=*p+1;
			}
			resetshop();
		    system("cls");
		    main();
	    }
	}
	else{
		count=0;
		while(count<2){
			printf(" DO YOU WANT TO SAVE (Y/N) : ");
		    scanf("%s",info.q);
		    if(strcmp(info.q,"Y")==0){
		        system("cls");
		        vipshop();
		    
		    }
		    else if(strcmp(info.q,"y")==0){
		        system("cls");
		        vipshop();
		        
		    }
		    else if(strcmp(info.q,"N")==0){
                    resetshop();
                    system("cls");
                    main();
            }
            else if(strcmp(info.q,"n")==0){
                resetshop();
                system("cls");
                main();
            }
			*p=*p+1;
		}
		resetshop();
	    system("cls");
	    main();
	}
}
//Login/regis
FILE * gfd;
char password[50];
void login(){
	gfd=fopen("login.txt","r+");
	char fpassword[50];
	int c,z=0;
	while(c==1);{
		printf("Enter Card ID(Number): ");
		scanf("%s",password);
		while(!feof(gfd)){
			fscanf(gfd, "%s",fpassword);
		if(strcmp(password,fpassword)==0){
			system("cls");
			printf("Login success\n");
			system("cls");	
			c=0;
			z=1;
			shopee();
			break;
										}
						}			
		if(z!=1){
			system("cls");
			printf("Your ID CARD is wrong");
			return;
			
				}
		
			getch();
			system("cls");
				}

	fclose(gfd);
}
regis(){
		gfd= fopen("login.txt","a+");
		printf("Make Card ID(Number): ");
		scanf("%s",password);
		fprintf(gfd,"%s\n",password);
		fclose(gfd);
		}
int main()
{
	//variable
	char choose,id,add[1000],name[1000],drp[1000],menu,sur[500],username[30];
	int c,ph,house,ps,password;
	printf(" ------------------------\n");
	printf("|  Press a for Order now!|\n");
	printf(" ------------------------\n");
	printf("| Press b for Admin panel|\n");
	printf(" ------------------------\n");
	printf("|  Press c for exit     |\n");
	printf(" ------------------------\n");
	choose=getch();
	printf("%c \n");
	system("cls");
	if(choose=='a'){
	//member card
	printf("Do you have member card?(y/n):");
	choose=getch();
	printf("%c \n");
	//choose y 
	if(choose=='y'){
	login();
	getch();
		}else{
			printf("Do you want to register?(y/n):");
			choose=getch();
			printf("%c \n");
			//choose y
			if(choose=='y'){
				FILE *f = fopen("tx.txt","a");
				printf("Enter your Name:\n");
				scanf("%s",&name);
				system("cls");
				printf("Enter your Surname:\n");
				scanf("%s",&sur);
				system("cls");
				printf("Enter your Phone number:\n");
				scanf("%d",&ph);
				system("cls");
				printf("Enter your ID CARD:\n");
				scanf("%d",&house);
				system("cls");
				printf("Enter your Province:\n");
				scanf("%s",&drp);
				system("cls");
				printf("Enter your Postal Code:\n");
				scanf("%d",&ps);
				system("cls");
				fprintf(f,"\nInformation:\n%s\t%s\n+66%d\n%d\n%s\n%d",name,sur,ph,house,drp,ps);
				fclose(f);
				system("cls");
				regis();
				printf("Want to order now?(y/n):\n");
				choose=getch();
				printf("%c \n");
				if(choose=='y'){
					printf("You Have Member card?(y/n):");
					choose=getch();
					printf("%c \n");
					if(choose=='y'){
						printf("Please Login");
						choose=getch();
						system("cls");
						login();
						system("cls");
						
						
						
					}
					else{
						printf("Thanks for use a service!");
					}
				
					
				}
				//register but not order
				else{
					printf("Goodluck sir thanks for use service");
				}
	}else{
		if(choose=='n'){
			shop();
		}
	}
		
					
				}
		}
			else{
				if(choose=='b'){
					printf("Please Enter Admin Username:");
					getch();
					scanf("%s",username);
					if(strcmp(username,"Compro")==0)
					{
						printf("\nWelcome Admin Letsee a stock");
						FILE *lol;
						lol=fopen("stock2.txt","r");
						while(!feof(lol)){
							
							fscanf(lol,"%d %d\n",&la1,&la2);
							if(la1==1){
								printf("Need to buy Order number 1: %d ea\n",la2);
       				 }
        				else if(la1==2){
           				printf("Need to buy Order number 2: %d ea\n",la2);
        			}
        				else if(la1==3){
          			    printf("Need to buy Order number 3: %d ea\n",la2);
       				 }
        				else if(la1==4){
            			printf("Need to buy Order number 4: %d ea\n",la2);
        			}
       					else if(la1==5){
            			printf("Need to buy Order number 5: %d ea\n",la2);
        			}
        				else if(la1==6){
            			printf("Need to buy Order number 6: %d ea\n",la2);
       				 }
        				else if(la1==7){
          				printf("Need to buy Order number 7: %d ea\n",la2);
      			     }	
        				else if(la1==8){
            			printf("Need to buy Order number 8: %d ea\n",la2);
      				}
       					else if(la1==9){
           				printf("Need to buy Order number 9: %d ea\n",la2);
       				}

					}
						
						
						
						}	
					else
					{
						printf("\nInvalid Username getout please!!!\n");
					}
				}
			}

}
		
			
