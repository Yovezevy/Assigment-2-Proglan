#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include <string>


namespace AkademikFTEIC {

    class Mahasiswa {
    private:
        std::string nama;
        std::string nrp;
        std::string departemen;
        float ipk;

    public:
        
        Mahasiswa(std::string nama, std::string nrp, std::string departemen, float ipk);

       
        std::string getNama() const;
        float getIPK() const;
        void setIPK(float ipk_baru);

       
        void tampilkanData() const;
    };

} 

#endif