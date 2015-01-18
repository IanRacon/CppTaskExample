#ifndef _NUMUTILS_H_
#define _NUMUTILS_H_


namespace numutils{
class numutils{
	private:
	public:
		virtual void function(int &value) = 0;
};

class sum : public numutils{
	private:
		int _sum;
	public:
		sum(): _sum(0) {}
		void operator()(int x) { _sum += x; }
		virtual void function(int &value);
		int result() const { return _sum; }
};

class average : public numutils{
	private:
		float _count;
		float _sum;
	public:
		average(): _count(0), _sum(0) {}
		virtual void function(int &value);
		float result() const { return _sum/_count; }
};

class minmax : public numutils{
	private:
		int _min;
		int _max;
	public:
		minmax(): _min(10000), _max(0) {}
		virtual void function(int &value);
		int min() const { return _min; }
		int max() const { return _max; }

};

};



#endif
