// -*- C++ -*-
//
// generated by wxGlade not found
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef DIALOGEVTCMD_H
#define DIALOGEVTCMD_H

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/intl.h>

#ifndef APP_CATALOG
#define APP_CATALOG "appEditor"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/notebook.h>
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class DialogEvtCmd: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmd::ids
    // end wxGlade

    DialogEvtCmd(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmd::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmd::attributes
    wxButton* btnMessage;
    wxButton* btnEquipment;
    wxButton* btnMessageOptions;
    wxButton* btnHP;
    wxButton* btnFaceGraphic;
    wxButton* btnMP;
    wxButton* btnChoice;
    wxButton* btnStatus;
    wxButton* btnNumberInput;
    wxButton* btnRecover;
    wxButton* btnSwitch;
    wxButton* btnDamage;
    wxButton* btnVariable;
    wxButton* btnActorName;
    wxButton* btnTimer;
    wxButton* btnActorTitle;
    wxButton* btnMoney;
    wxButton* btnActorGraphic;
    wxButton* btnItem;
    wxButton* btnActorFaceGraphic;
    wxButton* btnParty;
    wxButton* btnVehicleGraphic;
    wxButton* btnExperience;
    wxButton* btnSystemMusic;
    wxButton* btnLevel;
    wxButton* btnSystemSound;
    wxButton* btnParameter;
    wxButton* btnSystemGraphic;
    wxButton* btnSkill;
    wxButton* btnTransition;
    wxPanel* pnEvtCmd1;
    wxButton* btnBattle;
    wxButton* btnTone;
    wxButton* btnCommerce;
    wxButton* btnFlashScreen;
    wxButton* btnInn;
    wxButton* btnShake;
    wxButton* btnActorNameInput;
    wxButton* btnMoveScreen;
    wxButton* btnTeleport;
    wxButton* btnWeather;
    wxButton* btnMemorizePlace;
    wxButton* btnPicture;
    wxButton* btnGoToMemorizedPlace;
    wxButton* btnMovePicture;
    wxButton* btnVehicle;
    wxButton* btnDeletePicture;
    wxButton* btnVehiclePosition;
    wxButton* btnAnimation;
    wxButton* btnEventPosition;
    wxButton* btnActorTransparency;
    wxButton* btnSwapEvents;
    wxButton* btnFlashCharacter;
    wxButton* btnGetTerrainID;
    wxButton* btnEventMovement;
    wxButton* btnGetPositionID;
    wxButton* btnMoveAll;
    wxButton* btnBlankScreen;
    wxButton* btnStopAll;
    wxButton* btnShowScreen;
    wxButton* btnWait;
    wxPanel* pnEvtCmd2;
    wxButton* btnPlayMusic;
    wxButton* btnSaveMenu;
    wxButton* btnFadeMusic;
    wxButton* btnSaveMenuPermissions;
    wxButton* btnMemorizeMusic;
    wxButton* btnSystemMenu;
    wxButton* btnPlayMemorizedMusic;
    wxButton* btnSystemMenuPermissions;
    wxButton* btnPlaySound;
    wxButton* btnConditions;
    wxButton* btnPlayVideo;
    wxButton* btnLabel;
    wxButton* btnKeyAssignment;
    wxButton* btnGoToLabel;
    wxButton* btnTileset;
    wxButton* btnLoop;
    wxButton* btnPanorama;
    wxButton* btnBreakLoop;
    wxButton* btnEncounterRate;
    wxButton* btnStopEventProcess;
    wxButton* btnTile;
    wxButton* btnDeleteEventTemporally;
    wxButton* btnTeleportPlace;
    wxButton* btnCallEvent;
    wxButton* btnTeleportPermissions;
    wxButton* btnNote;
    wxButton* btnEscapePlace;
    wxButton* btnGameOver;
    wxButton* btnEscapePermissions;
    wxButton* btnGoToTitle;
    wxPanel* pnEvtCmd3;
    wxNotebook* pnEvtCmd;
    wxButton* btnClose;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMD_H
