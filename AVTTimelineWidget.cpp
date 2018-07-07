#include "AVTTimelineWidget.h"
#include "ui_AVTTimelineWidget.h"

AVTTimelineWidget::AVTTimelineWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AVTTimelineWidget)
{
    ui->setupUi(this);
}

AVTTimelineWidget::~AVTTimelineWidget()
{
    delete ui;
}

#pragma mark - Paint Event
void AVTTimelineWidget::paintEvent(QPaintEvent*)
{
    
}

#pragma mark - Mouse Event

