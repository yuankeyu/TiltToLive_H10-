#ifndef ARROW_H
#define ARROR_H

#include "object.h"
#include "constants.h"

class Arrow: public Object	{
private:
    Vector target;
    QGraphicsEllipseItem* item;
    void reset_v();
public:
    Arrow(const double &x, const double &y, QGraphicsScene* scene = nullptr);
    ~Arrow();

    void set_target(const double &x, const double &y);
    void add_scene(QGraphicsScene* scene);
    void move_one_tick();
};

#endif
