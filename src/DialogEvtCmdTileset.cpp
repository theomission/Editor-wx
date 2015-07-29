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
#include "DialogEvtCmdTileset.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdTileset::DialogEvtCmdTileset(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdTileset::DialogEvtCmdTileset
    szChipSet_staticbox = new wxStaticBox(this, wxID_ANY, _("ChipSet"));
    const wxString chChipSet_choices[] = {
        _("<set by wxGlade>"),
    };
    chChipSet = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chChipSet_choices);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdTileset::set_properties()
{
    // begin wxGlade: DialogEvtCmdTileset::set_properties
    SetTitle(_("Change map tileset"));
    chChipSet->SetSelection(0);
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdTileset::do_layout()
{
    // begin wxGlade: DialogEvtCmdTileset::do_layout
    wxBoxSizer* szTileset = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    szChipSet_staticbox->Lower();
    wxStaticBoxSizer* szChipSet = new wxStaticBoxSizer(szChipSet_staticbox, wxHORIZONTAL);
    szChipSet->Add(chChipSet, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTileset->Add(szChipSet, 1, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szTileset->Add(szBottom, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szTileset);
    szTileset->Fit(this);
    Layout();
    // end wxGlade
}

