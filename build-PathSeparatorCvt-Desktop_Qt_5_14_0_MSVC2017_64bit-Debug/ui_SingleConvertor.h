/********************************************************************************
** Form generated from reading UI file 'SingleConvertor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLECONVERTOR_H
#define UI_SINGLECONVERTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SingleConvertor
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ledtPath;
    QLineEdit *ledtWinStyle;
    QLineEdit *ledtUnixStyle;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnChosePath;
    QPushButton *btnCopyWinStyle;
    QPushButton *btnCopyUnixStyle;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SingleConvertor)
    {
        if (SingleConvertor->objectName().isEmpty())
            SingleConvertor->setObjectName(QString::fromUtf8("SingleConvertor"));
        SingleConvertor->resize(497, 335);
        gridLayout = new QGridLayout(SingleConvertor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(25);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SingleConvertor);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(SingleConvertor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(SingleConvertor);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(25);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ledtPath = new QLineEdit(SingleConvertor);
        ledtPath->setObjectName(QString::fromUtf8("ledtPath"));
        ledtPath->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(ledtPath);

        ledtWinStyle = new QLineEdit(SingleConvertor);
        ledtWinStyle->setObjectName(QString::fromUtf8("ledtWinStyle"));
        ledtWinStyle->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(ledtWinStyle);

        ledtUnixStyle = new QLineEdit(SingleConvertor);
        ledtUnixStyle->setObjectName(QString::fromUtf8("ledtUnixStyle"));
        ledtUnixStyle->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(ledtUnixStyle);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(25);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        btnChosePath = new QPushButton(SingleConvertor);
        btnChosePath->setObjectName(QString::fromUtf8("btnChosePath"));

        verticalLayout_3->addWidget(btnChosePath);

        btnCopyWinStyle = new QPushButton(SingleConvertor);
        btnCopyWinStyle->setObjectName(QString::fromUtf8("btnCopyWinStyle"));

        verticalLayout_3->addWidget(btnCopyWinStyle);

        btnCopyUnixStyle = new QPushButton(SingleConvertor);
        btnCopyUnixStyle->setObjectName(QString::fromUtf8("btnCopyUnixStyle"));

        verticalLayout_3->addWidget(btnCopyUnixStyle);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(SingleConvertor);

        QMetaObject::connectSlotsByName(SingleConvertor);
    } // setupUi

    void retranslateUi(QWidget *SingleConvertor)
    {
        SingleConvertor->setWindowTitle(QCoreApplication::translate("SingleConvertor", "Form", nullptr));
        label->setText(QCoreApplication::translate("SingleConvertor", "Path      :", nullptr));
        label_2->setText(QCoreApplication::translate("SingleConvertor", "Win  Style:", nullptr));
        label_3->setText(QCoreApplication::translate("SingleConvertor", "Unix Style:", nullptr));
        btnChosePath->setText(QCoreApplication::translate("SingleConvertor", "...", nullptr));
        btnCopyWinStyle->setText(QCoreApplication::translate("SingleConvertor", "\345\244\215\345\210\266", nullptr));
        btnCopyUnixStyle->setText(QCoreApplication::translate("SingleConvertor", "\345\244\215\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SingleConvertor: public Ui_SingleConvertor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLECONVERTOR_H
