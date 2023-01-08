#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <math.h>
int islem = 0;
float dntl;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::denetle2()
{
    if(ui->lineEdit->text() == QString::number(dntl)){
        ui->lineEdit->setText("");
    }
}

void MainWindow::denetle()
{
    if(ui->lineEdit->text()==".."){
     ui->lineEdit->setText("");
    }
}

void MainWindow::on_yedi_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}

void MainWindow::on_sekiz_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
}

void MainWindow::on_dokuz_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
}

void MainWindow::on_dort_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}

void MainWindow::on_bes_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}

void MainWindow::on_alti_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}

void MainWindow::on_bir_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
}

void MainWindow::on_iki_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}

void MainWindow::on_uc_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}

void MainWindow::on_sifir_clicked()
{
    MainWindow::denetle2();
    MainWindow::denetle();
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}


void MainWindow::on_topla_clicked()
{
    islem = 1;
    dntl = ui->lineEdit->text().toFloat();
}


void MainWindow::on_cikar_clicked()
{
    islem = 2;
    if(ui->lineEdit->text() == "0"){
        denetle();
        ui->lineEdit->setText(ui->lineEdit->text()+"-");
    } else {
    dntl = ui->lineEdit->text().toFloat();
    }

}


void MainWindow::on_carp_clicked()
{
    islem = 3;
    dntl = ui->lineEdit->text().toFloat();
}


void MainWindow::on_bol_clicked()
{
    islem = 4;
    dntl = ui->lineEdit->text().toFloat();

}


void MainWindow::on_mod_clicked()
{
    islem = 5;
    dntl = ui->lineEdit->text().toFloat();
}


float MainWindow::on_esit_clicked()
{

    float sonuc;
    if(islem == 1){
        sonuc = dntl + ui->lineEdit->text().toFloat();
    }
    if(islem == 2){
        sonuc = dntl - ui->lineEdit->text().toFloat();
    }
    if(islem == 3){
        sonuc = dntl * ui->lineEdit->text().toFloat();
    }
    if(islem == 4){
        if(ui->lineEdit->text().toFloat() == 0){
            QMessageBox::information(this,"Dikkat","hiçbir sayı sıfıra bölünemez!");
        }
        else
        {
        sonuc = dntl / ui->lineEdit->text().toFloat();
        }
    }
    if(islem == 5){
      int sayi2 = dntl;
      if(ui->lineEdit->text().toFloat() == 0){
          QMessageBox::information(this,"Dikkat","hiçbir sayının sıfırla modu alınamaz!");
      }
      else
      {
            sonuc = sayi2 % ui->lineEdit->text().toInt();
      }
    }

    ui->lineEdit->setText(QString::number(sonuc));
    return sonuc;
}


void MainWindow::on_allclear_clicked()
{
    ui->lineEdit->setText("0");
    islem = 0;
    dntl = 0;
}

void MainWindow::on_nokta_clicked()
{
    MainWindow::denetle();
    MainWindow::denetle2();
    ui->lineEdit->setText(ui->lineEdit->text()+".");
}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
   // ui->lineEdit->setText(system(time()));
}
