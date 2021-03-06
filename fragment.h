/*
*Copyright (c) 2012, The Linux Foundation. All rights reserved.
*Redistribution and use in source and binary forms, with or without
*modification, are permitted provided that the following conditions are
*met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

*THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
*WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
*MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
*ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
*BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
*BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
*WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
*OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
*IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
*/

#ifndef _FRAGMENT_H_
#define	_FRAGMENT_H_
#include "tree.h"
#include "fsutil.h"
#include "stddef.h"
#include "stdio.h"
struct fragment {
	unsigned int head;
	unsigned int length;
	RB_ENTRY(fragment) rb;
};
#define	EMPTY_FRAGMENT ((struct fragment*)0)
RB_HEAD(FSCK_MSDOS_FRAGMENT,fragment) ;
extern struct FSCK_MSDOS_FRAGMENT rb_free_root,rb_bad_root;
void free_fragment_tree(struct FSCK_MSDOS_FRAGMENT* head);
struct fragment* New_fragment(void);
struct fragment* FSCK_MSDOS_FRAGMENT_RB_FIND(struct FSCK_MSDOS_FRAGMENT* x, struct fragment* y);
struct fragment* FSCK_MSDOS_FRAGMENT_RB_REMOVE(struct FSCK_MSDOS_FRAGMENT* x, struct fragment* y);
struct fragment* FSCK_MSDOS_FRAGMENT_RB_NEXT(struct fragment* y);
struct fragment* FSCK_MSDOS_FRAGMENT_RB_INSERT(struct FSCK_MSDOS_FRAGMENT* x, struct fragment* y);
struct fragment* FSCK_MSDOS_FRAGMENT_RB_MINMAX(struct FSCK_MSDOS_FRAGMENT* x, int val);
#endif
