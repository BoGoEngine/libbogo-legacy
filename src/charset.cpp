/*

  This file is a part of BoGoEngine project.

  Copyright (C) 2012 Dương H. Nguyễn <cmpitg@gmail.com>
  Copyright (C) 2012 Dương Quang Hà <contact@haqduong.net>

  BoGoEngine is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  BoGoEngine is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with BoGoEngine.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "charset.hpp"

namespace BoGo {

    using namespace Glib;

#ifdef _
#undef _
#endif
#define _(x) (ustring ("") + x)

#ifdef __
#undef __
#endif
#define __(x) (ustring ("") + x).c_str ()


    // void utf8toCharset (ustring src, const gchar *dest, CharsetT charset) {
    //     ustring result = ustring("");
    //     for (_size_t_ i = 0; i < src.length (); i++) {
    //         _size_t_ pos = UTF8_CHARS.find (src[i]);
    //         if (pos != ustring::npos)
    //             result += _(utf8ToTCVN3[pos]);
    //         else
    //             result += src[i];
    //     }
    //     return result;
    // }

    const gchar * utf8ToCharset (ustring src, CharsetT charset) {
        ustring result = std::string("");

        const unsigned int * destCharset;

        if (charset == CHARSET_TCVN3) {
            destCharset = utf8ToTCVN3;
        }

        for (_size_t_ i = 0; i < src.length (); i++) {
            _size_t_ pos = UTF8_CHARS.find (src[i]);
            if (pos != ustring::npos)
                result += _(destCharset[pos]);
            else
                result += src[i];
        }
        return result.c_str ();
    }
}
