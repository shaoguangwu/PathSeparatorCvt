#ifndef GLOBAL_H
#define GLOBAL_H

#include <QFileDialog>
#include <QStringList>
#include <QDebug>

QString getFile();
QStringList getFileList();

QString convertToWindowsStyle(const QString& path);
QString convertToUnixStyle(const QString& path);

void setClipboardText(const QString& text);

#endif // GLOBAL_H
