
#include "rostest/main_window.h"
#include <iostream>
#include <QString>
#include <QtWidgets>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

namespace waytous{
namespace calibration{
namespace gui{
MainWindowDesign::MainWindowDesign(ros::NodeHandle node, QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindowDesign)
{
  ui->setupUi(this);                                                     // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
  setWindowIcon(QIcon(":/images/icon.png"));
  pub_sensors_name_ = node.advertise<std_msgs::String>("sensors",1);
  pub_save_         = node.advertise<std_msgs::String>("save",1);
  pub_trans_        = node.advertise<std_msgs::String>("trans",1);

  connect(ui->doubleSpinBox,  SIGNAL(valueChanged(double)),this,SLOT(on_doubleSpinBox_valueChanged(double)));
  connect(ui->doubleSpinBox_2,SIGNAL(valueChanged(double)),this,SLOT(on_doubleSpinBox_2_valueChanged(double)));
  connect(ui->doubleSpinBox_3,SIGNAL(valueChanged(double)),this,SLOT(on_doubleSpinBox_3_valueChanged(double)));
  connect(ui->doubleSpinBox_4,SIGNAL(valueChanged(double)),this,SLOT(on_doubleSpinBox_4_valueChanged(double)));
  connect(ui->doubleSpinBox_5,SIGNAL(valueChanged(double)),this,SLOT(on_doubleSpinBox_5_valueChanged(double)));
  connect(ui->doubleSpinBox_6,SIGNAL(valueChanged(double)),this,SLOT(on_doubleSpinBox_6_valueChanged(double)));
}

MainWindowDesign::~MainWindowDesign() {}

void MainWindowDesign::on_doubleSpinBox_valueChanged(double arg1){trans_changed(arg1);}
void MainWindowDesign::on_doubleSpinBox_2_valueChanged(double arg1){trans_changed(arg1);}
void MainWindowDesign::on_doubleSpinBox_3_valueChanged(double arg1){trans_changed(arg1);}
void MainWindowDesign::on_doubleSpinBox_4_valueChanged(double arg1){trans_changed(arg1);}
void MainWindowDesign::on_doubleSpinBox_5_valueChanged(double arg1){trans_changed(arg1);}
void MainWindowDesign::on_doubleSpinBox_6_valueChanged(double arg1){trans_changed(arg1);}

void MainWindowDesign::trans_changed(double trans_value)
{
    std::string str_msg;
    str_msg += num2str(ui->doubleSpinBox->value());
    str_msg += " ";
    str_msg += num2str(ui->doubleSpinBox_2->value());
    str_msg += " ";
    str_msg += num2str(ui->doubleSpinBox_3->value());
    str_msg += " ";
    str_msg += num2str(ui->doubleSpinBox_4->value());
    str_msg += " ";
    str_msg += num2str(ui->doubleSpinBox_5->value());
    str_msg += " ";
    str_msg += num2str(ui->doubleSpinBox_6->value());
    std_msgs::String msg;
    msg.data = str_msg.c_str();
    pub_trans_.publish(msg);
}

void MainWindowDesign::on_pushButton_clicked()
{
    std::string topic1  = (ui->comboBox->currentText()).toStdString();
    std::string frame1  = (ui->comboBox_2->currentText()).toStdString();
    std::string topic2  = (ui->comboBox_3->currentText()).toStdString();
    std::string frame2  = (ui->comboBox_4->currentText()).toStdString();
    std::string sensors = (ui->comboBox_5->currentText()).toStdString();
    std_msgs::String msg_sensors;
    msg_sensors.data = sensors.c_str();
    pub_sensors_name_.publish(msg_sensors);
}

void MainWindowDesign::on_pushButton_2_clicked()
{
  std::string tmp_str;
  tmp_str += num2str(ui->doubleSpinBox->value());
  tmp_str += " ";
  tmp_str += num2str(ui->doubleSpinBox_2->value());
  tmp_str += " ";
  tmp_str += num2str(ui->doubleSpinBox_3->value());
  tmp_str += " ";
  tmp_str += num2str(ui->doubleSpinBox_4->value());
  tmp_str += " ";
  tmp_str += num2str(ui->doubleSpinBox_5->value());
  tmp_str += " ";
  tmp_str += num2str(ui->doubleSpinBox_6->value());
  std_msgs::String tmp_msg;
  tmp_msg.data = tmp_str.c_str();
  pub_save_.publish(tmp_msg);
  std::cout<<"save_pub"<<std::endl;
}

void MainWindowDesign::on_pushButton_3_clicked()
{
      QString OpenFile, OpenFilePath;
      //打开文件夹
      OpenFile = QFileDialog::getOpenFileName(this, "Please choose an image file", "", "Rosbag(*.bag);;Image Files(*.jpg *.png *.bmp *.pgm *.pbm);;All(*.*)");
      //显示文件的路径
      QFileInfo OpenFileInfo;
      OpenFileInfo = QFileInfo(OpenFile);
      OpenFilePath = OpenFileInfo.filePath();
      ui->lineEdit->setText(OpenFilePath);
      std::string path = (OpenFilePath).toStdString();
      //command run
      std::string first = "gnome-terminal -x bash -c 'rosbag play ";
      std::string third = " --loop'&";
      // std::string first = "gnome-terminal --tab -e 'bash -c rosbag play"; 
      // std::string third = " --loop;exec bash;'&";
      std::string command = first+path+third;
      system(command.c_str());
}

void MainWindowDesign::on_pushButton_4_clicked()
{
  init_.GetInit();
  ui->doubleSpinBox->setValue(init_.x_);
  ui->doubleSpinBox_2->setValue(init_.y_);
  ui->doubleSpinBox_3->setValue(init_.z_);
  ui->doubleSpinBox_4->setValue(init_.roll_);
  ui->doubleSpinBox_5->setValue(init_.pitch_);
  ui->doubleSpinBox_6->setValue(init_.yaw_);
}
void MainWindowDesign::closeEvent(QCloseEvent *event)
{
  QMainWindow::closeEvent(event);
}
}//namespace gui
}//namespace calibration
}//namespace waytous




