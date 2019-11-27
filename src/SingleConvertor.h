#ifndef SINGLECONVERTOR_H
#define SINGLECONVERTOR_H

#include <QWidget>
#include "Global.h"

namespace Ui {
class SingleConvertor;
}

class SingleConvertor : public QWidget
{
    Q_OBJECT

public:
    explicit SingleConvertor(QWidget *parent = nullptr);
    ~SingleConvertor();

private:
    QString getPath() const;
    QString getWindowsStylePath() const;
    QString getUnixStylePath() const;
    void setPath(const QString& path);
    void setWindowsStylePath(const QString& path);
    void setUnixStylePath(const QString& path);

private slots:
    void on_btnChosePath_clicked();

    void on_btnCopyWinStyle_clicked();

    void on_btnCopyUnixStyle_clicked();

    void on_ledtPath_textChanged(const QString &arg1);

private:
    Ui::SingleConvertor *ui;
};

#endif // SINGLECONVERTOR_H
