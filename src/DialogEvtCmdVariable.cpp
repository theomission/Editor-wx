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
#include "DialogEvtCmdVariable.h"

// begin wxGlade: ::extracode
// end wxGlade


DialogEvtCmdVariable::DialogEvtCmdVariable(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER)
{
    // begin wxGlade: DialogEvtCmdVariable::DialogEvtCmdVariable
    szOperand_staticbox = new wxStaticBox(this, wxID_ANY, _("Operand"));
    szSwitch_staticbox = new wxStaticBox(this, wxID_ANY, _("Switch"));
    rbtnSet = new wxRadioButton(this, wxID_ANY, _("Set"));
    tcSwitchSet = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnSwitchSet = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    rbtnoSwitchRange = new wxRadioButton(this, wxID_ANY, _("Range from"));
    spinSwitchRange1 = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    tcSwitchRange = new wxStaticText(this, wxID_ANY, _("to"));
    spinSwitchRange2 = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnSwitchVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcSwitchVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnSwitchVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    stSwitchVariable = new wxStaticText(this, wxID_ANY, _("variable"));
    const wxString rbOperation_choices[] = {
        _("Replace"),
        _("Addiction"),
        _("Substraction"),
        _("Multiplication"),
        _("Division"),
        _("Remainder"),
    };
    rbOperation = new wxRadioBox(this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, 6, rbOperation_choices, 4, wxRA_SPECIFY_COLS);
    rbtnOperandConstant = new wxRadioButton(this, wxID_ANY, _("Constant"));
    spinOperandConstant = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnOperandVariableA = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcOperandVariableA = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnOperandVariableA = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    rbtnOperandVariableB = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcOperandVariableB = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnOperandVariableB = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    stOperandVarVaiableB = new wxStaticText(this, wxID_ANY, _("variable"));
    rbtnOperandRandom = new wxRadioButton(this, wxID_ANY, _("Random"));
    spinOperandRandom1 = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    spinOperandRandom2 = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnOperandObject = new wxRadioButton(this, wxID_ANY, _("Object"));
    const wxString chOperandObject_choices[] = {
        _("<set by wxGlade>"),
    };
    chOperandObject = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chOperandObject_choices);
    const wxString chOperandObject2_choices[] = {
        _("<set by wxGlade>"),
    };
    chOperandObject2 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chOperandObject2_choices);
    rbtnOperandActor = new wxRadioButton(this, wxID_ANY, _("Actor"));
    const wxString chOperandActor_choices[] = {
        _("<set by wxGlade>"),
    };
    chOperandActor = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chOperandActor_choices);
    const wxString chOperandActor2_choices[] = {
        _("<set by wxGlade>"),
    };
    chOperandActor2 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chOperandActor2_choices);
    rbtnOperandSprite = new wxRadioButton(this, wxID_ANY, _("Sprite"));
    const wxString chOperandSprite_choices[] = {
        _("<set by wxGlade>"),
    };
    chOperandSprite = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chOperandSprite_choices);
    const wxString chOperandSprite2_choices[] = {
        _("<set by wxGlade>"),
    };
    chOperandSprite2 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chOperandSprite2_choices);
    rbtnOperandPut = new wxRadioButton(this, wxID_ANY, _("Put"));
    const wxString chOperandPut_choices[] = {
        _("<set by wxGlade>"),
    };
    chOperandPut = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, chOperandPut_choices);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdVariable::set_properties()
{
    // begin wxGlade: DialogEvtCmdVariable::set_properties
    SetTitle(_("Variable operations"));
    tcSwitchSet->SetMinSize(wxSize(50, -1));
    spinSwitchRange1->SetMinSize(wxSize(50, -1));
    spinSwitchRange2->SetMinSize(wxSize(50, -1));
    tcSwitchVariable->SetMinSize(wxSize(50, -1));
    rbOperation->SetSelection(0);
    spinOperandConstant->SetMinSize(wxSize(50, -1));
    tcOperandVariableA->SetMinSize(wxSize(50, -1));
    tcOperandVariableB->SetMinSize(wxSize(50, -1));
    spinOperandRandom1->SetMinSize(wxSize(50, -1));
    spinOperandRandom2->SetMinSize(wxSize(50, -1));
    chOperandObject->SetMinSize(wxSize(50, -1));
    chOperandObject->SetSelection(0);
    chOperandObject2->SetMinSize(wxSize(50, -1));
    chOperandObject2->SetSelection(0);
    chOperandActor->SetMinSize(wxSize(50, -1));
    chOperandActor->SetSelection(0);
    chOperandActor2->SetMinSize(wxSize(50, -1));
    chOperandActor2->SetSelection(0);
    chOperandSprite->SetMinSize(wxSize(50, -1));
    chOperandSprite->SetSelection(0);
    chOperandSprite2->SetMinSize(wxSize(50, -1));
    chOperandSprite2->SetSelection(0);
    chOperandPut->SetMinSize(wxSize(50, -1));
    chOperandPut->SetSelection(0);
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdVariable::do_layout()
{
    // begin wxGlade: DialogEvtCmdVariable::do_layout
    wxBoxSizer* szVariable = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    szOperand_staticbox->Lower();
    wxStaticBoxSizer* szOperand = new wxStaticBoxSizer(szOperand_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszOperand = new wxFlexGridSizer(8, 3, 2, 2);
    wxBoxSizer* szOperandRandom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szOperandVariableB = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szOperandVariableA = new wxBoxSizer(wxHORIZONTAL);
    szSwitch_staticbox->Lower();
    wxStaticBoxSizer* szSwitch = new wxStaticBoxSizer(szSwitch_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszSwitch = new wxFlexGridSizer(3, 3, 2, 2);
    wxBoxSizer* szSwitchVariable = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szSwitchRange = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szSwitchSet = new wxBoxSizer(wxHORIZONTAL);
    gszSwitch->Add(rbtnSet, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szSwitchSet->Add(tcSwitchSet, 1, wxALIGN_CENTER_VERTICAL, 0);
    szSwitchSet->Add(btnSwitchSet, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszSwitch->Add(szSwitchSet, 1, wxEXPAND, 0);
    gszSwitch->Add(0, 0, 1, wxEXPAND, 0);
    gszSwitch->Add(rbtnoSwitchRange, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szSwitchRange->Add(spinSwitchRange1, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT, 1);
    szSwitchRange->Add(tcSwitchRange, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 1);
    szSwitchRange->Add(spinSwitchRange2, 1, wxLEFT, 1);
    gszSwitch->Add(szSwitchRange, 1, wxEXPAND, 0);
    gszSwitch->Add(0, 0, 1, wxEXPAND, 0);
    gszSwitch->Add(rbtnSwitchVariable, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szSwitchVariable->Add(tcSwitchVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szSwitchVariable->Add(btnSwitchVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszSwitch->Add(szSwitchVariable, 1, wxEXPAND, 0);
    gszSwitch->Add(stSwitchVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszSwitch->AddGrowableCol(1);
    gszSwitch->AddGrowableCol(2);
    szSwitch->Add(gszSwitch, 1, wxEXPAND, 0);
    szVariable->Add(szSwitch, 0, wxEXPAND|wxLEFT|wxRIGHT, 1);
    szVariable->Add(rbOperation, 0, wxEXPAND|wxLEFT|wxRIGHT, 1);
    gszOperand->Add(rbtnOperandConstant, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(spinOperandConstant, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(0, 0, 1, wxEXPAND, 0);
    gszOperand->Add(rbtnOperandVariableA, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szOperandVariableA->Add(tcOperandVariableA, 1, wxALIGN_CENTER_VERTICAL, 0);
    szOperandVariableA->Add(btnOperandVariableA, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszOperand->Add(szOperandVariableA, 1, wxEXPAND, 0);
    gszOperand->Add(0, 0, 1, wxEXPAND, 0);
    gszOperand->Add(rbtnOperandVariableB, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szOperandVariableB->Add(tcOperandVariableB, 1, wxALIGN_CENTER_VERTICAL, 0);
    szOperandVariableB->Add(btnOperandVariableB, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszOperand->Add(szOperandVariableB, 1, wxEXPAND, 0);
    gszOperand->Add(stOperandVarVaiableB, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszOperand->Add(rbtnOperandRandom, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    szOperandRandom->Add(spinOperandRandom1, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT, 1);
    szOperandRandom->Add(spinOperandRandom2, 1, wxALIGN_CENTER_VERTICAL|wxLEFT, 1);
    gszOperand->Add(szOperandRandom, 1, wxEXPAND, 0);
    gszOperand->Add(0, 0, 1, wxEXPAND, 0);
    gszOperand->Add(rbtnOperandObject, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(chOperandObject, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(chOperandObject2, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(rbtnOperandActor, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(chOperandActor, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(chOperandActor2, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(rbtnOperandSprite, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(chOperandSprite, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(chOperandSprite2, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(rbtnOperandPut, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(chOperandPut, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 0);
    gszOperand->Add(0, 0, 1, wxEXPAND, 0);
    gszOperand->AddGrowableCol(1);
    gszOperand->AddGrowableCol(2);
    szOperand->Add(gszOperand, 1, wxEXPAND, 0);
    szVariable->Add(szOperand, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT, 1);
    szBottom->Add(btnOK, 0, wxALIGN_BOTTOM|wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALIGN_BOTTOM|wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALIGN_BOTTOM|wxALL, 1);
    szVariable->Add(szBottom, 1, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3);
    SetSizer(szVariable);
    szVariable->Fit(this);
    Layout();
    // end wxGlade
}

