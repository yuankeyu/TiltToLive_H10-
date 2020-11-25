#ifndef OBJECT_H
#define OBJECT_H

#include "Circle.h"
#include "Vector.h"

class Object{
	protected:
	Circle c;
	Vector v;

	public:
	Object(const double &x, const double &y, const double &r);
    virtual ~Object();

	Circle& getc();		const Circle& getc() const;
	Vector& getv();		const Vector& getv() const;
						const Vector& getp() const;
						const double& getr() const;

	virtual void reset_v();
	void move_one_tik();
	friend double get_distance(const Object &o1, const Object &o2);
	friend bool check_overlap(const Object &o1,const Object &o2);
};

#endif