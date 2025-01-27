#ifndef DISPLAY_ELEMENT_H
#define DISPLAY_ELEMENT_H

class DisplayElement {
public:
    virtual ~DisplayElement() {}
    virtual void display() = 0;
};

#endif  // DISPLAY_ELEMENT_H
