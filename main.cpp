#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int jml_huruf;
    int huruf_1, huruf_2;
    char temp;
    string kata;
    srand(time(0));

    cout << "Masukan sebuah kata : ";
    cin >> kata;
    jml_huruf = kata.size();
    cout << "jumlah huruf diatas adalah : " << jml_huruf << endl;
    string acak = kata;

    int i=0;
    while(i<jml_huruf){
        huruf_1 = rand() % jml_huruf;
        huruf_2 = rand() % jml_huruf;
        temp = acak[huruf_1];
        acak[huruf_1] = acak[huruf_2];
        acak[huruf_2] = temp;
        ++i;
    }
    cout << "Hasil acak kata : " << acak << endl;

    return 0;
}
