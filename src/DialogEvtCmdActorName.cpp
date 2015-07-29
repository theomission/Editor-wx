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

#include <wx/wx.h>
#include "DialogEvtCmdActorName.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdActorName::DialogEvtCmdActorName(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdActorName::DialogEvtCmdActorName
    szName_staticbox = new wxStaticBox(this, wxID_ANY, _("Name"));
    szActor_staticbox = new wxStaticBox(this, wxID_ANY, _("Actor"));
    const wxString chActor_choices[] = {
        _("<set by wxGlade>"),
    };
    chActor = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chActor_choices);
    tcName = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdActorName::set_properties()
{
    // begin wxGlade: DialogEvtCmdActorName::set_properties
    SetTitle(_("Change actor name"));
    chActor->SetMinSize(wxSize(50, -1));
    chActor->SetSelection(0);
    tcName->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdActorName::do_layout()
{
    // begin wxGlade: DialogEvtCmdActorName::do_layout
    wxBoxSizer* szActorName = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    szName_staticbox->Lower();
    wxStaticBoxSizer* szName = new wxStaticBoxSizer(szName_staticbox, wxHORIZONTAL);
    szActor_staticbox->Lower();
    wxStaticBoxSizer* szActor = new wxStaticBoxSizer(szActor_staticbox, wxHORIZONTAL);
    szActor->Add(chActor, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szActor, 1, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szName->Add(tcName, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szName, 1, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szActorName->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szActorName->Add(szBottom, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szActorName);
    szActorName->Fit(this);
    Layout();
    // end wxGlade
}

