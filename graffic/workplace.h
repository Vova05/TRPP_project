#ifndef WORKPLACE_H
#define WORKPLACE_H

#include <QMainWindow>
#include <QtCharts>



using namespace QtCharts;
namespace Ui {
class workplace;
}

class workplace : public QMainWindow
{
    Q_OBJECT

public:
    explicit workplace(QWidget *parent = nullptr);
    ~workplace();

private:
    Ui::workplace *ui;
    QGraphicsScene *scene;
     QChart *chrt;
private slots:
    void math_oper();
    void on_Enter_clicked();

};

#endif // WORKPLACE_H
