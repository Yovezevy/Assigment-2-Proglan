#include <iostream>
#include "include/Mahasiswa.hpp"

namespace AkademikFTEIC {

    Mahasiswa::Mahasiswa(std::string n, std::string id, std::string dept, float ip) 
        : nama(n), nrp(id), departemen(dept), ipk(ip) {}

    std::string Mahasiswa::getNama() const {
        return nama;
    }

    float Mahasiswa::getIPK() const {
        return ipk;
    }

    void Mahasiswa::setIPK(float ipk_baru) {
        if (ipk_baru >= 0.0 && ipk_baru <= 4.0) {
            ipk = ipk_baru;
        } else {
            std::cout << "Error: IPK tidak valid!\n";
        }
    }

    void Mahasiswa::tampilkanData() const {
        std::cout << "Nama       : " << nama << std::endl;
        std::cout << "NRP        : " << nrp << std::endl;
        std::cout << "Departemen : " << departemen << std::endl;
        std::cout << "IPK        : " << ipk << std::endl;
        std::cout << "------------------------------\n";
    }

}