/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *input;
    QTextBrowser *history;
    QLabel *label;
    QFrame *frame;
    QMdiArea *tierra;
    QMdiArea *tronco;
    QMdiArea *rama2;
    QMdiArea *rama1;
    QMdiArea *rama3;
    QMdiArea *rama4;
    QMdiArea *rama5;
    QMdiArea *hoja11;
    QMdiArea *hoja12;
    QMdiArea *hoja13;
    QMdiArea *hoja14;
    QMdiArea *hoja15;
    QMdiArea *hoja16;
    QMdiArea *hoja17;
    QMdiArea *hoja18;
    QMdiArea *hoja19;
    QMdiArea *hoja110;
    QMdiArea *hoja29;
    QMdiArea *hoja23;
    QMdiArea *hoja25;
    QMdiArea *hoja27;
    QMdiArea *hoja21;
    QMdiArea *hoja210;
    QMdiArea *hoja22;
    QMdiArea *hoja28;
    QMdiArea *hoja26;
    QMdiArea *hoja24;
    QMdiArea *hoja31;
    QMdiArea *hoja35;
    QMdiArea *hoja39;
    QMdiArea *hoja33;
    QMdiArea *hoja37;
    QMdiArea *hoja32;
    QMdiArea *hoja38;
    QMdiArea *hoja310;
    QMdiArea *hoja36;
    QMdiArea *hoja34;
    QMdiArea *hoja49;
    QMdiArea *hoja45;
    QMdiArea *hoja47;
    QMdiArea *hoja41;
    QMdiArea *hoja43;
    QMdiArea *hoja410;
    QMdiArea *hoja44;
    QMdiArea *hoja42;
    QMdiArea *hoja48;
    QMdiArea *hoja46;
    QMdiArea *hoja51;
    QMdiArea *hoja59;
    QMdiArea *hoja55;
    QMdiArea *hoja57;
    QMdiArea *hoja53;
    QMdiArea *hoja52;
    QMdiArea *hoja58;
    QMdiArea *hoja56;
    QMdiArea *hoja54;
    QMdiArea *hoja510;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1004, 487);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 430, 89, 25));
        input = new QLineEdit(centralwidget);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(20, 430, 521, 25));
        history = new QTextBrowser(centralwidget);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(10, 40, 151, 361));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 131, 17));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(170, 30, 731, 371));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tierra = new QMdiArea(frame);
        tierra->setObjectName(QString::fromUtf8("tierra"));
        tierra->setGeometry(QRect(0, 310, 731, 61));
        tierra->setAutoFillBackground(true);
        QBrush brush(QColor(115, 210, 22, 255));
        brush.setStyle(Qt::SolidPattern);
        tierra->setBackground(brush);
        tronco = new QMdiArea(frame);
        tronco->setObjectName(QString::fromUtf8("tronco"));
        tronco->setGeometry(QRect(310, 19, 51, 291));
        QBrush brush1(QColor(136, 138, 133, 255));
        brush1.setStyle(Qt::SolidPattern);
        tronco->setBackground(brush1);
        rama2 = new QMdiArea(frame);
        rama2->setObjectName(QString::fromUtf8("rama2"));
        rama2->setGeometry(QRect(99, 90, 211, 20));
        QBrush brush2(QColor(143, 89, 2, 255));
        brush2.setStyle(Qt::SolidPattern);
        rama2->setBackground(brush2);
        rama1 = new QMdiArea(frame);
        rama1->setObjectName(QString::fromUtf8("rama1"));
        rama1->setGeometry(QRect(360, 60, 211, 20));
        rama1->setBackground(brush2);
        rama3 = new QMdiArea(frame);
        rama3->setObjectName(QString::fromUtf8("rama3"));
        rama3->setGeometry(QRect(360, 150, 211, 20));
        rama3->setBackground(brush2);
        rama4 = new QMdiArea(frame);
        rama4->setObjectName(QString::fromUtf8("rama4"));
        rama4->setGeometry(QRect(99, 190, 211, 20));
        rama4->setBackground(brush2);
        rama5 = new QMdiArea(frame);
        rama5->setObjectName(QString::fromUtf8("rama5"));
        rama5->setGeometry(QRect(360, 250, 211, 20));
        rama5->setBackground(brush2);
        hoja11 = new QMdiArea(frame);
        hoja11->setObjectName(QString::fromUtf8("hoja11"));
        hoja11->setGeometry(QRect(370, 80, 21, 31));
        QBrush brush3(QColor(78, 154, 6, 255));
        brush3.setStyle(Qt::SolidPattern);
        hoja11->setBackground(brush3);
        hoja12 = new QMdiArea(frame);
        hoja12->setObjectName(QString::fromUtf8("hoja12"));
        hoja12->setGeometry(QRect(390, 30, 21, 31));
        hoja12->setBackground(brush3);
        hoja13 = new QMdiArea(frame);
        hoja13->setObjectName(QString::fromUtf8("hoja13"));
        hoja13->setGeometry(QRect(410, 80, 21, 31));
        hoja13->setBackground(brush3);
        hoja14 = new QMdiArea(frame);
        hoja14->setObjectName(QString::fromUtf8("hoja14"));
        hoja14->setGeometry(QRect(430, 30, 21, 31));
        hoja14->setBackground(brush3);
        hoja15 = new QMdiArea(frame);
        hoja15->setObjectName(QString::fromUtf8("hoja15"));
        hoja15->setGeometry(QRect(450, 80, 21, 31));
        hoja15->setBackground(brush3);
        hoja16 = new QMdiArea(frame);
        hoja16->setObjectName(QString::fromUtf8("hoja16"));
        hoja16->setGeometry(QRect(470, 30, 21, 31));
        hoja16->setBackground(brush3);
        hoja17 = new QMdiArea(frame);
        hoja17->setObjectName(QString::fromUtf8("hoja17"));
        hoja17->setGeometry(QRect(490, 80, 21, 31));
        hoja17->setBackground(brush3);
        hoja18 = new QMdiArea(frame);
        hoja18->setObjectName(QString::fromUtf8("hoja18"));
        hoja18->setGeometry(QRect(510, 30, 21, 31));
        hoja18->setBackground(brush3);
        hoja19 = new QMdiArea(frame);
        hoja19->setObjectName(QString::fromUtf8("hoja19"));
        hoja19->setGeometry(QRect(530, 80, 21, 31));
        hoja19->setBackground(brush3);
        hoja110 = new QMdiArea(frame);
        hoja110->setObjectName(QString::fromUtf8("hoja110"));
        hoja110->setGeometry(QRect(550, 30, 21, 31));
        hoja110->setBackground(brush3);
        hoja29 = new QMdiArea(frame);
        hoja29->setObjectName(QString::fromUtf8("hoja29"));
        hoja29->setGeometry(QRect(120, 60, 21, 31));
        hoja29->setBackground(brush3);
        hoja23 = new QMdiArea(frame);
        hoja23->setObjectName(QString::fromUtf8("hoja23"));
        hoja23->setGeometry(QRect(240, 60, 21, 31));
        hoja23->setBackground(brush3);
        hoja25 = new QMdiArea(frame);
        hoja25->setObjectName(QString::fromUtf8("hoja25"));
        hoja25->setGeometry(QRect(200, 60, 21, 31));
        hoja25->setBackground(brush3);
        hoja27 = new QMdiArea(frame);
        hoja27->setObjectName(QString::fromUtf8("hoja27"));
        hoja27->setGeometry(QRect(160, 60, 21, 31));
        hoja27->setBackground(brush3);
        hoja21 = new QMdiArea(frame);
        hoja21->setObjectName(QString::fromUtf8("hoja21"));
        hoja21->setGeometry(QRect(280, 60, 21, 31));
        hoja21->setBackground(brush3);
        hoja210 = new QMdiArea(frame);
        hoja210->setObjectName(QString::fromUtf8("hoja210"));
        hoja210->setGeometry(QRect(100, 110, 21, 31));
        hoja210->setBackground(brush3);
        hoja22 = new QMdiArea(frame);
        hoja22->setObjectName(QString::fromUtf8("hoja22"));
        hoja22->setGeometry(QRect(260, 110, 21, 31));
        hoja22->setBackground(brush3);
        hoja28 = new QMdiArea(frame);
        hoja28->setObjectName(QString::fromUtf8("hoja28"));
        hoja28->setGeometry(QRect(140, 110, 21, 31));
        hoja28->setBackground(brush3);
        hoja26 = new QMdiArea(frame);
        hoja26->setObjectName(QString::fromUtf8("hoja26"));
        hoja26->setGeometry(QRect(180, 110, 21, 31));
        hoja26->setBackground(brush3);
        hoja24 = new QMdiArea(frame);
        hoja24->setObjectName(QString::fromUtf8("hoja24"));
        hoja24->setGeometry(QRect(220, 110, 21, 31));
        hoja24->setBackground(brush3);
        hoja31 = new QMdiArea(frame);
        hoja31->setObjectName(QString::fromUtf8("hoja31"));
        hoja31->setGeometry(QRect(360, 120, 21, 31));
        hoja31->setBackground(brush3);
        hoja35 = new QMdiArea(frame);
        hoja35->setObjectName(QString::fromUtf8("hoja35"));
        hoja35->setGeometry(QRect(440, 120, 21, 31));
        hoja35->setBackground(brush3);
        hoja39 = new QMdiArea(frame);
        hoja39->setObjectName(QString::fromUtf8("hoja39"));
        hoja39->setGeometry(QRect(520, 120, 21, 31));
        hoja39->setBackground(brush3);
        hoja33 = new QMdiArea(frame);
        hoja33->setObjectName(QString::fromUtf8("hoja33"));
        hoja33->setGeometry(QRect(400, 120, 21, 31));
        hoja33->setBackground(brush3);
        hoja37 = new QMdiArea(frame);
        hoja37->setObjectName(QString::fromUtf8("hoja37"));
        hoja37->setGeometry(QRect(480, 120, 21, 31));
        hoja37->setBackground(brush3);
        hoja32 = new QMdiArea(frame);
        hoja32->setObjectName(QString::fromUtf8("hoja32"));
        hoja32->setGeometry(QRect(380, 170, 21, 31));
        hoja32->setBackground(brush3);
        hoja38 = new QMdiArea(frame);
        hoja38->setObjectName(QString::fromUtf8("hoja38"));
        hoja38->setGeometry(QRect(500, 170, 21, 31));
        hoja38->setBackground(brush3);
        hoja310 = new QMdiArea(frame);
        hoja310->setObjectName(QString::fromUtf8("hoja310"));
        hoja310->setGeometry(QRect(540, 170, 21, 31));
        hoja310->setBackground(brush3);
        hoja36 = new QMdiArea(frame);
        hoja36->setObjectName(QString::fromUtf8("hoja36"));
        hoja36->setGeometry(QRect(460, 170, 21, 31));
        hoja36->setBackground(brush3);
        hoja34 = new QMdiArea(frame);
        hoja34->setObjectName(QString::fromUtf8("hoja34"));
        hoja34->setGeometry(QRect(420, 170, 21, 31));
        hoja34->setBackground(brush3);
        hoja49 = new QMdiArea(frame);
        hoja49->setObjectName(QString::fromUtf8("hoja49"));
        hoja49->setGeometry(QRect(130, 160, 21, 31));
        hoja49->setBackground(brush3);
        hoja45 = new QMdiArea(frame);
        hoja45->setObjectName(QString::fromUtf8("hoja45"));
        hoja45->setGeometry(QRect(210, 160, 21, 31));
        hoja45->setBackground(brush3);
        hoja47 = new QMdiArea(frame);
        hoja47->setObjectName(QString::fromUtf8("hoja47"));
        hoja47->setGeometry(QRect(170, 160, 21, 31));
        hoja47->setBackground(brush3);
        hoja41 = new QMdiArea(frame);
        hoja41->setObjectName(QString::fromUtf8("hoja41"));
        hoja41->setGeometry(QRect(290, 160, 21, 31));
        hoja41->setBackground(brush3);
        hoja43 = new QMdiArea(frame);
        hoja43->setObjectName(QString::fromUtf8("hoja43"));
        hoja43->setGeometry(QRect(250, 160, 21, 31));
        hoja43->setBackground(brush3);
        hoja410 = new QMdiArea(frame);
        hoja410->setObjectName(QString::fromUtf8("hoja410"));
        hoja410->setGeometry(QRect(110, 210, 21, 31));
        hoja410->setBackground(brush3);
        hoja44 = new QMdiArea(frame);
        hoja44->setObjectName(QString::fromUtf8("hoja44"));
        hoja44->setGeometry(QRect(230, 210, 21, 31));
        hoja44->setBackground(brush3);
        hoja42 = new QMdiArea(frame);
        hoja42->setObjectName(QString::fromUtf8("hoja42"));
        hoja42->setGeometry(QRect(270, 210, 21, 31));
        hoja42->setBackground(brush3);
        hoja48 = new QMdiArea(frame);
        hoja48->setObjectName(QString::fromUtf8("hoja48"));
        hoja48->setGeometry(QRect(150, 210, 21, 31));
        hoja48->setBackground(brush3);
        hoja46 = new QMdiArea(frame);
        hoja46->setObjectName(QString::fromUtf8("hoja46"));
        hoja46->setGeometry(QRect(190, 210, 21, 31));
        hoja46->setBackground(brush3);
        hoja51 = new QMdiArea(frame);
        hoja51->setObjectName(QString::fromUtf8("hoja51"));
        hoja51->setGeometry(QRect(360, 220, 21, 31));
        hoja51->setBackground(brush3);
        hoja59 = new QMdiArea(frame);
        hoja59->setObjectName(QString::fromUtf8("hoja59"));
        hoja59->setGeometry(QRect(520, 220, 21, 31));
        hoja59->setBackground(brush3);
        hoja55 = new QMdiArea(frame);
        hoja55->setObjectName(QString::fromUtf8("hoja55"));
        hoja55->setGeometry(QRect(440, 220, 21, 31));
        hoja55->setBackground(brush3);
        hoja57 = new QMdiArea(frame);
        hoja57->setObjectName(QString::fromUtf8("hoja57"));
        hoja57->setGeometry(QRect(480, 220, 21, 31));
        hoja57->setBackground(brush3);
        hoja53 = new QMdiArea(frame);
        hoja53->setObjectName(QString::fromUtf8("hoja53"));
        hoja53->setGeometry(QRect(400, 220, 21, 31));
        hoja53->setBackground(brush3);
        hoja52 = new QMdiArea(frame);
        hoja52->setObjectName(QString::fromUtf8("hoja52"));
        hoja52->setGeometry(QRect(380, 270, 21, 31));
        hoja52->setBackground(brush3);
        hoja58 = new QMdiArea(frame);
        hoja58->setObjectName(QString::fromUtf8("hoja58"));
        hoja58->setGeometry(QRect(500, 270, 21, 31));
        hoja58->setBackground(brush3);
        hoja56 = new QMdiArea(frame);
        hoja56->setObjectName(QString::fromUtf8("hoja56"));
        hoja56->setGeometry(QRect(460, 270, 21, 31));
        hoja56->setBackground(brush3);
        hoja54 = new QMdiArea(frame);
        hoja54->setObjectName(QString::fromUtf8("hoja54"));
        hoja54->setGeometry(QRect(420, 270, 21, 31));
        hoja54->setBackground(brush3);
        hoja510 = new QMdiArea(frame);
        hoja510->setObjectName(QString::fromUtf8("hoja510"));
        hoja510->setGeometry(QRect(540, 270, 21, 31));
        hoja510->setBackground(brush3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Ingresar", nullptr));
        label->setText(QApplication::translate("MainWindow", "Utimos Comandos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
