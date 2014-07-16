#ifndef COLOREDSTATESLABEL_H
#define COLOREDSTATESLABEL_H

#include <QLabel>

class coloredStatesLabel : public QLabel
{
    Q_OBJECT
public:
    explicit coloredStatesLabel(QWidget *parent = 0);

protected:
    void mouseReleaseEvent(QMouseEvent *ev);
signals:
    void clicked(const QPoint & pos);

public slots:


};

#endif // COLOREDSTATESLABEL_H
