
#pragma once

#include <gtkmm/window.h>
#include <sigc++/sigc++.h>
#include "common.h"
#include "components/dockitem.h"
#include "utils/cairo.h"

DL_NS_BEGIN

class Panel_preview : public Gtk::Window
{
  public:
    Panel_preview();
    ~Panel_preview();

    void init(int index);
    bool show_preview();

    typedef sigc::signal<void> type_signal_close;
    type_signal_close signal_close();

  private:
    void draw_text(const Cairo::RefPtr<Cairo::Context>& cr, int x, int y, const string& text);

    type_signal_close m_signal_close;
    int m_static_count = 0;
    bool m_mouse_in = false;

    int m_window_width;
    int m_window_height;

    int m_width;
    int m_height;

    int m_current_index = -1;
    int m_old_index = -1;

    vector<shared_ptr<DockItem>> m_previewitems;
    bool on_timeout_draw();
    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;

    inline int get_index(const int& mouseX, const int& mouseY);
    bool on_leave_notify_event(GdkEventCrossing* crossing_event);
    bool on_enter_notify_event(GdkEventCrossing* crossing_event);

    bool on_button_press_event(GdkEventButton* event);
    bool on_button_release_event(GdkEventButton* event);
    bool on_motion_notify_event(GdkEventMotion* event);

    static void on_active_window_changed(WnckScreen* screen, WnckWindow* previously_active_window,
                                         gpointer user_data);
};

DL_NS_END
