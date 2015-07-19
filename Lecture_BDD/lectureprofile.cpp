#include "lectureprofile.h"
#include "ui_lectureprofile.h"

LectureProfile::LectureProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LectureProfile)
{
    ui->setupUi(this);

}

LectureProfile::~LectureProfile()
{
    delete ui;
}
