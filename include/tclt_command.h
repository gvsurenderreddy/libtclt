/*
 * Copyright (c) 2012 Florent Tribouilloy <tribou_f AT epitech DOT net>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef TCLT_COMMAND_H_
# define TCLT_COMMAND_H_

#include <stddef.h>

# ifdef __cplusplus
extern "C" {
# endif

#define    NB_CMD   4
#define    ADD_PEER_CMD "AddContact"
#define    DELETE_PEER_CMD "DeleteContact"
#define    EDIT_PEER_CMD "EditContact"

#define    ADD_LOG_CMD "AddLog"

struct t_call_command
{
    const char    *cmd_name;
    int           (*f)(void *, void *);
};
typedef struct t_call_command call_command;

# ifdef __cplusplus
}
# endif

#endif












