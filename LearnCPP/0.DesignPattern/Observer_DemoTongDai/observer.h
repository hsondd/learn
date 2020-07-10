#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
    Observer();
    virtual ~Observer();
    virtual void update(const char* message) = 0;

};

#endif // OBSERVER_H
