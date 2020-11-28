#ifndef REDPOINT_H
#define REDPOINT_H

#include "object.h"

class Redpoint: public Object{
private:
	const Object* const target;
    QGraphicsEllipseItem* item;

    void set_item_position();

public:
    Redpoint(const double &x, const double &y, QGraphicsScene* scene = nullptr, const Object* const &target = nullptr);
    Redpoint(const Redpoint &rdpt);

    /* Create a redpoint on random position in game map
     * will call Object(const double &r);
     * ********************************************** */
    Redpoint(QGraphicsScene* scene = nullptr, const Object* const &target = nullptr);

    ~Redpoint();

    void reset_v();
    void add_scene(QGraphicsScene* scene);
    void move_one_tick();
    bool target_reached() const;
    void merge(const Redpoint& rp2);
};

#endif
