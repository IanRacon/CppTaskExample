#include "foreach.h"



void foreach(itr iterator, numutils::numutils &func){
	for(; iterator; ++iterator){
		func.function(*iterator);
	}
}

