#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int day , mois , annee , Demain,Dmois,Dannee , Hier, Hmois,Hannee;
	time_t now;
    time(&now);
    
    //printf("Aujourd'hui est : %s", ctime(&now));
    struct tm *local = localtime(&now);
    day = local->tm_mday;
    mois = local->tm_mon + 1;
    annee = local->tm_year + 1900;
    
printf("La date est : %02d/%02d/%02d\n", day , mois , annee);

	int nvJour,nvMois,nvAnnee;
	int NBjan,NBdec;
	
	printf("Entrez  le jour :\n");
	scanf("%d", &nvJour);
	printf("Entrez 	le mois :\n");
	scanf("%d", &nvMois);
	printf("Entrez 	l'annee' :\n");
	scanf("%d",&nvAnnee);
	if(nvAnnee > 0 ){
		if(nvMois <13 && nvMois>0)
		{
			switch(nvMois){
			case 1:
				if(nvJour > 31 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else{
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour - 1 ;
						NBdec = 366 - nvJour ;
					}else{
						NBjan = nvJour - 1;
						NBdec = 365 - nvJour ;
					}
					
					if(nvJour==31){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = 1;
						Dannee = nvAnnee;
					}
					if(nvJour == 1){
						Hier = 31;
						Hmois = 12;
						Hannee = nvAnnee - 1;
					}else{
						Hier = nvJour - 1;
						Hannee = nvAnnee;
						Hmois = nvMois;
					}
					
				}
				break;
				case 2:
				if(nvAnnee % 4 == 0){
					if(nvJour > 29 || nvJour <1)
					{
						printf("Jour invalide!");
						exit(0);
					}else{
						
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 30;
						NBdec = 335 - nvJour ;
					}else{
						NBjan = nvJour + 30;
						NBdec = 334 - nvJour ;
					}
						
						if(nvJour==29){
							Demain = 1;
							Dmois = nvMois + 1;
							Dannee = nvAnnee;
						}else{
							Demain = nvJour + 1;
							Dmois = nvMois;
							Dannee = nvAnnee;
						}
						if(nvJour == 1){
							Hier = 31;
							Hmois = nvMois - 1;
							Hannee = nvAnnee;
						}else{
							Hier = nvJour - 1;
							Hmois = nvMois;
							Hannee = nvAnnee;
						}
					}
				 	}else{	
					if(nvJour > 28 || nvJour <1)
					{
						printf("Jour invalide!");
						exit(0);
					}else{
	
						if(nvJour==28){
							Demain = 1;
							Dmois = nvMois + 1;
							Dannee = nvAnnee;
						}else{
							Demain = nvJour + 1;
							Dmois = nvMois;
							Dannee = nvAnnee;
						}
					}
					if(nvJour == 1){
						Hier = 31;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
					}else{
						Hier = nvJour - 1;
						Hmois = nvMois;
						Hannee = nvAnnee;
					}
				}
				break;
				
			case 3 :
				if(nvJour > 31 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else{
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 59;
						NBdec = 306 - nvJour ;
					}else{
						NBjan = nvJour + 58;
						NBdec = 306 - nvJour ;
					}
					
					if(nvJour==31){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
					
					if(nvJour == 1){
						if(nvAnnee % 4 == 0){
						Hier = 29;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
						
						}else{
						Hier = 28;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
						
						NBjan = nvJour + 58;
						
						}
					}else{
						Hier = nvJour - 1;
						Hmois = nvMois;
						Hannee = nvAnnee;
					}
				}
				break;
			case 4:
				if(nvJour > 30 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else {
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 90;
						NBdec = 275 - nvJour ;
					}else{
						NBjan = nvJour + 89;
						NBdec = 275 - nvJour ;
					}
					
					if(nvJour==30){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
				if(nvJour == 1){
					Hier = 31;
					Hmois = nvMois - 1;
					Hannee = nvAnnee;
				}else{
					Hier = nvJour - 1;
					Hmois = nvMois;
					Hannee = nvAnnee;	
					}
				}
				break;
			
			
				
				
			 	case 5:
			 		if(nvJour > 31 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else{
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 120;
						NBdec = 245 - nvJour ;
					}else{
						NBjan = nvJour + 119;
						NBdec = 245 - nvJour ;
					}
					
					if(nvJour==31){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
					if(nvJour == 1){
						Hier = 30;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
					}else{
						Hier = nvJour - 1;
						Hmois = nvMois;
						Hannee = nvAnnee;
					}
				}
				break;
				
				case 6:
					if(nvJour > 30 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else {
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 151;
						NBdec = 214 - nvJour ;
					}else{
						NBjan = nvJour + 150;
						NBdec = 214 - nvJour ;
					}
					
					if(nvJour==30){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
				if(nvJour == 1){
					Hier = 31;
					Hmois = nvMois - 1;
					Hannee = nvAnnee;
				}else{
					Hier = nvJour - 1;
					Hmois = nvMois;
					Hannee = nvAnnee;	
					}
				}
				break;
				
				case 7:
			 		if(nvJour > 31 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else{
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 181;
						NBdec = 184 - nvJour ;
					}else{
						NBjan = nvJour + 180;
						NBdec = 184 - nvJour ;
					}
					
					if(nvJour==31){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
					if(nvJour == 1){
						Hier = 30;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
					}else{
						Hier = nvJour - 1;
						Hmois = nvMois;
						Hannee = nvAnnee;
					}
				}
				break;
				
				case 8:
				if(nvJour > 31 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else{
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 212;
						NBdec = 153 - nvJour ;
					}else{
						NBjan = nvJour + 211;
						NBdec = 153 - nvJour ;
					}
					
					if(nvJour==31){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
					if(nvJour == 1){
						Hier = 31;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
					}else{
						Hier = nvJour - 1;
						Hmois = nvMois ;
						Hannee = nvAnnee ;
					}
					
				}
				break;
				
				case 9:
					if(nvJour > 30 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else {
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 243;
						NBdec = 122 - nvJour ;
					}else{
						NBjan = nvJour + 242;
						NBdec = 122 - nvJour ;
					}
					
					if(nvJour==30){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
				if(nvJour == 1){
					Hier = 31;
					Hmois = nvMois - 1;
					Hannee = nvAnnee;
				}else{
					Hier = nvJour - 1;
					Hmois = nvMois;
					Hannee = nvAnnee;	
					}
				}
				break;
				
				case 10:
			 		if(nvJour > 31 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else{
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 273;
						NBdec = 92 - nvJour ;
					}else{
						NBjan = nvJour + 272;
						NBdec = 92 - nvJour ;
					}
					
					if(nvJour==31){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
					if(nvJour == 1){
						Hier = 30;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
					}else{
						Hier = nvJour - 1;
						Hmois = nvMois;
						Hannee = nvAnnee;
					}
				}
				break;
				
				case 11:
					if(nvJour > 30 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else {
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 304;
						NBdec = 61 - nvJour ;
					}else{
						NBjan = nvJour + 303;
						NBdec = 61 - nvJour ;
					}
					
					if(nvJour==30){
						Demain = 1;
						Dmois = nvMois + 1;
						Dannee = nvAnnee;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
				if(nvJour == 1){
					Hier = 31;
					Hmois = nvMois - 1;
					Hannee = nvAnnee;
				}else{
					Hier = nvJour - 1;
					Hmois = nvMois;
					Hannee = nvAnnee;	
					}
				}
				break;
				
				case 12:
				if(nvJour > 31 || nvJour <1)
				{
					printf("Jour invalide!");
					exit(0);
				}else{
					
					if(nvAnnee % 4 == 0){
						NBjan = nvJour + 334;
						NBdec = 30 - nvJour ;
					}else{
						NBjan = nvJour + 333;
						NBdec = 30 - nvJour ;
					}
					
					if(nvJour==31){
						Demain = 1;
						Dmois = 1;
						Dannee = nvAnnee + 1;
					}else{
						Demain = nvJour + 1;
						Dmois = nvMois;
						Dannee = nvAnnee;
					}
					if(nvJour == 1){
						Hier = 30;
						Hmois = nvMois - 1;
						Hannee = nvAnnee;
					}else{
						Hier = nvJour - 1;
						Hmois = nvMois;
						Hannee = nvAnnee;
					}
					
				}
				break;
			 		
		}}else{
			printf("Mois invalide!");
			exit(0);
		}
	}else{
		printf("Annee est invalide!");
		exit(0);
	}
	
	printf("\n");
    printf("Le jour que vous avez saisie est : %02d/%02d/%02d\n", nvJour , nvMois , nvAnnee);
    printf("\n");
    printf("Demain est le %02d/%02d/%02d\n", Demain , Dmois , Dannee);
    printf("\n");
	printf("Hier est le %02d/%02d/%02d\n", Hier , Hmois , Hannee);
	printf("\n");
	printf("Nombre de jours depuis le 1 jan est %d jours \n", NBjan);
	printf("\n");
	printf("Nombre de jours rest a le 31 dec est %d jours \n", NBdec);

	
return 0;	
}
