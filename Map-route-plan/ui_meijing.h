/********************************************************************************
** Form generated from reading UI file 'meijing.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEIJING_H
#define UI_MEIJING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_meijing
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QLabel *label_2;
    QWidget *widget;
    QWidget *widget_2;

    void setupUi(QDialog *meijing)
    {
        if (meijing->objectName().isEmpty())
            meijing->setObjectName(QStringLiteral("meijing"));
        meijing->resize(805, 414);
        label = new QLabel(meijing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 671, 411));
        pushButton = new QPushButton(meijing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 180, 75, 23));
        pushButton_2 = new QPushButton(meijing);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 240, 75, 23));
        pushButton_3 = new QPushButton(meijing);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(710, 330, 75, 23));
        comboBox = new QComboBox(meijing);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(710, 110, 71, 22));
        label_2 = new QLabel(meijing);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(720, 80, 54, 12));
        widget = new QWidget(meijing);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(679, 0, 141, 421));
        widget_2 = new QWidget(meijing);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(680, 0, 131, 421));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(241, 241, 241);"));
        label->raise();
        widget_2->raise();
        widget->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        pushButton->raise();
        comboBox->raise();
        label_2->raise();

        retranslateUi(meijing);

        QMetaObject::connectSlotsByName(meijing);
    } // setupUi

    void retranslateUi(QDialog *meijing)
    {
        meijing->setWindowTitle(QApplication::translate("meijing", "\346\240\241\345\233\255\347\276\216\346\231\257", Q_NULLPTR));
        label->setText(QApplication::translate("meijing", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("meijing", "\344\270\212\344\270\200\345\274\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("meijing", "\344\270\213\344\270\200\345\274\240", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("meijing", "\345\205\263\351\227\255", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("meijing", "\346\240\241\345\233\255\345\205\250\346\231\257", Q_NULLPTR)
         << QApplication::translate("meijing", "\346\257\225\344\270\232\345\255\243", Q_NULLPTR)
         << QApplication::translate("meijing", "\345\224\220\345\262\233\346\271\276", Q_NULLPTR)
         << QApplication::translate("meijing", "\350\277\220\345\212\250\344\274\232", Q_NULLPTR)
         << QApplication::translate("meijing", "\351\237\263\344\271\220\344\274\232", Q_NULLPTR)
         << QApplication::translate("meijing", "\345\206\233\350\256\255", Q_NULLPTR)
         << QApplication::translate("meijing", "\346\200\235\345\210\233\350\256\272\345\235\233", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("meijing", "\351\200\211\346\213\251\347\276\216\346\231\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class meijing: public Ui_meijing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEIJING_H
