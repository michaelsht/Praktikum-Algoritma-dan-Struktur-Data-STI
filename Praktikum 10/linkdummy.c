# include <stdio.h>
# include "linkdummy.h"

/* PROTOTYPE */
/****************** TEST LIST KOSONG ******************/
boolean IsEmpty(List L) {
	return (Info(First(L)) == 0 && Info(Last(L)) == 0) ;
}
/* Mengirim true jika list kosong: First(L) = dummy@
dan Last(L) = dummy@ */

/****************** PEMBUATAN LIST KOSONG ******************/
void MakeEmpty(List *L) {
	address pDummy ;
	pDummy = Alokasi (0) ;
	if (pDummy != Nil) {
		First (*L) = pDummy ;
		Last (*L) = pDummy ;
	}
	else {
		First (*L) = Nil ;
		Last (*L) = Nil ;
	}
}
/* I.S. sembarang */
/* F.S. Terbentuk list L kosong, dengan satu elemen dummy */
/* Jika gagal maka First = Last = Nil dan list gagal terbentuk */

/****************** MANAJEMEN MEMORI ******************/
address Alokasi (ElType X) {
	address P = (address)malloc(sizeof(Node)) ;
	if (P != Nil) {
		Info(P) = X ;
		Next(P) = Nil ;
	}
	return P ;
}
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil. */
/* Misalnya: menghasilkan P, maka Info(P)=X, Next(P)=Nil, Prev(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil. */
void Dealokasi (address P) {
	free (P) ;
}
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */

/****************** SEARCHING ******************/
address Search(List L, ElType X) {
	address P = First (L) ;
	Info(Last(L)) = X ;
	while (Info(P) != X) {
		P = Next (P) ;
	}
	if (P == Last(L)) {
		return Nil ;
	}
	else {
		return P ;
	}

}
/* Mencari apakah ada node list dengan info(P) = X */
/* Jika ada, mengirimkan address node tersebut. */
/* Jika tidak ada, mengirimkan Nil */

/****************** PRIMITIF BERDASARKAN NILAI ******************/
/*** PENAMBAHAN ELEMEN ***/
void InsertFirst(List *L, ElType X) {
	address P ;
	P = Alokasi (X) ;
	if (P != Nil) {
		Next (P) = First (*L) ;
		First (*L) = P ;
	}
}
/* I.S. List L terdefinisi */
/* F.S. Menambahkan elemen X sebagai elemen pertama List L */
void InsertLast(List *L, ElType X) {
	address P, last ;
	if (IsEmpty(*L)) {
		InsertFirst (L, X) ;
	}
	else {
		P = Alokasi (X) ;
		if (P != Nil) {
			last = First (*L) ;
			while (Next (last) != Last(*L)) {
				last = Next (last) ;
			}
			Next (last) = P ;
			Next (P) = Last (*L) ;
		}
	}
 }
/* I.S. List L terdefinisi */
/* F.S. X ditambahkan sebagai elemen terakhir yang baru, */
/* yaitu menjadi elemen sebelum elemen dummy */
/* Alamat elemen dummy tidak berubah */

/*** PENGHAPUSAN ELEMEN ***/
void DeleteFirst(List *L, ElType *X) {
	address P = First (*L) ;
	*X = Info (First (*L)) ;
	First (*L) = Next (P) ;
	Dealokasi (P) ;
}
/* I.S. List tidak kosong */
/* F.S. X adalah elemen pertama list sebelum penghapusan */
/* Elemen list berkurang satu (mungkin menjadi kosong) */
/* First element yg baru adalah suksesor elemen pertama yang lama */
void DeleteLast(List *L, ElType *X) {
	address last, preclast ;
	last = First (*L) ;
	preclast = Nil ;
	while (Next(last) != Last(*L)) {
		preclast = last ;
		last = Next (last) ;
	}
	*X = Info (last) ;
	if (preclast == Nil) {
		First(*L) = Last (*L) ;
	}
	else {
		Next(preclast) = Last (*L) ;
	}
	Dealokasi (last) ;
}
/* I.S. List tidak kosong */
/* F.S. X adalah terakhir sebelum dummy pada list sebelum penghapusan */
/* Elemen list berkurang satu (mungkin menjadi kosong) */