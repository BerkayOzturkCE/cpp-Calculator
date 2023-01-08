#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    float on_esit_clicked();

    void on_yedi_clicked();

    void on_sekiz_clicked();

    void on_dokuz_clicked();

    void on_dort_clicked();

    void on_bes_clicked();

    void on_alti_clicked();

    void on_bir_clicked();

    void on_iki_clicked();

    void on_uc_clicked();

    void on_sifir_clicked();

    void on_topla_clicked();

    void on_allclear_clicked();

    void denetle();

    void denetle2();

    void on_bol_clicked();

    void on_cikar_clicked();

    void on_carp_clicked();

    void on_mod_clicked();

    void on_nokta_clicked();


    void on_lineEdit_2_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
