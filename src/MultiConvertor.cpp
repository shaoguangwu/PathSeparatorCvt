#include "MultiConvertor.h"
#include "ui_MultiConvertor.h"

MultiConvertor::MultiConvertor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MultiConvertor)
{
    ui->setupUi(this);
}

MultiConvertor::~MultiConvertor()
{
    delete ui;
}

void MultiConvertor::setPaths(const QString& paths)
{
    ui->tedtPath->setText(paths);
}
void MultiConvertor::addPaths(const QString& paths)
{
    ui->tedtPath->append(paths);
}
QString MultiConvertor::getPaths() const
{
    return ui->tedtPath->toPlainText();
}

void MultiConvertor::setWindowsStylePaths(const QString& paths)
{
    ui->teditWinStyle->setText(paths);
}
QString MultiConvertor::getWindowsStylePaths() const
{
    return ui->teditWinStyle->toPlainText();
}

void MultiConvertor::setUnixStylePaths(const QString& paths)
{
    ui->tedtUnixStyle->setText(paths);
}
QString MultiConvertor::getUnixStylePaths() const
{
    return ui->tedtUnixStyle->toPlainText();
}

void MultiConvertor::on_btnChoosePath_clicked()
{
    QStringList fileList = getFileList();
    if (!fileList.empty()) {
        QString text;
        for (const auto& file : fileList) {
            text += file;
            text += "\n";
        }
        setPaths(text);
    }
}

void MultiConvertor::on_btnClearPath_clicked()
{
    ui->tedtPath->clear();
}

void MultiConvertor::on_btnCopyWinStyle_clicked()
{
    setClipboardText(getWindowsStylePaths());
}

void MultiConvertor::on_btnCopyUnixStyle_clicked()
{
    setClipboardText(getUnixStylePaths());
}

void MultiConvertor::on_btnAddPath_clicked()
{
    QStringList fileList = getFileList();
    if (!fileList.empty()) {
        QString text;
        for (const auto& file : fileList) {
            text += file;
            text += "\n";
        }
        addPaths(text);
    }
}

void MultiConvertor::on_tedtPath_textChanged()
{
    QString text = getPaths();
    setWindowsStylePaths(convertToWindowsStyle(text));
    setUnixStylePaths(convertToUnixStyle(text));
}
