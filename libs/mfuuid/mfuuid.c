/*
 * GUID definitions
 *
 * Copyright 2017 Fabian Maurer
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/* Don't define those GUIDs here */
#include "propsys.h"
#include "strmif.h"
#include "mediaobj.h"

#undef EXTERN_GUID
#define EXTERN_GUID DEFINE_GUID

#include "initguid.h"

#include "mfapi.h"
#include "mfidl.h"
#include "mfreadwrite.h"
#include "mfmediaengine.h"

DEFINE_GUID(MF_SCRUBBING_SERVICE, 0xdd0ac3d8,0x40e3,0x4128,0xac,0x48,0xc0,0xad,0xd0,0x67,0xb7,0x14);
DEFINE_GUID(CLSID_FileSchemePlugin, 0x477ec299,0x1421,0x4bdd,0x97,0x1f,0x7c,0xcb,0x93,0x3f,0x21,0xad);
DEFINE_GUID(CLSID_GStreamerSchemePlugin, 0x587eeb6a,0x7336,0x4ebd,0xa4,0xf2,0x91,0xc9,0x48,0xde,0x62,0x2c);
