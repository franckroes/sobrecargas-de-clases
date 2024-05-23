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
	bool operator!=(const Clase &clase2)
	
// std::arch << Clase1
    bool Clase :: operator<<(std::ofstream &arch) ;

// std::arch >> Clase1
    bool Clase :: operator>>(std::ifstream &arch);

// ++Clase1 (preincremento)
    Clase operator++()

// Clase1++ (postincremento)
    Clase operator++(int)
	
// --Clase1 (predecremento)
    Clase operator--() 
	
	
// Clase1-- (postdecremento)
    Clase operator--(int)
