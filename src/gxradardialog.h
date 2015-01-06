#ifndef _GXRADARDLG_H_
#define _GXRADARDLG_H_

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
#include "wx/wx.h"
#endif //precompiled headers



#include "GxRadarUI.h"

class ControlDialog: public ControlDialogBase
{
public:
    ControlDialog(gxradar_pi *ppi, wxWindow* parent);
    ~ControlDialog( );
    void Init();

private:
    void OnClose(wxCloseEvent& event);
    void OnSize( wxSizeEvent& event );
    void OnMove(wxMoveEvent& event);
    void OnOperatingModeClick(wxCommandEvent &event);
    void OnUpdateModeClick(wxCommandEvent &event);
    void OnUpdateTranSlider(wxScrollEvent &event);
    void OnColorChanged( wxColourPickerEvent& event );
    void OnLogModeClicked(wxCommandEvent &event);
    void OnRangeDialogClick(wxCommandEvent &event);
    void OnNoiseDialogClick(wxCommandEvent &event);
    void OnDomeDialogClick(wxCommandEvent &event);
    void OnSentryDialogClick(wxCommandEvent &event);
    void OnNoXmitDialogClick(wxCommandEvent& event);
    void OnIdOKClick(wxCommandEvent& event);

    wxWindow          *pParent;
    gxradar_pi         *pPlugIn;
};

class RangeDialog : public RangeDialogBase
{
public:
    RangeDialog(gxradar_pi *ppi, wxWindow* parent);
    ~RangeDialog();
    void Init();
    void RangeDialogShow();

private:
    void OnClose( wxCloseEvent& event );
    void OnSize( wxSizeEvent& event );
    void OnMove(wxMoveEvent& event );
    void OnRangeControlClick( wxCommandEvent& event );
    void OnRangeSelectClick( wxCommandEvent& event );
    void OnGainModeClick( wxCommandEvent& event );
    void OnUpdateGainSlider( wxScrollEvent& event );
    void OnRangeCloseClick( wxCommandEvent& event );

    wxWindow        *pParent;
    gxradar_pi      *pPlugIn;
};

class NoiseDialog : public NoiseDialogBase
{
public:
    NoiseDialog(gxradar_pi *ppi, wxWindow* parent);
    ~NoiseDialog();
    void Init();
    void NoiseDialogShow();

private:
    void OnClose( wxCloseEvent& event );
    void OnSize( wxSizeEvent& event );
    void OnMove( wxMoveEvent& event );
	void OnSeaClutterOnOffClick( wxCommandEvent& event );
    void OnSeaClutterModeClick( wxCommandEvent& event );
    void OnUpdateSeaClutterSlider( wxScrollEvent& event );
    void OnUpdateRainClutterSlider( wxScrollEvent& event );
    void OnRainClutterModeClick( wxCommandEvent& event );
    void OnCrosstalkModeClick( wxCommandEvent& event );
    void OnNoiseCloseClick( wxCommandEvent& event );

    wxWindow        *pParent;
    gxradar_pi      *pPlugIn;
};

class DomeDialog : public DomeDialogBase
{
public:
    DomeDialog(gxradar_pi *ppi, wxWindow* parent);
    ~DomeDialog();
    void Init();
    void DomeDialogShow();

private:
    void OnClose( wxCloseEvent& event );
    void OnSize( wxSizeEvent& event );
    void OnMove( wxMoveEvent& event );
    void OnUpdateOffset( wxSpinEvent& event );
	void OnDomeSpeedClick( wxCommandEvent& event );
	void OnDomeCloseClick( wxCommandEvent& event );


    wxWindow        *pParent;
    gxradar_pi      *pPlugIn;
};

class SentryDialog : public SentryDialogBase
{
public:
    SentryDialog(gxradar_pi *ppi, wxWindow* parent);
    ~SentryDialog();
    void Init();
    void SentryDialogShow();

private:
    void OnClose( wxCloseEvent& event );
    void OnSize( wxSizeEvent& event );
    void OnMove( wxMoveEvent& event );
    void OnTimedTransmitClick( wxCommandEvent& event );
	 void OnUpdateStandbyMinutes( wxSpinEvent& event );
	 void OnUpdateTransmitMinutes( wxSpinEvent& event );
	 void OnGuardZoneClick( wxCommandEvent& event );
	 void OnUpdateOuterRange( wxSpinEvent& event );
	 void OnUpdateInnerRange( wxSpinEvent& event );
	 void OnPartialArcClick( wxCommandEvent& event );
	 void OnUpdateStartAngle( wxSpinEvent& event );
	 void OnUpdateEndAngle( wxSpinEvent& event );
    void OnColorChanged( wxColourPickerEvent& event );
    void OnUpdateTranSlider(wxScrollEvent& event);
    void OnUpdateSensitivitySlider(wxScrollEvent& event);
	 void OnSentryCloseClick( wxCommandEvent& event);

    wxWindow        *pParent;
    gxradar_pi      *pPlugIn;
};


class NoXmitDialog : public NoXmitDialogBase
{
public:
	 NoXmitDialog(gxradar_pi *ppi, wxWindow* parent);
	 ~NoXmitDialog();
    void Init();
    void NoXmitDialogShow();

private:
    void OnClose(wxCloseEvent& event);
    void OnSize(wxSizeEvent& event);
    void OnMove( wxMoveEvent& event );
    void OnNoXmitZoneClick(wxCommandEvent& event);
	void OnNoXmitZoneOnOffClick(wxCommandEvent& event);
    void OnUpdateStartAngle(wxSpinEvent& event);
    void OnUpdateEndAngle(wxSpinEvent& event);
    void OnColorChanged(wxColourPickerEvent& event);
    void OnUpdateTranSlider(wxScrollEvent& event);
    void OnNoXmitCloseClick(wxCommandEvent& event);
	
    wxWindow        *pParent;
    gxradar_pi      *pPlugIn;
	
};


class SentryAlarmDialog : public SentryAlarmDialogBase
{
public:
    SentryAlarmDialog(gxradar_pi *ppi, wxWindow* parent);
    ~SentryAlarmDialog();
    void Init();
    void SentryAlarmDialogShow();

private:
    void OnClose( wxCloseEvent& event );
    void OnSize( wxSizeEvent& event );
    void OnMove( wxMoveEvent& event );
//    void OnAlarmSilenceClick( wxCommandEvent& event );
//    void OnAlarmAckClick( wxCommandEvent& event );    
	void OnAlarmCloseClick( wxCommandEvent& event );


    wxWindow        *pParent;
    gxradar_pi      *pPlugIn;
};


#endif  //  _GXRADARDLG_H_
