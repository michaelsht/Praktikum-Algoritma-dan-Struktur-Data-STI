#include <stdio.h>
#include "removeDuplicate.h"

/*
    Diberikan sebuah list linier yang sudah terurut membesar,
    kembalikan list baru yang elementnya unik
    Contoh input/output:
    input:  [1,1,2,2,3,4,5,6,6,7]
    output: [1,2,3,4,5,6,7]

    input:  [1,1,1,1,1,1]
    output: [1]
*/
List removeDuplicate(List l){
	List l2;
	CreateEmpty(&l2);
	address p=First(l);
	while (p!=Nil){
		if (Search(l2,Info(p))==Nil){
			InsVLast(&l2,Info(p));
		}
		p=Next(p);
	}
	return l2;
}