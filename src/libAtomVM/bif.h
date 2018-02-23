/***************************************************************************
 *   Copyright 2017 by Davide Bettio <davide@uninstall.it>                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/

/**
 * @file bif.h
 * @brief BIF private functions.
 */

#ifndef _BIF_H_
#define _BIF_H_

#include "atom.h"
#include "context.h"
#include "module.h"

#define MAX_BIF_NAME_LEN 32

extern BifImpl bif_registry_get_handler(AtomString module, AtomString function, int arity);
extern term bif_erlang_self_0(Context *ctx);
extern term bif_erlang_byte_size_1(Context *ctx, uint32_t failure_label, int live, term arg1);
extern term bif_erlang_length_1(Context *ctx, uint32_t failure_label, int live, term arg1);
extern term bif_erlang_hd_1(Context *ctx, uint32_t failure_label, int live, term arg1);
extern term bif_erlang_add_2(Context *ctx, uint32_t failure_label, int live, term arg1, term arg2);
extern term bif_erlang_sub_2(Context *ctx, uint32_t failure_label, int live, term arg1, term arg2);
extern term bif_erlang_mul_2(Context *ctx, uint32_t failure_label, int live, term arg1, term arg2);
extern term bif_erlang_div_2(Context *ctx, uint32_t failure_label, int live, term arg1, term arg2);

//TODO: they are not gc bifs
term bif_erlang_not_1(Context *ctx, uint32_t failure_label, int live, term arg1);
term bif_erlang_and_2(Context *ctx, uint32_t failure_label, int live, term arg1, term arg2);
term bif_erlang_or_2(Context *ctx, uint32_t failure_label, int live, term arg1, term arg2);
term bif_erlang_xor_2(Context *ctx, uint32_t failure_label, int live, term arg1, term arg2);

#endif
