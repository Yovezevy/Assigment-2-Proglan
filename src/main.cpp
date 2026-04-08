#include <iostream>
#include <string>


#include "include/Mahasiswa.hpp"

using namespace std;
using namespace AkademikFTEIC; 

int main(int argc, char ** argv)
{
    cout << "=== SIM Akademik Sederhana ===\n\n";

    Mahasiswa mhs1("Budiono Siregar", "5022123456", "Teknik Elektro", 3.65);
    Mahasiswa mhs2("Sapiderman", "5022123457", "Teknik Komputer", 3.80);

    mhs1.tampilkanData();
    mhs2.tampilkanData();

    cout << "Melakukan update IPK Budi...\n\n";
    mhs1.setIPK(3.75);

    mhs1.tampilkanData();

    return 0;
}