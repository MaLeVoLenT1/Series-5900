#ifndef DETCONFIGURE_H
#define DETCONFIGURE_H

#include <QtGui/QDialog>
#include "ui_detconfigure.h"
#include "mainwindow.h"


class detConfigure : public QDialog
{
    Q_OBJECT

public:
    detConfigure(QWidget *parent = 0);
    ~detConfigure();
    MainWindow dci2c;
    QString busyState;
    QString notBusyState;
    QString completeProcess;

public slots:
	void keyReleaseEvent(QKeyEvent *event);
	void detRange(void);
	void detGain(void);
	void detDIDIgnite(void);
	void detIgn(void);
	void detPolSet(void);
	double detPolSig(void);
	double detHvSig(void);
	double detDIDSig(void);
	double detTCD_I_Sig(void);
	void detDID_I_Ctl(void);
	void detDID_I_OnOffCtl(void);
	double detDID_I_read(void);
	void detDID_V_Ctl(void);
	double detDIDZeroCtl(void);
	void configIO(unsigned int num);
	void detRead(void);
	void pleaseWaitForIt(void);
	void detMoveBaseline(void);
	void detTCDPolarityfCtl(void);
	double FlowH2read(void);
	double FlowAirread(void);
	double FlowSampread(void);
	double FlowMethread(void);
	QString numIn(void);
	QString numInPopUp(void);
	QString numInPolPopUp(void);
	QString numInGainPopUp(void);
	void deleteNumIn(QString);
	void deleteNumPop(QString txt);
	void deleteGainPop(QString txt);
	void deletePolPop(QString txt);
	void powerOnInitSettings(void);
	void setSettings(void);
	void saveDetSettings(void);
	void processDid_line(QByteArray line, unsigned int nex);
	void getDidSettings(void);
	void setSettings2(void);

private:
    Ui::detConfigureClass ui;
};

#endif // DETCONFIGURE_H
