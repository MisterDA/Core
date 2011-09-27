#ifndef UI_SOLID_LAYOUT
#define UI_SOLID_LAYOUT

#include "element.h"
#include "layout.h"

class UISolidLayout : public UILayout {
protected:
    std::vector<TextureResource*> bgtex;
    bool inverted;

    void drawBackground();
public:
    UISolidLayout(bool horizontal = false);
    ~UISolidLayout();
};

#endif