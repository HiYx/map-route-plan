/********************************************************************************
** Form generated from reading UI file 'nanjiao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NANJIAO_H
#define UI_NANJIAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Nanjiao
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;

    void setupUi(QDialog *Nanjiao)
    {
        if (Nanjiao->objectName().isEmpty())
            Nanjiao->setObjectName(QStringLiteral("Nanjiao"));
        Nanjiao->resize(400, 123);
        textBrowser = new QTextBrowser(Nanjiao);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 401, 211));
        textBrowser_2 = new QTextBrowser(Nanjiao);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 401, 211));

        retranslateUi(Nanjiao);

        QMetaObject::connectSlotsByName(Nanjiao);
    } // setupUi

    void retranslateUi(QDialog *Nanjiao)
    {
        Nanjiao->setWindowTitle(QApplication::translate("Nanjiao", "\345\215\227\346\225\231\346\245\274\350\257\246\346\203\205\344\277\241\346\201\257", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Nanjiao", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\346\245\274\344\275\223\345\220\215\347\247\260	\345\215\227\346\225\231\346\245\274	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\273\272\347\255\221\345\271\264\344\273\243	2010</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\273\272"
                        "\347\255\221\351\235\242\347\247\257	27600m\302\262	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\273\272\347\255\221\345\261\202\346\225\260	5</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\347\256\200  \344\273\213\357\274\232	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\205\250\346\245\274\345\205\2615\345\261\202\357\274\2142\345\261\202\350\256\276\346\234\211\345\244\232\345\252\222\344\275\223\345\200\274\347\217\255\345\256\244\357\274\2145\345\261\202\350\256\276\346\234\211\347\273\230\345\233\276\345\256\244\343\200\202\346\257\217\345\261\202\351\203\275\346\234\211\347\203\255"
                        "\346\260\264\345\231\250\357\274\214\345\215\225\345\261\2022\345\217\260\357\274\214\345\217\214\345\261\2021\345\217\260\343\200\202\346\257\217\345\244\251\346\231\232\344\270\21210:30\347\211\251\344\270\232\346\211\223\346\211\253\345\215\253\347\224\237\343\200\202</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("Nanjiao", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\346\245\274\344\275\223\345\220\215\347\247\260	\345\215\227\346\225\231\346\245\274	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\273\272\347\255\221\345\271\264\344\273\243	2010</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\273\272"
                        "\347\255\221\351\235\242\347\247\257	27600m\302\262	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\273\272\347\255\221\345\261\202\346\225\260	5</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\347\256\200  \344\273\213\357\274\232	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">\345\205\250\346\245\274\345\205\2615\345\261\202\357\274\2142\345\261\202\350\256\276\346\234\211\345\244\232\345\252\222\344\275\223\345\200\274\347\217\255\345\256\244\357\274\2145\345\261\202\350\256\276\346\234\211\347\273\230\345\233\276\345\256\244\343\200\202\346\257\217\345\261\202\351\203\275\346\234\211\347\203\255"
                        "\346\260\264\345\231\250\357\274\214\345\215\225\345\261\2022\345\217\260\357\274\214\345\217\214\345\261\2021\345\217\260\343\200\202\346\257\217\345\244\251\346\231\232\344\270\21210:30\347\211\251\344\270\232\346\211\223\346\211\253\345\215\253\347\224\237\343\200\202</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Nanjiao: public Ui_Nanjiao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NANJIAO_H
