#include "Global.h"
#include <QApplication>
#include <QClipboard>

QString getFile()
{
return QFileDialog::getSaveFileName();
}

QStringList getFileList()
{
    return QFileDialog::getOpenFileNames();
}

QString convertToWindowsStyle(const QString& path)
{
    QString result = path;
    result.replace("/", "\\\\");
    return result;
}

QString convertToUnixStyle(const QString& path)
{
    QString result = path;
    result.replace("\\", "/");
    return result;
}

void setClipboardText(const QString& text)
{
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(text);
}
