/*
* IBus-Bogo - The Vietnamese IME for IBus
*
* Copyright (c) 2012- Long T. Dam <longdt90@gmail.com>,
*                     Trung Ngo <ndtrung4419@gmail.com>
*
* This file is part of IBus-BoGo Project
* IBus-Bogo is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* IBus-BoGo is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with IBus-BoGo.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <engine.hpp>
#include <charset.hpp>

using namespace BoGo;

extern "C" const char* c_processKey  (char* text, char key) {
    ustring utext = ustring(text);
    return processKey (utext, key).c_str ();
}

extern "C" const char* c_utf8ToCharset(const char* text, CharsetT charset) {
    ustring utext = ustring(text);
    const char * result = utf8ToCharset (utext, charset);
    return result;
}
