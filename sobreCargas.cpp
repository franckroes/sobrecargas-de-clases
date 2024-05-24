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
	
// arch << Clase1
Se define afuera:
    bool operator<<(ofstream &arch,class Clase &clase1) ;
Se define afuera:
// arch << Clase1
    bool operator>>(ifstream &arch,class Clase &clase1) ;

// ++Clase1 (preincremento)
    Clase operator++()

// Clase1++ (postincremento)
    Clase operator++(int)
	
// --Clase1 (predecremento)
    Clase operator--() 
	
	
// Clase1-- (postdecremento)
    Clase operator--(int)
