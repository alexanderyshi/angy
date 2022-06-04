#pragma once

#include "stdafx.h"
#include "Flower.h"


using namespace angy;

unsigned Flower::GetNumVertices() {
	return 3;
}

unsigned Flower::GetNumFloatsForBuffer() {
	return 15;
}

void Flower::GetVertices(float* buffer) {
	buffer[0]  = 0.0f;
    buffer[1]  = 0.25f;
    buffer[2]  = 0.0f;
    buffer[3]  = 0.5f;
    buffer[4]  = 0.0f;
    buffer[5]  = 0.25f;
    buffer[6]  = -0.25f;
    buffer[7]  = 0.0f;
    buffer[8]  = 1.0f;
    buffer[9]  = 1.0f;
    buffer[10] = -0.25f;
    buffer[11] = -0.25f;
    buffer[12] = 0.0f;
    buffer[13] = 0.0f;
    buffer[14] = 1.0f;
    
}
