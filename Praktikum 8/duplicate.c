// Praktikum 8
// Nama			: Michael Sihotang
// NIM 			: 18221054
// Problem 01

#include "stdio.h"

#include "set.h"
/*
    Masukkan semua elemen array arr ke suatu Set, kemudian kembalikan Set tersebut
        Contoh:
            arrToSet
                <- arr = [1, 1, 3]
                <- arrSize = 3
            -> [1, 3]
*/
Set arrToSet(int* arr, int arrSize) {
	int idx = 0;
	Set s3 ;
	CreateEmpty (&s3) ;
	while (idx < arrSize) {
		Insert (&s3, arr[idx]) ;
		idx++;
	}
	return s3 ;
}

/*
    Dengan memanfaatkan fungsi arrToSet, hapuslah elemen duplikat pada array arr
    kemudian kembalikan isinya secara menurun

    Penjelasan Parameter:
    Parameter 1: arr, merupakan array masukan yang perlu dihapus elemen duplikatnya
    Parameter 2: arrSize, merupakan panjang arr
    Parameter 3: arrRes, merupakan array keluaran, hasil pengapusan elemen duplikat
        dan elemen-elemennya terurut menurun
    Parameter 4: arrResSize, merupakan panjang arrRes

    Contoh: 
        removeDuplicate
            <- arr = [1, 1, 2, 3]
            <- arrSize = 4
            -> arrRes = [3, 2, 1]
            -> arrResSize = 3
        removeDuplicate
            <- arr = [3, 1, 1]
            <- arrSize = 3
            -> arrRes = [3, 1]
            -> arrResSize = 2
*/
void removeDuplicateDesc(int* arr, int arrSize, int* arrRes, int* arrResSize) {
	Set s ;
	s = arrToSet (arr, arrSize) ;
	for (int i = 0; i < s.Count; i++) {
		for (int j = i+1; j < s.Count; j++) {
			if (s.Elements[i] < s.Elements[j]) {
				infotype temp ;
				temp = s.Elements[i] ;
				s.Elements[i] = s.Elements[j] ;
				s.Elements[j] = temp;
			}
		}
	}
	*arrResSize = s.Count ;
	for (int k = 0; k < s.Count; k++) {
		arrRes[k] = s.Elements[k] ;
	}
}