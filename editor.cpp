#include <FL/Fl.H>
#include "editorWindow.cpp"

int main(int argc, char **argv) {
  textbuf = new Fl_Text_Buffer;
  EditorWindow *w = new EditorWindow(640, 640, "New Window");

  w->editor->buffer(textbuf);
  w->editor->textfont(FL_COURIER);
  textbuf->add_modify_callback(changed_cb, w);
  textbuf->call_modify_callbacks();

  w->show(1, argv);
  if (argc > 1) load_file(argv[1], -1);
  return Fl::run();
}
