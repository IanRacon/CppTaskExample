#ifndef _ITR_H_
#define _ITR_H_



class itr{
	private:
		int *_arraypointer;
		int _num_of_iterations;
		bool _is_end;
	public:
		itr(int *array, int number);
		itr(int *startarrayptr, int *endarrayptr);
		itr(const itr &source);
		operator bool() const {return !_is_end;}
		void operator++();
		int& operator*();
};



#endif
