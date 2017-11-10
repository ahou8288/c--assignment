#include "battlesphere.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    this->update();
}

Dialog::~Dialog()
{
    delete ui;
}
