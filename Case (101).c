#include <stdio.h>

int main(){
    int T;
    int N;
    char S[100];

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%d", &N);

        // getchar();

        scanf(" %[^\n]", S);

        // ** ada spasi 1 sebelum %[^\n]"

        // Jadi kenapa format scanf untuk variable char S dispasi 1 karena ada 2 scanf di satu looping-an ini
        // jadi scanf yang pertama otomatis ke "\n" ketika selesai terima input karena emang udah otomatis "\n" kalo pakai scanf
        // nah karena "\n" itu juga termasuk whitespace yg dimana si scanf dibawahnya bakal nangkep whitespace
        // akhirnya scanf yg ke-2 jadi ke-skip karena itu harus dikasih spasi 1

        // ** ditambah lagi karena pakai scanf(" %[^\n]", S); jadi whitespace langsung kebaca sebagai input
        // ** Ke-skip karena scanf yg ke-2 kira whitespace itu adalah input yang dikasih ke dia
        // ** cara lain kalo gak mau ke-skip 1 tinggal pakai getchar();

        printf("Case #%d: ", i);

        for(int j = 0; j < N; j++){

            // If dibawah ini periksa satu persatu di array S itu ada huruf kapital atau kecil
            // Kalo iya print per character printf("%c", S[j]);

            if((S[j] >= 'a' && S[j] <= 'z') || (S[j] >= 'A' && S[j] <= 'Z')){
                printf("%c", S[j]);
            }

            // Check nya dari >= (lebih besar sama dengan dari) 'a' lalu <= (lebih kecil sama dengan dari) 'z'
            // lebih besar sama dengan dari 'a' maksudnya a, b, c, d dan seterusnya
            // lebih kecil sama dengan dari 'z' maksudnya z, y, x, w dan sebelumnya

            // ** ikuti aturan ascii table

            // ** check nya dari nilai paling awal lalu nilai paling tinggi

            //misal alphabet kapital = 'A' sampai 'Z'
            // if (S[j] >= 'A' && S[j] <= 'Z') {
            
            //misal alphabet kecil = 'a' sampai 'z'
            // if (S[j] >= 'a' && S[j] <= 'z') {

            //misal angka = '0' sampai '9'
            // if (S[j] >= '0' && S[j] <= '9') {
            
            //misal mau symbol aja
            // if (!( (S[j] >= 'A' && S[j] <= 'Z') || (S[j] >= 'a' && S[j] <= 'z') || (S[j] >= '0' && S[j] <= '9') )) {

            //misal mau hapus spasi aja
            // if (S[j] != ' ') {

            //nah kalau mau semua nya dimasukin tinggal 32 sampai 126 (aturan ascii)
            // if((S[j] >= 32 && S[j] <= 126)){

        }
        printf("\n");
    }
    return 0;
}