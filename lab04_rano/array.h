#ifndef ARRAY_H
#define ARRAY_H

class array{

friend void print_series (array to_be_summed);

public:
	array(float tab[], int size);
	array(const array &oryginal);
	~array();

	float get(int index) const{	return *(_table+index); 	}
	float& get(int index) {	return *(_table+index); 	}
	float size()const{	return _size; 	}
	void print() const;
	void squared() const;

private:
	float* _table;
	int _size;

};

#endif