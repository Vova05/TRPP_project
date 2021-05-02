#include "workplace.h"
#include "ui_workplace.h"
#include <qmath.h>
#include "mathematic.h"
#include <QGraphicsView>

workplace::workplace(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::workplace)

{
    ui->setupUi(this);
    connect(ui->pow1,SIGNAL(clicked()),this,SLOT(math_oper()));
    connect(ui->pow2,SIGNAL(clicked()),this,SLOT(math_oper()));
    connect(ui->abs1,SIGNAL(clicked()),this,SLOT(math_oper()));
    connect(ui->cos,SIGNAL(clicked()),this,SLOT(math_oper()));
    connect(ui->sin,SIGNAL(clicked()),this,SLOT(math_oper()));
    connect(ui->Enter,SIGNAL(clicked()),this,SLOT(on_Enter_clicked()));
    int x,y,z;
    x=20;

    y=x;
    z=(x/5)+1;

        chrt = new QChart;

        ui->vchrt->setChart(chrt); // связь графика с элементом отображения
        chrt->setTitle("график");
        // ось Х

        QValueAxis *axisX = new QValueAxis;
        axisX->setRange(-x,x); // диапазон значений на оси
        axisX->setTickCount(z); // число линий сетки
        axisX->setLabelFormat("%g"); // формат отображения чисел на оси
        // ось Y
        QValueAxis *axisY = new QValueAxis;
        axisY->setRange(-y, y);
        axisY->setTickCount(z);
        axisY->setLabelFormat("%g");

        // кривые, отображаемые на графике
        QLineSeries* series1 = new QLineSeries();
       // QLineSeries* series2 = new QLineSeries();
        // построение графиков функций

        chrt->addSeries(series1);
   //     chrt->addSeries(series2);
        // устанавливаем оси для каждого графика
        chrt->setAxisX(axisX, series1);
        chrt->setAxisY(axisY, series1);
      //  chrt->setAxisX(axisX, series2);
      //  chrt->setAxisY(axisY, series2);

}

workplace::~workplace()
{
    delete ui;
}

void workplace::math_oper()
{
QPushButton *button=(QPushButton *)sender();
QString new_line;
new_line=(ui->lineEdit->text()+button->text());
ui->lineEdit->setText(new_line);

}

void workplace::on_Enter_clicked()
{
    QPushButton *button=(QPushButton *)sender();
    QString new_line="Enter";
    new_line=(ui->lineEdit->text());
    int x=40,y;
    int z=x/5+1;
if(new_line!="Enter"){

   x=20;
 y=x;
QString string;
string=ui->lineEdit->text();
int size=string.size();
char array_res[100];
for(int i=0;i<string.size();i++){
    array_res[i]=string[i].toLatin1();
}

int a=0;
int arr[9]={'\0'};
bool chec_out =false;
bool chec_out1=false;
bool chec_out2=false;
bool chec_out3=false;
bool chec_out4=false;
bool chec_out5=false;
bool chec_in=false;
int ab[2];
int n=0,pred=0;
int chec3=0;
for(int i=0;string[i]!='\0';i++){
    int chec1=-1,chec2=0;
   if(string[i]=='^'){
        chec3=i+1;
    }
    if(string[i]=='|'){
       chec_out3=true;
    }
    if (string[i]=='c'){
        chec_out4=true;
        n=i;
    }
    if(string[i]=='s'){
        chec_out5=true;
        n=i;
    }
    while((string[i]>=48 && string[i]<=57)||(string[i]=='-')){
        if(chec1==-1){
            chec1=i;
        }
        chec2++;
        i++;
    }
    if(chec1!=-1&&chec1!=chec3){
        QString string_tmp=string.mid(chec1,chec2);

        int x=string_tmp.toInt();
        if(string[i]!='x'||i==size||n!=0){
            if(n!=0){
                if(string[i+1]=='c')
                {  arr[5]=arr[5]+pred;}
                if(string[i+1]=='s'){
                    arr[6]=arr[6]+pred;
                }
                arr[0]=arr[0]-pred;
                n=0;
            }else{
            arr[0]=arr[0]+x;
            pred=x;
            }
        }else{
            if(i+1<size){
                if(string[i+1]=='^'){
                    if(i+2<=size){
                        if(string[i+2]=='2'){
                            arr[2]=arr[2]+x;
                        }else{
                            if(string[i+2]=='1'){
                                arr[3]=arr[3]+x;
                                i+=4;
                            }
                        }
                    }
                }else{
                    if(string[i+1]!='|'){
                        arr[1]=arr[1]+x;
                    }else{
                        if(chec_out4!=false){
                            arr[6]+=x;
                            chec_out4=false;
                        }else{
                            if(chec_out5!=false){
                                arr[8]+=x;
                                chec_out5=false;
                            }else{
                                arr[4]=arr[4]+x;
                            }
                        }

                    }
                }
            }else{
                if(string[i+1]!='|'&&string[i+1]!=')'){
                    arr[1]=arr[1]+x;

                }else{
                    arr[4]=arr[4]+x;

                }
            }
        }
        chec2=0;
        chec3=0;
  }
    if(i+1<size&&string[i]=='x'){
        if(string[i+1]=='^'){
            if(i+2<=size){
                if(string[i+2]=='2'){
                     chec_out=true;
                }else{
                    if(string[i+2]=='1'){
                         chec_out1=true;
                        i+=4;
                    }
                }
            }
        }else{
            chec_out2=true;
        }
    }else{
        if(string[i]=='x'){
            chec_out2=true;
        }
    }


}
if(chec_out2==true&&arr[1]==0&&arr[6]!=1&&chec_out4!=true&&arr[5]!=0&&chec_out5!=true){
    arr[1]=1;
}
if(chec_out==true&&arr[2]==0){
    arr[2]=1;
}
if(chec_out1==true&&arr[3]==0){
    arr[3]=1;
}
if(chec_out3==true&&arr[4]==0){
    arr[4]=1;
}
if(chec_out4==true&&arr[5]==0){
    arr[5]=1;
}
if(chec_out5==true&&arr[7]==0){
    arr[7]=1;
    if(arr[8]==0){
        arr[8]=1;
    }
}

chrt = new QChart;

ui->vchrt->setChart(chrt); // связь графика с элементом отображения
chrt->setTitle("график");
// ось Х

QValueAxis *axisX = new QValueAxis;
axisX->setRange(-x,x); // диапазон значений на оси
axisX->setTickCount(z); // число линий сетки
axisX->setLabelFormat("%g"); // формат отображения чисел на оси
// ось Y
QValueAxis *axisY = new QValueAxis;
axisY->setRange(-y, y);
axisY->setTickCount(z);
axisY->setLabelFormat("%g");

// кривые, отображаемые на графике
QLineSeries* series1 = new QLineSeries();
QLineSeries* series2 = new QLineSeries();
// построение графиков функций

for(int i = -x; i<=x; i++)
{
if(chec_out1==true){
     series1->append(i,arr[3]*sqrt(i)+arr[1]*i+arr[0]);
}else{
    if(chec_out3==true){
        series1->append(i,abs(arr[4]*i)+arr[0]);
    }else{
        float tmp=arr[2]*pow(i,2)+arr[1]*i+arr[0]+arr[5]*cos(arr[6]*i)+arr[7]*sin(arr[8]*i);
        series1->append(i,tmp);
       // series1->append(i,cos(i));
    }
}


}

//for (int i=-x;i<=x;i++){
  //  series1->append(i,mathematic::resolt_math(array_res,i));
//}
        //series2->append(i, 1.7*qSin(2*M_PI*i/37+M_PI/5) );


// связываем график с построенными кривыми
chrt->addSeries(series1);
//chrt->addSeries(series2);
// устанавливаем оси для каждого графика
chrt->setAxisX(axisX, series1);
chrt->setAxisY(axisY, series1);
chrt->setAxisX(axisX, series2);
chrt->setAxisY(axisY, series2);
//ui->label_2->setNum(arr[0]);
//ui->label_3->setNum(arr[a-1]);
//ui->label_4->setNum(a);

string.clear();
}

}

