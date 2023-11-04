class vect {
protected:
    int nelem;  
    int* adr;  

public:
    vect(int n) : nelem(n), adr(new int[n]) {} 
    ~vect() { delete[] adr; }                  

    int& operator[](int i) { return adr[i]; }  
};

class vectok : public vect {
public:
    vectok(int n) : vect(n) {} 

  
    vectok(const vectok& other) : vect(other.nelem) {
        for (int i = 0; i < nelem; ++i) {
            adr[i] = other.adr[i];
        }
    }

    
    vectok& operator=(const vectok& other) {
        if (this != &other) {
            if (nelem != other.nelem) {
                delete[] adr;
                nelem = other.nelem;
                adr = new int[nelem];
            }
            for (int i = 0; i < nelem; ++i) {
                adr[i] = other.adr[i];
            }
        }
        return *this;
    }

    int taille() { return nelem; }  
};

 //------------------------
 #include <iostream>

int main() {
    vectok v1(5);
    for (int i = 0; i < v1.taille(); ++i) {
        v1[i] = i * 2;
    }

    vectok v2 = v1;  
    v2[0] = 10;      

    std::cout << "v1: ";
    for (int i = 0; i < v1.taille(); ++i) {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "v2: ";
    for (int i = 0; i < v2.taille(); ++i) {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


