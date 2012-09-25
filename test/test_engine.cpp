/*

 This file is a part of BoGoEngine project.

 Copyright (C) 2012 Dương H. Nguyễn <cmpitg@gmail.com>

 BoGoEngine is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 BoGoEngine is distributed in the hope that it will be useful, but
 WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with BoGoEngine. If not, see <http://www.gnu.org/licenses/>.

*/

#include <gtest/gtest.h>
#include <iostream>
#include "engine.hpp"

using namespace std;
using namespace Glib;
using namespace BoGo;

#define _(s) (ustring ("") + s)
#define __(s) (ustring ("") + s).c_str ()

TEST (TextManipulation, Fallback) {
    EXPECT_STREQ ("xưa", __(processKey(_("xư"), 'a')));
    EXPECT_STREQ ("sửa", __(processKey(_("sử"), 'a')));
}

TEST (TextManipulation, RearrangeAccent) {
    EXPECT_STREQ ("tuấn", __(processKey(_("túâ"), 'n')));
}

int main (int argc, char *argv[]) {
    testing::InitGoogleTest (&argc, argv);
    int dummyVal = RUN_ALL_TESTS ();

    return 0;
}
