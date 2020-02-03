/********************************************************************************
** Form generated from reading UI file 'MultiConvertor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTICONVERTOR_H
#define UI_MULTICONVERTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiConvertor
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QTextEdit *tedtPath;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnChoosePath;
    QPushButton *btnAddPath;
    QPushButton *btnClearPath;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *teditWinStyle;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_8;
    QPushButton *btnCopyWinStyle;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *tedtUnixStyle;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_9;
    QPushButton *btnCopyUnixStyle;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *MultiConvertor)
    {
        if (MultiConvertor->objectName().isEmpty())
            MultiConvertor->setObjectName(QString::fromUtf8("MultiConvertor"));
        MultiConvertor->resize(558, 369);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MultiConvertor->setFont(font);
        gridLayout = new QGridLayout(MultiConvertor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MultiConvertor);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        tedtPath = new QTextEdit(MultiConvertor);
        tedtPath->setObjectName(QString::fromUtf8("tedtPath"));

        horizontalLayout->addWidget(tedtPath);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        btnChoosePath = new QPushButton(MultiConvertor);
        btnChoosePath->setObjectName(QString::fromUtf8("btnChoosePath"));

        verticalLayout_4->addWidget(btnChoosePath);

        btnAddPath = new QPushButton(MultiConvertor);
        btnAddPath->setObjectName(QString::fromUtf8("btnAddPath"));

        verticalLayout_4->addWidget(btnAddPath);

        btnClearPath = new QPushButton(MultiConvertor);
        btnClearPath->setObjectName(QString::fromUtf8("btnClearPath"));

        verticalLayout_4->addWidget(btnClearPath);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(MultiConvertor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        teditWinStyle = new QTextEdit(MultiConvertor);
        teditWinStyle->setObjectName(QString::fromUtf8("teditWinStyle"));

        horizontalLayout_2->addWidget(teditWinStyle);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);

        btnCopyWinStyle = new QPushButton(MultiConvertor);
        btnCopyWinStyle->setObjectName(QString::fromUtf8("btnCopyWinStyle"));

        verticalLayout_5->addWidget(btnCopyWinStyle);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(MultiConvertor);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_3->addLayout(verticalLayout_3);

        tedtUnixStyle = new QTextEdit(MultiConvertor);
        tedtUnixStyle->setObjectName(QString::fromUtf8("tedtUnixStyle"));

        horizontalLayout_3->addWidget(tedtUnixStyle);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_9);

        btnCopyUnixStyle = new QPushButton(MultiConvertor);
        btnCopyUnixStyle->setObjectName(QString::fromUtf8("btnCopyUnixStyle"));

        verticalLayout_6->addWidget(btnCopyUnixStyle);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);


        horizontalLayout_3->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(MultiConvertor);

        QMetaObject::connectSlotsByName(MultiConvertor);
    } // setupUi

    void retranslateUi(QWidget *MultiConvertor)
    {
        MultiConvertor->setWindowTitle(QCoreApplication::translate("MultiConvertor", "Form", nullptr));
        label->setText(QCoreApplication::translate("MultiConvertor", "Path          :", nullptr));
        btnChoosePath->setText(QCoreApplication::translate("MultiConvertor", "...", nullptr));
        btnAddPath->setText(QCoreApplication::translate("MultiConvertor", "+", nullptr));
        btnClearPath->setText(QCoreApplication::translate("MultiConvertor", "\346\270\205\347\251\272", nullptr));
        label_2->setText(QCoreApplication::translate("MultiConvertor", "Win  Style:", nullptr));
        btnCopyWinStyle->setText(QCoreApplication::translate("MultiConvertor", "\345\244\215\345\210\266", nullptr));
        label_3->setText(QCoreApplication::translate("MultiConvertor", "Unix Style:", nullptr));
        btnCopyUnixStyle->setText(QCoreApplication::translate("MultiConvertor", "\345\244\215\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiConvertor: public Ui_MultiConvertor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTICONVERTOR_H
