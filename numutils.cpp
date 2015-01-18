#include "numutils.h"

namespace numutils{
void 
sum::function(int &value){
	_sum += value;
}

void
average::function(int &value){
	_sum += value;
	++_count;
}

void
minmax::function(int &value){
	if(value<_min) _min = value;
	if(value>_max) _max = value;	
}



};
