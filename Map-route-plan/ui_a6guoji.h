/********************************************************************************
** Form generated from reading UI file 'a6guoji.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_A6GUOJI_H
#define UI_A6GUOJI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_A6guoji
{
public:

    void setupUi(QDialog *A6guoji)
    {
        if (A6guoji->objectName().isEmpty())
            A6guoji->setObjectName(QStringLiteral("A6guoji"));
        A6guoji->resize(400, 300);

        retranslateUi(A6guoji);

        QMetaObject::connectSlotsByName(A6guoji);
    } // setupUi

    void retranslateUi(QDialog *A6guoji)
    {
        A6guoji->setWindowTitle(QApplication::translate("A6guoji", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class A6guoji: public Ui_A6guoji {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_A6GUOJI_H
