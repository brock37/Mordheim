#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    if( QFontDatabase::addApplicationFont("Font\\firstv2.ttf") == -1)
    {
        QMessageBox::critical(this, "Erreur", "Erreur de chargement de la police");
    }

    m_curHostName= "localhost";
    m_curUserName= "root";
    m_curPassword= "";
    m_curDataBaseName= "mordheim";

    db = new QSqlDatabase(QSqlDatabase::addDatabase("QMYSQL"));
    connectionBDD(m_curHostName, m_curUserName, m_curPassword, m_curDataBaseName);
    std::cout << std::flush;

    widgetProfil= new LectureProfile;
    dialAjoutPersonnage= new Widget(0, db);

    widgetAcceuil= new Acceuil;
    this->setCentralWidget(widgetAcceuil);

    QObject::connect(widgetAcceuil,SIGNAL(signalUnites()) , this, SLOT( voirProfil()) );

}


MainWindow::~MainWindow()
{
    db->close();
    delete ui;
}


bool MainWindow::connectionBDD(QString hostName, QString userName, QString password, QString dataBaseName)
{
    //connexion a la BDD

    db->setHostName(hostName);
    db->setUserName(userName);
    db->setPassword(password);
    db->setDatabaseName(dataBaseName);

    if(!db->open())
    {
        std::cout << "La connexion a échouée, désolé" << std::endl ;
        qDebug() << db->lastError();
        return false;
    }
    std::cout << "Vous êtes maintenant connecté à " << q2c(db->hostName()) << std::endl;
    return true;
}


void MainWindow::on_actionBase_de_donn_es_triggered()
{
    DialogConnectionBDD *dialConnection= new DialogConnectionBDD(&m_curHostName, this);
    dialConnection->show();
}


void MainWindow::on_action_Quitter_2_triggered()
{
    this->close();
}


void MainWindow::on_actionAjouter_Profil_triggered()
{

    this->setCentralWidget( dialAjoutPersonnage);
}

void MainWindow::voirProfil()
{
    this->setCentralWidget( widgetProfil);
}
