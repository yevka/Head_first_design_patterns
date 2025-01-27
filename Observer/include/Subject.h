#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
#include <vector>

class Subject {
public:
    virtual ~Subject() {}
    virtual void registerObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyObservers() = 0;
    virtual std::vector<Observer*> getObservers() = 0;
};

#endif  // SUBJECT_H
