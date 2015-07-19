#ifndef LECTUREPROFILE_H
#define LECTUREPROFILE_H

#include <QWidget>

namespace Ui {
class LectureProfile;
}

class LectureProfile : public QWidget
{
    Q_OBJECT

public:
    explicit LectureProfile(QWidget *parent = 0);
    ~LectureProfile();

private:
    Ui::LectureProfile *ui;
};

#endif // LECTUREPROFILE_H
