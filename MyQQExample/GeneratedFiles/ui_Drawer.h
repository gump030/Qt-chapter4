/********************************************************************************
** Form generated from reading UI file 'Drawer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWER_H
#define UI_DRAWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DrawerClass
{
public:

    void setupUi(QDialog *DrawerClass)
    {
        if (DrawerClass->objectName().isEmpty())
            DrawerClass->setObjectName(QStringLiteral("DrawerClass"));
        DrawerClass->resize(600, 400);

        retranslateUi(DrawerClass);

        QMetaObject::connectSlotsByName(DrawerClass);
    } // setupUi

    void retranslateUi(QDialog *DrawerClass)
    {
        DrawerClass->setWindowTitle(QApplication::translate("DrawerClass", "Drawer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DrawerClass: public Ui_DrawerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWER_H
