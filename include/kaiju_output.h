#pragma once
#include <time.h>
#include <wayland-util.h>

struct kaiju_output {
    struct wlr_output *wlr_output;
    struct kaiju_server *server;
    struct timespec last_frame;

    struct wl_listener destroy;
    struct wl_listener frame;

    struct wl_list link;
};