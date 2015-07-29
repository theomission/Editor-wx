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
#include "DialogEvtCmdMP.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdMP::DialogEvtCmdMP(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdMP::DialogEvtCmdMP
    szOperand_staticbox = new wxStaticBox(this, wxID_ANY, _("Operand"));
    szTarget_staticbox = new wxStaticBox(this, wxID_ANY, _("Target"));
    rbtnTargetParty = new wxRadioButton(this, wxID_ANY, _("Whole group"));
    rbtnTargetFixed = new wxRadioButton(this, wxID_ANY, _("Fixed"));
    const wxString chTargetFixed_choices[] = {
        _("<set by wxGlade>"),
    };
    chTargetFixed = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chTargetFixed_choices);
    rbtnTargetVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcTargetVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnTargetVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    const wxString rbtnOperation_choices[] = {
        _("Increase MP"),
        _("Decrease MP"),
    };
    rbtnOperation = new wxRadioBox(this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, 2, rbtnOperation_choices, 1, wxRA_SPECIFY_ROWS);
    rbtnOperandConstant = new wxRadioButton(this, wxID_ANY, _("Constant"));
    spinOperandConstant = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnOperandVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcOperandVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnOperandVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdMP::set_properties()
{
    // begin wxGlade: DialogEvtCmdMP::set_properties
    SetTitle(_("Change MP"));
    chTargetFixed->SetMinSize(wxSize(50, -1));
    chTargetFixed->SetSelection(0);
    tcTargetVariable->SetMinSize(wxSize(50, -1));
    rbtnOperation->SetSelection(0);
    spinOperandConstant->SetMinSize(wxSize(50, -1));
    tcOperandVariable->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdMP::do_layout()
{
    // begin wxGlade: DialogEvtCmdMP::do_layout
    wxBoxSizer* szMP = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    szOperand_staticbox->Lower();
    wxStaticBoxSizer* szOperand = new wxStaticBoxSizer(szOperand_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszOperand = new wxFlexGridSizer(2, 2, 2, 2);
    wxBoxSizer* szOperandVariable = new wxBoxSizer(wxHORIZONTAL);
    szTarget_staticbox->Lower();
    wxStaticBoxSizer* szTarget = new wxStaticBoxSizer(szTarget_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszTarget = new wxFlexGridSizer(3, 2, 2, 2);
    wxBoxSizer* szTargetVAriable = new wxBoxSizer(wxHORIZONTAL);
    gszTarget->Add(rbtnTargetParty, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszTarget->Add(0, 0, 1, wxEXPAND, 0);
    gszTarget->Add(rbtnTargetFixed, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszTarget->Add(chTargetFixed, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszTarget->Add(rbtnTargetVariable, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szTargetVAriable->Add(tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTargetVAriable->Add(btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(szTargetVAriable, 1, wxEXPAND, 0);
    gszTarget->AddGrowableCol(1);
    szTarget->Add(gszTarget, 1, wxEXPAND, 0);
    szMP->Add(szTarget, 0, wxEXPAND|wxLEFT|wxRIGHT, 1);
    szMP->Add(rbtnOperation, 0, wxEXPAND|wxLEFT|wxRIGHT, 1);
    gszOperand->Add(rbtnOperandConstant, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(spinOperandConstant, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(rbtnOperandVariable, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szOperandVariable->Add(tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szOperandVariable->Add(btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszOperand->Add(szOperandVariable, 1, wxEXPAND, 0);
    gszOperand->AddGrowableCol(1);
    szOperand->Add(gszOperand, 1, wxEXPAND, 0);
    szMP->Add(szOperand, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szBottom->Add(btnOK, 0, wxALIGN_BOTTOM|wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALIGN_BOTTOM|wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALIGN_BOTTOM|wxALL, 1);
    szMP->Add(szBottom, 1, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szMP);
    szMP->Fit(this);
    Layout();
    // end wxGlade
}

