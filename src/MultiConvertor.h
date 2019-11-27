#ifndef MULTICONVERTOR_H
#define MULTICONVERTOR_H

#include <QWidget>
#include "Global.h"

namespace Ui {
class MultiConvertor;
}

class MultiConvertor : public QWidget
{
    Q_OBJECT

public:
    explicit MultiConvertor(QWidget *parent = nullptr);
    ~MultiConvertor();

private:
    void setPaths(const QString& paths);
    void addPaths(const QString& paths);
    QString getPaths() const;

    void setWindowsStylePaths(const QString& paths);
    QString getWindowsStylePaths() const;

    void setUnixStylePaths(const QString& paths);
    QString getUnixStylePaths() const;

private slots:
    void on_btnChoosePath_clicked();

    void on_btnClearPath_clicked();

    void on_btnCopyWinStyle_clicked();

    void on_btnCopyUnixStyle_clicked();

    void on_btnAddPath_clicked();

    void on_tedtPath_textChanged();

private:
    Ui::MultiConvertor *ui;
};

#endif // MULTICONVERTOR_H
