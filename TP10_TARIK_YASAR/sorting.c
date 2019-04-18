/*
 * sorting.c
 *
 *  Created on: Apr 18, 2019
 *      Author: Merve Unlu
 */


#include"sorting.h"
#include <stdio.h>

/*
 * Parametre olarak verilen dizi elemanlarini
 * insertion sort kullanarak siralar.
 * Sirali dizi olarak donus yapar.
 */
void insertion_sort(int* arritem,int size){
	//TODO
    int temp = 0;
	int hole = 0;
	for (int i = 1; i < size; i++)
	{
		temp = arritem[i];
		hole = i;

		while(hole>0 && arritem[hole-1]>temp){
			arritem[hole] = arritem[hole-1];
			hole = hole-1;
		}
		arritem[hole] = temp;
	}
}


/*
 * Parametre olarak verilen diziyi
 * selection_sort kullanarak siralar.
 * Sirali dizi olarak donus yapar.
 */
void selection_sort(int* arritem, int size){
   //TODO
    int i, j, min, temp;

    for(i = 0; i < size; i++){
        min = i;

        for(j = i; j < size; j++){

            if(arritem[j] < arritem[min]) {
                min = j;
            }
        }

        temp = arritem[min];
        arritem[min] = arritem[i];
        arritem[i] = temp;
    }
}
/*
 * Parametre olarak verilen diziyi
 * kabarcik siralamasi (bubble sort)
 * kullarak siralar.
 * Sirali dizi olarak donus yapar.
 */
void bubble_sort(int* arritem,int size){
    //TODO
    int i, swapped = 1;
    int temp = 0;
    while(swapped){
        swapped = 0;
        for(i = 0; i < size-1; i++){
            if(arritem[i] > arritem[i+1]){
                temp = arritem[i];
                arritem[i] = arritem[i+1];
                arritem[i+1] = temp;
                swapped = 1;
            }
        }
    }
}
