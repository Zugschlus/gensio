/*
 *  gensio - A library for abstracting stream I/O
 *  Copyright (C) 2021  Corey Minyard <minyard@acm.org>
 *
 *  SPDX-License-Identifier: LGPL-2.1-only
 */

#ifndef GENSIO_ADDR_H
#define GENSIO_ADDR_H

/*
 * Gensio address structure
 *
 * This is used to hide the details of address handling for network
 * gensios.  A gensio_addr has a set of addresses embedded in it.  The
 * list is immutable after allocation.
 *
 * The address has the concept of a current address in it that can be
 * iterated.  You get an address, and you can use the iterator
 * function to iterate over it and extract information from the
 * individual addresses.
 *
 * Note that some function use the current address, and some use all
 * the addresses.
 */
struct gensio_addr {
    struct gensio_os_funcs *o;
};

#endif /* GENSIO_ADDR_H */
