/*!
 * \file      com_usb.h
 *
 * \brief
 *
 * Revised BSD License
 * Copyright Semtech Corporation 2019. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Semtech corporation nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL SEMTECH S.A. BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __COM_COM_USB_H__
#define __COM_COM_USB_H__

#ifdef __cplusplus
extern "C" {
#endif

/* -------------------------------------------------------------------------- */
/* --- DEPENDENCIES --------------------------------------------------------- */
#include "global.h"
#include "com_usb_msg_def.h"

/* -------------------------------------------------------------------------- */
/* --- PUBLIC MACROS & PREPROCESSOR CONSTANTS ------------------------------- */

/* -------------------------------------------------------------------------- */
/* --- PUBLIC ENUMERATIONS, STRUCTURES & TYPES ------------------------------ */

/* -------------------------------------------------------------------------- */
/* --- DECLARATION OF PUBLIC VARIABLES  ------------------------------------- */

/* -------------------------------------------------------------------------- */
/* --- DECLARATION OF PUBLIC FUNCTIONS -------------------------------------- */
bool com_usb__process_buffer( const bool is_new_frame, const uint8_t* buffer, const uint16_t buffer_len );

#ifdef __cplusplus
}
#endif

#endif /* __COM_COM_USB_H__ */

//===== END OF FILE =====================================================================
