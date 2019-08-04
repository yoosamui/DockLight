#pragma once

#define WNCK_I_KNOW_THIS_IS_UNSTABLE 1

#include <glibmm/timer.h>
#include <gtkmm/window.h>
#include <libwnck/libwnck.h>
//#include "DockItem.h"
#include "common.h"

#include <X11/X.h>
#include <gdk/gdkx.h>

DL_NS_BEGIN
namespace wnck_util
{
    void activate_window(WnckWindow* window);
    bool is_window_on_current_desktop(WnckWindow* window);
    string get_window_name(WnckWindow* window);

    //
    // bool is_windowOnCurrentDesktop(WnckWindow* window);
    // voVid ActivateWindow(WnckWindow* window);
    // WnckWindow* get_ActiveWindowIfAny(DockItem* item);
    ////void SelectWindow(WnckWindow* window);
    // void HomeCloseAllWindows();
    // void HomeCloseAllExceptActive();
    // void HomeMinimizeAllExceptActive();
    // void HomeMinimizeAll();
    // void HomeUnMinimizeAll();
    // bool isExistsUnMaximizedWindowsByDockItem(DockItem* dockitem);
    // bool isExistsMinimizedWindowsByDockItem(DockItem* dockitem);
    // void closeAllExceptActiveByDockItem(DockItem* dockitem);
    // void closeAllByDockItem(DockItem* dockitem);
    // void closeByWindow(WnckWindow *window);
    // void minimizeAllExceptActiveByDockItem(DockItem* dockitem);
    // void minimizeAllByDockItem(DockItem* dockitem);
    // void unMinimizeAllByDockItem(DockItem* dockitem);
    // bool isExitsActivetWindowByDockItem(DockItem* dockitem);
    // int isExitstWindowsByDockItem(DockItem* dockitem);
    // int windowscount();
    // WnckWindow* get_Active();
    // bool isWindowExists(XID xid);
    // bool isExistsMinimizedWindows();
    // void hideWindow(Gtk::Window* instance);
    // int minimizedWindowscount();
    // int unMinimizedWindowsCount();
    // bool FullscreenActive();
    // WnckWindow* get_ExistingWindowDock();
    // std::string get_windowName(WnckWindow* window);
}  // namespace wnck_util

DL_NS_END

