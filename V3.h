#ifndef _V3_H
#define _V3_H

#include "math.h"

class V3 {
	
	double x, y, z;
	
	public:
	
	V3 ():x(0),y(0),z(0){};
	
	V3 (double x, double y, double x): x(x),y(y),z(z){};
	
	// metodai
	
	double koksX() { return x; }
	double koksY() { return y; }
	double koksZ() { return z; }
	
	double ilgis () {
		return sqrt((x*x) + (y*y) + (z*z));
	}
	
	V3 normalizuok () {
		double ilg = this->ilgis();
		return Vect (x/ilg, y/ilg, z/ilg);
	}
	
	V3 priesingas () {
		return V3 (-x, -y, -z);
	}
	
	double skalSand(V3 v) {
		return x*v.koksX() + y*v.koksY() + z*v.koksZ();
	}
	
	V3 vekSand(Vect v) {
		return V3 (y*v.koksZ() - z*v.koksY(), z*v.koksX() - x*v.koksZ(), x*v.koksY() - y*v.koksX());
	}
	
	V3 pridek (V3 v) {
		return V3(x + v.koksX(), y + v.koksY(), z + v.koksZ());
	}

	V3 kartSk (double sk) {
		return Vect (x*sk, y*sk, z*sk);
	}
};

#endif
