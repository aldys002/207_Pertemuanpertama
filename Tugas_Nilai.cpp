#include <iostream>
using namespace std;

int main()
{
    float matematika, fisika, rerata;
    string status;
    cout << "Nilai Matematika = " << endl;
    cin >> matematika;
    cout << "Nilai Fisika = " << endl;
    cin >> fisika;
    rerata = (matematika + fisika) / 2;
    if (matematika >= 70)
    {
        status = "Lulus";
    }
    else if (rerata > 60)
    {
        status = "Lulus";
    }
    else 
    {
        status = "Gagal";
    }

    cout << "Rerata = " << rerata << endl;
    cout << "Status Kelulusan = " << status << endl;
}
// pertemuan ke 2