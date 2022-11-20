#include <stdio.h>
#include "arrayMhs.h"

void MakeEmpty (TabMhs *T) 
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// (*T).Neff = 0;
{
    (*T).Neff = 0;
}

int NbElmt (TabMhs T) 
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// return T.Neff;
{
    return T.Neff;
}

int MaxNbEl (TabMhs T) 
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
/* *** Selektor INDEKS *** */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// return IdxMax - IdxMin + 1;
{
    return IdxMax - IdxMin + 1;
}

IdxType GetFirstIdx (TabMhs T) 
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen pertama */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// return IdxMin;
{
    return IdxMin;
}

IdxType GetLastIdx (TabMhs T) 
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen terakhir */
/* *** Menghasilkan sebuah elemen *** */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// return T.Neff;
{
    return T.Neff;
}

ElType GetElmt (TabMhs T, IdxType i) 
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// return T.TI[i];
{
    return T.TI[i];
}

void SetTab (TabMhs Tin, TabMhs *Tout) 
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
/* Assignment THsl -> Tin */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// (*Tout).Neff = Tin.Neff;
// for(int i = IdxMin; i <= Tin.Neff; i++){
//     (*Tout).TI[i] = Tin.TI[i];
// }
{
    (*Tout).Neff = Tin.Neff;
    for(int i = IdxMin; i <= Tin.Neff; i++) {
        (*Tout).TI[i] = Tin.TI[i];
    }
}

void SetEl (TabMhs *T, IdxType i, ElType v) 
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// (*T).TI[i] = v;
// if ((*T).Neff < i){
//     (*T).Neff = i;
// }
{
    (*T).TI[i] = v;
    if ((*T).Neff < i) {
        (*T).Neff = i;
    }
}

void SetNeff (TabMhs *T, IdxType N) 
/* I.S. T terdefinisi, sembarang */
/* F.S. Nilai indeks efektif T bernilai N */
/* Mengeset nilai indeks elemen efektif sehingga bernilai N */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// (*T).Neff = N;
{
    (*T).Neff = N;
}

boolean IsIdxValid (TabMhs T, IdxType i) 
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// if ((i >= IdxMin) && (i <= IdxMax)){
//     return true;
// } else {
//     return false;
// }
{
    if ((i >= IdxMin) && (i <= IdxMax)) {
        return true;
    } else {
        return false;
    }
}

boolean IsIdxEff (TabMhs T, IdxType i) 
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// if ((i >= IdxMin) && (i <= T.Neff)){
//     return true;
// } else {
//     return false;
// }
{
    if ((i >= IdxMin) && (i <= T.Neff)) {
        return true;
    } else {
        return false;
    }
}

boolean IsEmpty (TabMhs T) 
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// if (T.Neff > 0){
//     return false;
// } else {
//     return true;
// }
{
    if (T.Neff > 0) {
        return false;
    } else {
        return true;
    }
}

boolean IsFull (TabMhs T) 
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */
/* Untuk membantu pengerjaan praktikum, silahkan gunakan kode berikut untuk fungsi ini */
// if (T.Neff == IdxMax){
//     return true;
// } else {
//     return false;
// }
{
    if (T.Neff == IdxMax) {
        return true;
    } else {
        return false;
    }
}

void TulisIsi (TabMhs T) 
/* Proses : Menuliskan isi tabel dengan traversal */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong : indeks dan elemen tabel ditulis berderet ke bawah */
/* Contoh print tabel
Test | 12321123 | 3.61
Ini Juga Test | 12321124 | 3.21
Test Lagi | 12321125 | 3.11
*/
/* Jika T kosong : Hanya menulis "Tabel kosong" */
{
    IdxType i;
    if (IsEmpty(T)) {
        printf("Tabel kosong\n");
    } else {
        for (i = IdxMin; i <= T.Neff; i++) {
        printf("%s | %s | %.2f\n", T.TI[i].nama, T.TI[i].nim, T.TI[i].nilai);
        }
    }
}

ElType MakeMahasiswa (char* Nama, char* NIM, float Nilai) 
/* Membentuk sebuah Mahasiswa dari komponen-komponennya */
/* I.S. Nama, NIM, Nilai terdefinisi */
/* F.S. Mahasiswa M terbentuk dengan Nama, NIM, Nilai yang sesuai */

{
    ElType M;
    M.nama = Nama;
    M.nim = NIM;
    M.nilai = Nilai;
    return M;
}

float RataRata (TabMhs T) 
{
/* I.S. Tabel T tidak kosong */
/* F.S. Menghasilkan nilai rata-rata dari elemen tabel */
    IdxType i;
    float sum;
    for (i = IdxMin; i<=T.Neff; i++) {
        sum = sum+T.TI[i].nilai;
    }
    return(sum/NbElmt(T));
}

float Max (TabMhs T) 
/* I.S. Tabel T tidak kosong */
/* F.S. Menghasilkan nilai maksimum dari elemen tabel */
{
    IdxType i;
    float max;
    max = T.TI[IdxMin].nilai;
    for (i = IdxMin; i<=T.Neff; i++) {
        if (T.TI[i].nilai>max) {
            max = T.TI[i].nilai;
        }
    }
    return max;
}

float Min (TabMhs T) 
/* I.S. Tabel T tidak kosong */
/* F.S. Menghasilkan nilai minimum dari elemen tabel */
{
    IdxType i;
    float min;
    min = T.TI[IdxMin].nilai;
    for (i = IdxMin; i<=T.Neff; i++) {
        if (T.TI[i].nilai<min) {
            min = T.TI[i].nilai;
        }
    }
    return min;
}

char *MaxNama (TabMhs T) 
/* I.S. Tabel T tidak kosong */
/* F.S. Menghasilkan nama mahasiswa dengan nilai tertinggi */
/* Jika ada lebih dari satu mahasiswa dengan nilai tertinggi, maka yang diambil yang nim lebih rendah */
{
    IdxType i;
    IdxType idx;
    float max;
    max = T.TI[IdxMin].nilai;
    idx = IdxMin;
    for (i = IdxMin; i<=T.Neff; i++) {
        if (T.TI[i].nilai>max) {
            max = T.TI[i].nilai;
            idx = i;
        } else if (T.TI[i].nilai==max) {
            if (T.TI[i].nim<T.TI[idx].nim) {
            max = T.TI[i].nilai;
            idx = i;
            }
        }
    }
    return T.TI[idx].nama;
}

char *MinNama (TabMhs T) 
/* I.S. Tabel T tidak kosong */
/* F.S. Menghasilkan nama mahasiswa dengan nilai terendah */
/* Jika ada lebih dari satu mahasiswa dengan nilai terendah, maka yang diambil yang nim lebih rendah */
{
    IdxType i;
    IdxType idx;
    float min;
    min = T.TI[IdxMin].nilai;
    idx = IdxMin;
    for (i = IdxMin; i<=T.Neff; i++) {
        if (T.TI[i].nilai<min) {
            min = T.TI[i].nilai;
            idx = i;
        } else if (T.TI[i].nilai==min) {
            if (T.TI[i].nim<T.TI[idx].nim) {
            min = T.TI[i].nilai;
            idx = i;
            }
        }
    }
    return T.TI[idx].nama;
}

int JumlahJurusan (TabMhs T, char* Jurusan) 
/* I.S. Tabel T tidak kosong */
/* F.S. Menghasilkan jumlah mahasiswa yang berasal dari jurusan Jurusan, yang berbentuk 3 angka (contoh: 182) */
/* Jika tidak ada mahasiswa yang berasal dari jurusan Jurusan, maka menghasilkan 0 */
{
    IdxType i;
    IdxType count;
    count = 0;
    for (i = IdxMin; i<=T.Neff; i++) {
        if (T.TI[i].nim[0] == Jurusan[0] && T.TI[i].nim[1] == Jurusan[1] && T.TI[i].nim[2] == Jurusan[2]) {
            count = count+1;
        }
    }
    return count;
}