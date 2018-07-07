#ifndef AVTTIMELINEWIDGET_H
#define AVTTIMELINEWIDGET_H

#include <QWidget>

namespace Ui {
class AVTTimelineWidget;
}

class AVTTimelineWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AVTTimelineWidget(QWidget *parent = 0);
    ~AVTTimelineWidget();

protected:
    void paintEvent(QPaintEvent*);


private:
    Ui::AVTTimelineWidget *ui;
};

#endif // AVTTIMELINEWIDGET_H
