#include "Widget.h"
#include "ui_Widget.h"

#include "SingleConvertor.h"
#include "MultiConvertor.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Path Separator Convertor");

    ui->tabWidget->clear();
    SingleConvertor *scvt = new SingleConvertor(this);
    MultiConvertor *mcvt = new MultiConvertor(this);
    ui->tabWidget->addTab(scvt, tr("单模转换"));
    ui->tabWidget->addTab(mcvt, tr("多模转换"));
}

Widget::~Widget()
{
    delete ui;
}
