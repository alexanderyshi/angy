#pragma once
#include <string>
#include <vector>

namespace angy {
	
	enum Symmetry {
		SYMMETRIC,
		ASYMMETRIC,
		RADIAL,
		BILATERAL,
		BISYMMETRIC,
	};


	enum FlowerComponentTypes {
		PETAL,
		STIGMA,
		STYLE,
		OVARY, // contains ovule
		ANTHER,
		FILAMENT,
		SEPAL,
		STEM,
	};

	enum PetalPattern {
		SOLID,
		STRIATED,
		SPOTTED,
		SINGLE_STRIPE,
		LILY_STRIPE,
		STREAKED,
		GRADIENT_TIP,
		RHODODENDRON,
	};

	enum PetalShape {
		DAISY,
		CANNA,
		ORCHID,
		DAY_LILY,
		TIGER_LILY,
		COLUMBINE,
		SUSAN,
		DAHLIA,
		JASMINE,
		MAGNOLIA,
		DOGWOOD,
		DAFFODIL_CORONA,
		CORYDALIS,
	};

	typedef struct Color { //16/16/16/16
		unsigned short Red;
		unsigned short Green;
		unsigned short Blue;
	} Color;

	class Component {
	public:

	protected:
		FlowerComponentTypes type;
		Color primaryColor;
		Color secondaryColor;
		Color tertiaryColor;
		unsigned lengthFactor;
		unsigned widthFactor;
		unsigned sizeFactor;
		unsigned numVertices;
	};

	class Petal : Component {
		PetalShape shape;
		PetalPattern pattern;
	};

	// the stamens of a flower collectively, this seems to tend to be a ring
	class Androecium : Component {
		// individual stamen may have a crookedness going radially outwards from center
	};

	class Sepal : Component {
	private:
	};

	typedef struct Pistil {
		Component stigma;
		Component style;
		Component ovary;
	} Pistil;

	typedef struct Stamen {
		Component anther;
		Component filament;
	} Stamen;

	class Flower
	{
	public:
		std::string name;
		unsigned GetNumVertices();
		unsigned GetNumFloatsForBuffer();
		void GetVertices(float* buffer);
	private:
		unsigned numberOfVertices;
		bool needToReCountVertices;
		// https://www.trees.com/gardening-and-landscaping/flowers
		/*
			The reproductive parts of the flower that are necessary for seed production are 
			the stamen (the male organ) and carpel (the female organ). 
			If a flower has both of these parts, it is called a perfect flower, 
			even if it lacks some of the other key parts. 
			If a flower has only one of the reproductive parts, 
			it is considered to be an imperfect flower.
		*/
		std::vector<Sepal> calyx;
		std::vector<Petal> petals;
		std::vector<Petal> perianth; // special case needed for corona
		std::vector<Stamen> androecium;
		std::vector<Pistil> pistils;
	};
}