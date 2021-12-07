#pragma once

#include "Flower.h"

namespace angy {
	enum FlowerGeneratorStyles {
		CHINESE_FUNERAL, // white daisies
	};

	enum Inflorescence {
		SPIKE,
		SPIKELOET,
		RACEME,
		PANICLE,
		CORYMB,
		COMPOUND_CORYMB,
		UMBEL,
		COMPOUND_UMBEL,
		CAPITULUM,
		THRYSE,
				
		DICHASIUM,
		SIMPLE_CYME = DICHASIUM,
		COMPOUND_DICHASIUM,
		COMPOUND_CYME,
		HELICOID_CYME,
		CINCINNUS,
		SCORPIOID_CYME,
	};

	class FlowerGenerator
	{
	public:
		FlowerGenerator() {};

		Flower GetFlower();
	private:
		void GeneratePetals(Flower* flower); // generate radially in sequence for some number of rows
	};
}