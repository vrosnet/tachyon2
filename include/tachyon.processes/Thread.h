/* Copyright (c) 2010 by Markus Duft <mduft@gentoo.org>
 * This file is part of the 'tachyon' operating system. */

#pragma once

#include <tachyon.platform/architecture.h>

#include <tachyon.processes/Process.h>
#include <tachyon.memory/SmartPointer.h>

class Thread {
    SmartPointer<Process> parent;
public:
    Thread(SmartPointer<Process>& par)
        :   parent(par) {}

    void switchTo();
};
