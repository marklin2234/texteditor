#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Text_Editor.H>

class EditorWindow : public Fl_Double_Window {
    public:
        EditorWindow(int w, int h, const char* t);

        Fl_Window *replace_dlg;
        Fl_Input *replace_find;
        Fl_Input *replace_with;
        Fl_Button *replace_all;
        Fl_Return_Button *replace_next;
        Fl_Button *replace_cancel;

        Fl_Text_Editor *editor;
        char search[256];
    private:
        void createMenuBar();
};