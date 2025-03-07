/*
 * The volume information definition of a Windows Shortcut File (LNK)
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

#if !defined( _LNK_VOLUME_INFORMATION_H )
#define _LNK_VOLUME_INFORMATION_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct lnk_volume_information lnk_volume_information_t;

struct lnk_volume_information
{
	/* The size of the volume information
	 * Consists of 4 bytes
	 */
	uint8_t size[ 4 ];

	/* The drive type
	 * Consists of 4 bytes
	 */
	uint8_t drive_type[ 4 ];

	/* The drive serial number
	 * Consists of 4 bytes
	 */
	uint8_t drive_serial_number[ 4 ];

	/* The offset of the volume label
	 * Consists of 4 bytes
	 */
	uint8_t volume_label_offset[ 4 ];

	/* The following values are only available if the volume label offset > 16
	 */

	/* The offset of the unicode volume label
	 * Consists of 4 bytes
	 */
	uint8_t unicode_volume_label_offset[ 4 ];
};

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LNK_VOLUME_INFORMATION_H ) */

