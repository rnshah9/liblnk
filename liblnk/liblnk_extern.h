/*
 * The internal extern definition
 *
 * Copyright (C) 2009-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBLNK_INTERNAL_EXTERN_H )
#define _LIBLNK_INTERNAL_EXTERN_H

#include <common.h>

/* Define HAVE_LOCAL_LIBLNK for local use of liblnk
 */
#if !defined( HAVE_LOCAL_LIBLNK )

#include <liblnk/extern.h>

#if defined( __CYGWIN__ ) || defined( __MINGW32__ )
#define LIBLNK_EXTERN_VARIABLE	extern
#else
#define LIBLNK_EXTERN_VARIABLE	LIBLNK_EXTERN
#endif

#else
#define LIBLNK_EXTERN		/* extern */
#define LIBLNK_EXTERN_VARIABLE	extern

#endif /* !defined( HAVE_LOCAL_LIBLNK ) */

#endif /* !defined( _LIBLNK_INTERNAL_EXTERN_H ) */

