/********************************************************************************
** Form generated from reading UI file 'ProgressDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDLG_H
#define UI_PROGRESSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ProgressDlgClass
{
public:

    void setupUi(QDialog *ProgressDlgClass)
    {
        if (ProgressDlgClass->objectName().isEmpty())
            ProgressDlgClass->setObjectName(QStringLiteral("ProgressDlgClass"));
        ProgressDlgClass->resize(600, 400);

        retranslateUi(ProgressDlgClass);

        QMetaObject::connectSlotsByName(ProgressDlgClass);
    } // setupUi

    void retranslateUi(QDialog *ProgressDlgClass)
    {
        ProgressDlgClass->setWindowTitle(QApplication::translate("ProgressDlgClass", "ProgressDlg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProgressDlgClass: public Ui_ProgressDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDLG_H
