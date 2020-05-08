/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QFrame *frame;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(413, 375);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(70, 50, 221, 26));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(300, 50, 81, 26));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 54, 31));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 54, 31));
        comboBox_3 = new QComboBox(frame);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(70, 80, 221, 26));
        comboBox_4 = new QComboBox(frame);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(300, 80, 81, 26));
        comboBox_5 = new QComboBox(frame);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(70, 110, 131, 26));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 110, 80, 26));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 51, 31));
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 150, 51, 191));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 150, 121, 194));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(-10);
        doubleSpinBox->setMaximum(10);
        doubleSpinBox->setSingleStep(0.01);

        verticalLayout_3->addWidget(doubleSpinBox);

        doubleSpinBox_2 = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(-10);
        doubleSpinBox_2->setMaximum(10);
        doubleSpinBox_2->setSingleStep(0.01);

        verticalLayout_3->addWidget(doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMinimum(-10);
        doubleSpinBox_3->setMaximum(10);
        doubleSpinBox_3->setSingleStep(0.01);

        verticalLayout_3->addWidget(doubleSpinBox_3);

        doubleSpinBox_4 = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setMinimum(-10);
        doubleSpinBox_4->setMaximum(10);
        doubleSpinBox_4->setSingleStep(0.01);

        verticalLayout_3->addWidget(doubleSpinBox_4);

        doubleSpinBox_5 = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setMinimum(-10);
        doubleSpinBox_5->setMaximum(10);
        doubleSpinBox_5->setSingleStep(0.01);

        verticalLayout_3->addWidget(doubleSpinBox_5);

        doubleSpinBox_6 = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setMinimum(-10);
        doubleSpinBox_6->setMaximum(10);
        doubleSpinBox_6->setSingleStep(0.01);

        verticalLayout_3->addWidget(doubleSpinBox_6);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 180, 81, 26));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 20, 221, 26));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 20, 54, 31));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 20, 80, 26));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 150, 81, 26));

        hboxLayout->addWidget(frame);

        MainWindowDesign->setCentralWidget(centralwidget);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", 0 ));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0 ));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0 ));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0 ));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0 ));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0 ));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "lidar64", 0 )
         << QApplication::translate("MainWindowDesign", "lidar16", 0 )
         << QApplication::translate("MainWindowDesign", "radar", 0 )
         << QApplication::translate("MainWindowDesign", "sick", 0 )
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "esr", 0 )
         << QApplication::translate("MainWindowDesign", "cloud", 0 )
         << QApplication::translate("MainWindowDesign", "os1_lidar", 0 )
         << QApplication::translate("MainWindowDesign", "velodyne", 0 )
        );
        label->setText(QApplication::translate("MainWindowDesign", "topic1:", 0 ));
        label_2->setText(QApplication::translate("MainWindowDesign", "topic2:", 0 ));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "lidar64", 0 )
         << QApplication::translate("MainWindowDesign", "lidar16", 0 )
         << QApplication::translate("MainWindowDesign", "radar", 0 )
         << QApplication::translate("MainWindowDesign", "sick", 0 )
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "esr", 0 )
         << QApplication::translate("MainWindowDesign", "cloud", 0 )
         << QApplication::translate("MainWindowDesign", "os1_lidar", 0 )
         << QApplication::translate("MainWindowDesign", "velodyne", 0 )
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "lidar", 0 )
         << QApplication::translate("MainWindowDesign", "lidar-lidar", 0 )
         << QApplication::translate("MainWindowDesign", "lidar-radar", 0 )
         << QApplication::translate("MainWindowDesign", "lidar-camera", 0 )
         << QApplication::translate("MainWindowDesign", "lidar-imu", 0 )
         << QApplication::translate("MainWindowDesign", "imu-camera", 0 )
        );
        pushButton->setText(QApplication::translate("MainWindowDesign", "start", 0 ));
        label_3->setText(QApplication::translate("MainWindowDesign", "sensors:", 0 ));
        label_4->setText(QApplication::translate("MainWindowDesign", "x(m):", 0 ));
        label_5->setText(QApplication::translate("MainWindowDesign", "y(m):", 0 ));
        label_6->setText(QApplication::translate("MainWindowDesign", "z(m):", 0 ));
        label_7->setText(QApplication::translate("MainWindowDesign", "roll(\302\260):", 0 ));
        label_8->setText(QApplication::translate("MainWindowDesign", "pitch(\302\260):", 0 ));
        label_9->setText(QApplication::translate("MainWindowDesign", "yaw(\302\260):", 0 ));
        pushButton_2->setText(QApplication::translate("MainWindowDesign", "save", 0 ));
        label_10->setText(QApplication::translate("MainWindowDesign", "rosbag:", 0 ));
        pushButton_3->setText(QApplication::translate("MainWindowDesign", "select", 0 ));
        pushButton_4->setText(QApplication::translate("MainWindowDesign", "init", 0 ));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
