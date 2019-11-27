#include "SingleConvertor.h"
#include "ui_SingleConvertor.h"

SingleConvertor::SingleConvertor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SingleConvertor)
{
    ui->setupUi(this);
}

SingleConvertor::~SingleConvertor()
{
    delete ui;
}

QString SingleConvertor::getPath() const
{
    return ui->ledtPath->text();
}
QString SingleConvertor::getWindowsStylePath() const
{
    return ui->ledtWinStyle->text();
}
QString SingleConvertor::getUnixStylePath() const
{
    return ui->ledtUnixStyle->text();
}
void SingleConvertor::setPath(const QString& path)
{
    ui->ledtPath->setText(path);
}
void SingleConvertor::setWindowsStylePath(const QString& path)
{
    ui->ledtWinStyle->setText(path);
}
void SingleConvertor::setUnixStylePath(const QString& path)
{
    ui->ledtUnixStyle->setText(path);
}

void SingleConvertor::on_btnChosePath_clicked()
{
    QStringList fileNames = getFileList();
    if (!fileNames.empty()) {
        setPath(fileNames[0]);
    }
}

void SingleConvertor::on_btnCopyWinStyle_clicked()
{
    setClipboardText(getWindowsStylePath());
}

void SingleConvertor::on_btnCopyUnixStyle_clicked()
{
    setClipboardText(getUnixStylePath());
}

void SingleConvertor::on_ledtPath_textChanged(const QString &arg1)
{
    setWindowsStylePath(convertToWindowsStyle(arg1));
    setUnixStylePath(convertToUnixStyle(arg1));
}
