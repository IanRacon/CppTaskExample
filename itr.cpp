#include "itr.h"
#define NULL 0

itr::itr(int *array, int number) : _arraypointer(array), _num_of_iterations(number){
	if(array == NULL) _is_end = true;
	_is_end = false;
}

itr::itr(int *startarrayptr, int *endarrayptr){
	if(startarrayptr == NULL) _is_end = true;
	_is_end = false;
	_arraypointer = startarrayptr;
	_num_of_iterations = endarrayptr-startarrayptr;
}

itr::itr(const itr &source){
	_is_end = source._is_end;
	_num_of_iterations = source._num_of_iterations;
	_arraypointer = source._arraypointer;
}

void
itr::operator++(){
	if(_num_of_iterations <= 1){
		_is_end = true;	
	}
	else{
		++_arraypointer;
		--_num_of_iterations;
	}
}

int&
itr::operator*(){
	return *_arraypointer;
}
