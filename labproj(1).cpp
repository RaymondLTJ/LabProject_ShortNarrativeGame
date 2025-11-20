#include <stdio.h>
#include <math.h>
#include <string.h>

void identifyPlayer (char player[100]);
void pintuUtama1(int door);
int pintu1_1();

void identifyPlayer (char player[100]){
	if (strlen(player) > 20 ){
		printf ("Karakter lebih dari 20!\n");
	}
	else{
		printf ("Halo, %s!\n", player);
		}
	}

void pintuUtama1(int door){
	while(1){
		printf ("Pilih pintu pertanyaan:\n");
		printf ("1. Pintu 1.1\n");
		printf ("2. Pintu 1.2\n");
		printf ("3. Pintu 1.3\n\n");
		
		int subdoor;
		scanf ("%d", &subdoor);
		
		switch (subdoor){
			case 1: 
				//nanti diganti
				printf ("\nRoom 1.1 blablablabla\n\n");
				pintu1_1();
				break;
			case 2:
				//nanti diganti
				printf ("\nRoom 2 blbalbalbal\n\n");
			//	pintu1_2(subdoor);
				break;
			case 3:
				//nanti diganti
				scanf ("%d", &subdoor);
			//	pintu1_3(subdoor);
				break;
			default:
				printf ("\nPintu tidak ada!\n\n");	
				break;
		}
	}
}

int pintu1_1(){
	//contoh pertanyaan
	printf ("1+1 = ?\n\n");
	int jawaban;
	printf ("Jawabanmu: ");
	scanf ("%d", &jawaban);
	if(jawaban == 2){
		printf ("\nBENAR\n\n");
		return 1;
	}
	else{
		printf ("\nSALAH\n\n");
		return 0;
	}
	
	
}

int main(){
	while (1){
	//header
	printf ("====================\n");
	printf ("    Nama Game\n");
	printf ("====================\n\n");
	
	printf ("1. Enter\n");
	printf ("2. Exit\n\n");
	int starter;
	scanf ("%d", &starter);
		
	switch (starter){
		case 1:
			printf ("\nSelamat datang di |nama proyek|\n");
			printf ("Pertama, kenalkan dirimu (maks 20 kata)\n\n");
			
			//identify nama karakter
			char nama[100]; scanf (" %[^\n]", nama);	
			identifyPlayer(nama);
			
			//narasi1, pilih ruangan 1-3
			printf ("\ncontohcontoh\n\n");
			printf ("1. Pintu 1 \n");
			printf ("2. Pintu 2 \n");
			printf ("3. Pintu 3 \n\n");
			int pintumasuk;
			scanf ("%d", &pintumasuk);
			printf("\n");
			pintuUtama1(pintumasuk);
			
			printf ("\ncontohtnoh\n");
			int pintu2;
			scanf ("%d", &pintu2);
			
			break;
		case 2:
			printf ("Selamat tinggal\n");
			return 0;
			break;
		default:
			printf ("Salah input hehe\n\n");
		}
	}
	return 0;
}
