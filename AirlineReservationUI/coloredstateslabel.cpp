#include "coloredstateslabel.h"

#include <QMouseEvent>

coloredStatesLabel::coloredStatesLabel(QWidget *parent) :
    QLabel(parent)
{
}

void coloredStatesLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    QLabel::mouseReleaseEvent(ev);

    emit clicked((*ev).pos());
}
