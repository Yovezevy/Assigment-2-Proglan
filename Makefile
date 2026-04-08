# Nama compiler
CXX = g++

# Opsi kompilasi (-Wall untuk menampilkan semua warning agar kode aman)
CXXFLAGS = -Wall

# File sumber yang akan di-compile
SRCS = src/main.cpp src/Mahasiswa.cpp

# Nama file executable hasil kompilasi
TARGET = sim_akademik

# Target utama (dijalankan saat Anda mengetik 'make')
all: $(TARGET)

# Proses kompilasinya
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Target tambahan untuk compile sekaligus menjalankan program
run: $(TARGET)
	./$(TARGET)

# Target untuk membersihkan (menghapus) file executable
clean:
	rm -f $(TARGET)