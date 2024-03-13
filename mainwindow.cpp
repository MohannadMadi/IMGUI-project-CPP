#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "sparePart.h"
#include "supplier.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeWidget_itemActivated(QTreeWidgetItem *item, int column)
{

}

