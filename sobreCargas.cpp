sea la "class Clase"
//Clase3 = Clase1 + Clase2
	Clase operator+(const Clase &clase2);
//Clase3 = Clase1 - Clase2
	Clase operator+(const Clase &clase2);
// Clase3 = Clase1 * Clase2
    Clase operator*(const Clase &clase2);
// Clase3 = Clase1 / Clase2
    Clase operator/(const Clase &clase2)
	
// Clase1=Clase2
	void operator = (const Clase clase2);
// Clase1 = Clase2
	Clase& operator=(const Clase &clase2)
	
// Clase1 == Clase2
    bool operator==(const Clase &clase2)

// Clase1 != Clase2
	bool operator!=(const Clase &clase2);
	
	
// std::cout << Clase1
    friend std::ostream& operator<<(std::ostream &out, const Clase &clase) {
        out << clase.value;
        return out;
    }

    // std::cin >> Clase1
    friend std::istream& operator>>(std::istream &in, Clase &clase) {
        in >> clase.value;
        return in;
    }


// ++Clase1 (preincremento)
    Clase& operator++()

// Clase1++ (postincremento)
    Clase operator++(int)
	
// --Clase1 (predecremento)
    Clase& operator--() 
	
	
// Clase1-- (postdecremento)
    Clase operator--(int)