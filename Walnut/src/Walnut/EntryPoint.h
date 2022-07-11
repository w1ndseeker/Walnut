#pragma once

#include "Application.h"

extern Walnut::Application *Walnut::CreateApplication(int argc, char **argv);

int main(int argc, char **argv) {
    Walnut::g_ApplicationRunning = true;
    while (Walnut::g_ApplicationRunning) {
        Walnut::Application *app = Walnut::CreateApplication(argc, argv);
        app->Run();
        delete app;
    }

    return 0;
}
