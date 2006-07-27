/*
 * Copyright (C) 2006 Christian Stigen Larsen, http://csl.sublevel3.org
 * Distributed under the GNU General Public License (GPL) v2 or later.
 *
 * Project homepage on http://jp2a.sf.net
 *
 * $Id$
 */

#include <stdio.h>

// curl.c
#ifdef FEAT_CURL
extern int is_url(const char* s);
extern int curl_download(const char* url, const int debug);
#endif

// html.c
extern void print_html_start(const int fontsize, FILE *f);
extern void print_html_end(FILE *f);

// image.c
void decompress(FILE *fin, FILE *fout);

// options.c
void parse_options(int argc, char** argv);

// term.c
int get_termsize(int* width_, int* height_, char** error);
