/*
 * Sub^3 is a free software submarine simulator focused on realism.
 * Copyright (C) 2015 Nolan Poe
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "graphics/SubScreen.hpp"

#include <SFGUI/Widgets.hpp>

class SubWindow;

//This class is the license/credits screen for the game.
class LicenseScreen : public SubScreen
{
public:
    LicenseScreen(SubWindow& subWindow);
    virtual ~LicenseScreen();

    void setupScreen(sfg::Desktop& desktop, std::vector<std::string> args);

    void updateScreen(float dt);

private:
    SubWindow& mSubWindow;
    sfg::Window::Ptr mLicenseWindow;

    void backHandler();

    void centerWindow();
};
