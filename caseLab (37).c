#include <stdio.h>
#include <string.h>

struct Student{ // buat struct student
    char id[11];
    char name[21];
};

void bubbleSort(struct Student students[], int n){ // buat sorting
    int i, j; 
    struct Student temp; // buat temporary struct (buat swap)

    for(i = 0; i < n-1; i++){ 
        for(j = 0; j < n-i-1; j++){
            if(strcmp(students[j].id, students[j+1].id) > 0){ // kalo nimnya lebih besar dari nim setelahnya, swap
                temp = students[j]; // sorting kayak biasa aja
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    int n;
    fscanf(file, "%d", &n); // buat baca berapa banyak murid

    struct Student students[n]; // buat array of struct (dari total banyak murid)

    for(int i = 0; i < n; i++){ // diulang sampai total banyak murid
        fscanf(file, "%s %s", students[i].id, students[i].name);
    }

    fclose(file);

    // ambil parameter student id dan student name, lalu ambil banyak murid
    bubbleSort(students, n); //sorting berdasarkan nim(id)

    for(int i = 0; i < n; i++){ // print yang udah disorting
        printf("%s %s\n", students[i].id, students[i].name);
    }
    return 0;
}
