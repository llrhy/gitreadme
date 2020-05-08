/*----------------------------------------------------------------
 * Copyright (C) 2019 北京慧拓无线科技有限公司 waytous Inc All Rights Reserved
 *
 * Author: 栗荣豪
 * Time  : 2020-03-19
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE
-----------------------------------------------------------------*/
#ifndef GUI_SRC_CALIBRATION_MAIN_WINDOW_H
#define GUI_SRC_CALIBRATION_MAIN_WINDOW_H

#include <QMainWindow>
#include <ros/package.h>
#include "ui_main_window.h"
#include "init_sub.h"

namespace Ui {
    class MainWindowDesign;
}

namespace waytous{
namespace calibration{
namespace gui{

class MainWindowDesign : public QMainWindow
{
Q_OBJECT
public:
  explicit MainWindowDesign(ros::NodeHandle node, QWidget *parent = 0);
	~MainWindowDesign();
	void closeEvent(QCloseEvent *event); // Overloaded function
  void trans_changed(double trans_value);

  template<typename T>
  inline std::string num2str(T num) 
  {
      std::stringstream ss;
      std::string st;
      ss << num;
      ss >> st;
      return st;
  }
public:
  InitSub init_ ;
  Ui::MainWindowDesign *ui;
public slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);
    void on_doubleSpinBox_2_valueChanged(double arg1);
    void on_doubleSpinBox_3_valueChanged(double arg1);
    void on_doubleSpinBox_4_valueChanged(double arg1);
    void on_doubleSpinBox_5_valueChanged(double arg1);
    void on_doubleSpinBox_6_valueChanged(double arg1);
    
private:
  ros::Publisher pub_sensors_name_,pub_save_,pub_trans_;
  
};


}//namespace gui
}//namespace calibration
}//namespace waytous

#endif  // rostest_MAIN_WINDOW_H