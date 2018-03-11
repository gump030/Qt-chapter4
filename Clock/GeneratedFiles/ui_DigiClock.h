/********************************************************************************
** Form generated from reading UI file 'DigiClock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGICLOCK_H
#define UI_DIGICLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DigiClockClass
{
public:

    void setupUi(QDialog *DigiClockClass)
    {
        if (DigiClockClass->objectName().isEmpty())
            DigiClockClass->setObjectName(QStringLiteral("DigiClockClass"));
        DigiClockClass->resize(600, 400);

        retranslateUi(DigiClockClass);

        QMetaObject::connectSlotsByName(DigiClockClass);
    } // setupUi

    void retranslateUi(QDialog *DigiClockClass)
    {
        DigiClockClass->setWindowTitle(QApplication::translate("DigiClockClass", "DigiClock", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DigiClockClass: public Ui_DigiClockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGICLOCK_H
