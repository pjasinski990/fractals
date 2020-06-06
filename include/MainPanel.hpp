#pragma once

#include <wx/wx.h>
class Canvas;
class MenuPanel;

class MainPanel: public wxPanel
{
public:
    MainPanel(wxWindow* parent);
    ~MainPanel();

    void setInfoText(const std::string& text);
    Canvas* getCanvas() {return m_canvas;}

private:
    Canvas* m_canvas;
    MenuPanel* m_menu_panel;
    wxTextCtrl* m_info;

};