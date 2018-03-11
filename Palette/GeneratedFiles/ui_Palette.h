/********************************************************************************
** Form generated from reading UI file 'Palette.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PALETTE_H
#define UI_PALETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_PaletteClass
{
public:

    void setupUi(QDialog *PaletteClass)
    {
        if (PaletteClass->objectName().isEmpty())
            PaletteClass->setObjectName(QStringLiteral("PaletteClass"));
        PaletteClass->resize(600, 400);

        retranslateUi(PaletteClass);

        QMetaObject::connectSlotsByName(PaletteClass);
    } // setupUi

    void retranslateUi(QDialog *PaletteClass)
    {
        PaletteClass->setWindowTitle(QApplication::translate("PaletteClass", "Palette", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PaletteClass: public Ui_PaletteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PALETTE_H
