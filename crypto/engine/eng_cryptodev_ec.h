/*
 * Copyright (C) 2012 Freescale Semiconductor, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef __ENG_EC_H
#define __ENG_EC_H

#define SPCF_CPARAM_INIT(X,...) \
static unsigned char X##_c[] = {__VA_ARGS__} \

#define SPCF_FREE_BN(X) do { if(X) { BN_clear_free(X); X = NULL; } } while (0)

#define SPCF_COPY_CPARAMS(NIDBUF) \
  do { \
      memcpy (buf, NIDBUF, buf_len); \
    } while (0)

#define SPCF_CPARAM_CASE(X) \
  case NID_##X: \
      SPCF_COPY_CPARAMS(X##_c); \
      break

SPCF_CPARAM_INIT(sect113r1, 0x01, 0x73, 0xE8, 0x34, 0xAF, 0x28, 0xEC, 0x76,
		 0xCB, 0x83, 0xBD, 0x8D, 0xFE, 0xB2, 0xD5);
SPCF_CPARAM_INIT(sect113r2, 0x00, 0x54, 0xD9, 0xF0, 0x39, 0x57, 0x17, 0x4A,
		 0x32, 0x32, 0x91, 0x67, 0xD7, 0xFE, 0x71);
SPCF_CPARAM_INIT(sect131r1, 0x03, 0xDB, 0x89, 0xB4, 0x05, 0xE4, 0x91, 0x16,
		 0x0E, 0x3B, 0x2F, 0x07, 0xB0, 0xCE, 0x20, 0xB3, 0x7E);
SPCF_CPARAM_INIT(sect131r2, 0x07, 0xCB, 0xB9, 0x92, 0x0D, 0x71, 0xA4, 0x8E,
		 0x09, 0x9C, 0x38, 0xD7, 0x1D, 0xA6, 0x49, 0x0E, 0xB1);
SPCF_CPARAM_INIT(sect163k1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x01);
SPCF_CPARAM_INIT(sect163r1, 0x05, 0xED, 0x40, 0x3E, 0xD5, 0x8E, 0xB4, 0x5B,
		 0x1C, 0xCE, 0xCA, 0x0F, 0x4F, 0x61, 0x65, 0x55, 0x49, 0x86,
		 0x1B, 0xE0, 0x52);
SPCF_CPARAM_INIT(sect163r2, 0x07, 0x2C, 0x4E, 0x1E, 0xF7, 0xCB, 0x2F, 0x3A,
		 0x03, 0x5D, 0x33, 0x10, 0x42, 0x94, 0x15, 0x96, 0x09, 0x13,
		 0x8B, 0xB4, 0x04);
SPCF_CPARAM_INIT(sect193r1, 0x01, 0x67, 0xB3, 0x5E, 0xB4, 0x31, 0x3F, 0x26,
		 0x3D, 0x0F, 0x7A, 0x3D, 0x50, 0x36, 0xF0, 0xA0, 0xA3, 0xC9,
		 0x80, 0xD4, 0x0E, 0x5A, 0x05, 0x3E, 0xD2);
SPCF_CPARAM_INIT(sect193r2, 0x00, 0x69, 0x89, 0xFE, 0x6B, 0xFE, 0x30, 0xED,
		 0xDC, 0x32, 0x44, 0x26, 0x9F, 0x3A, 0xAD, 0x18, 0xD6, 0x6C,
		 0xF3, 0xDB, 0x3E, 0x33, 0x02, 0xFA, 0xA8);
SPCF_CPARAM_INIT(sect233k1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x01);
SPCF_CPARAM_INIT(sect233r1, 0x00, 0x07, 0xD5, 0xEF, 0x43, 0x89, 0xDF, 0xF1,
		 0x1E, 0xCD, 0xBA, 0x39, 0xC3, 0x09, 0x70, 0xD3, 0xCE, 0x35,
		 0xCE, 0xBB, 0xA5, 0x84, 0x73, 0xF6, 0x4B, 0x4D, 0xC0, 0xF2,
		 0x68, 0x6C);
SPCF_CPARAM_INIT(sect239k1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x01);
SPCF_CPARAM_INIT(sect283k1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01);
SPCF_CPARAM_INIT(sect283r1, 0x03, 0xD8, 0xC9, 0x3D, 0x3B, 0x0E, 0xA8, 0x1D,
		 0x92, 0x94, 0x03, 0x4D, 0x7E, 0xE3, 0x13, 0x5D, 0x0A, 0xC5,
		 0xFC, 0x8D, 0x9C, 0xB0, 0x27, 0x6F, 0x72, 0x11, 0xF8, 0x80,
		 0xF0, 0xD8, 0x1C, 0xA4, 0xC6, 0xE8, 0x7B, 0x38);
SPCF_CPARAM_INIT(sect409k1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x01);
SPCF_CPARAM_INIT(sect409r1, 0x01, 0x49, 0xB8, 0xB7, 0xBE, 0xBD, 0x9B, 0x63,
		 0x65, 0x3E, 0xF1, 0xCD, 0x8C, 0x6A, 0x5D, 0xD1, 0x05, 0xA2,
		 0xAA, 0xAC, 0x36, 0xFE, 0x2E, 0xAE, 0x43, 0xCF, 0x28, 0xCE,
		 0x1C, 0xB7, 0xC8, 0x30, 0xC1, 0xEC, 0xDB, 0xFA, 0x41, 0x3A,
		 0xB0, 0x7F, 0xE3, 0x5A, 0x57, 0x81, 0x1A, 0xE4, 0xF8, 0x8D,
		 0x30, 0xAC, 0x63, 0xFB);
SPCF_CPARAM_INIT(sect571k1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x01);
SPCF_CPARAM_INIT(sect571r1, 0x06, 0x39, 0x5D, 0xB2, 0x2A, 0xB5, 0x94, 0xB1,
		 0x86, 0x8C, 0xED, 0x95, 0x25, 0x78, 0xB6, 0x53, 0x9F, 0xAB,
		 0xA6, 0x94, 0x06, 0xD9, 0xB2, 0x98, 0x61, 0x23, 0xA1, 0x85,
		 0xC8, 0x58, 0x32, 0xE2, 0x5F, 0xD5, 0xB6, 0x38, 0x33, 0xD5,
		 0x14, 0x42, 0xAB, 0xF1, 0xA9, 0xC0, 0x5F, 0xF0, 0xEC, 0xBD,
		 0x88, 0xD7, 0xF7, 0x79, 0x97, 0xF4, 0xDC, 0x91, 0x56, 0xAA,
		 0xF1, 0xCE, 0x08, 0x16, 0x46, 0x86, 0xDD, 0xFF, 0x75, 0x11,
		 0x6F, 0xBC, 0x9A, 0x7A);
SPCF_CPARAM_INIT(X9_62_c2pnb163v1, 0x04, 0x53, 0xE1, 0xE4, 0xB7, 0x29, 0x1F,
		 0x5C, 0x2D, 0x53, 0xCE, 0x18, 0x48, 0x3F, 0x00, 0x70, 0x81,
		 0xE7, 0xEA, 0x26, 0xEC);
SPCF_CPARAM_INIT(X9_62_c2pnb163v2, 0x04, 0x35, 0xC0, 0x19, 0x66, 0x0E, 0x01,
		 0x01, 0xBA, 0x87, 0x0C, 0xA3, 0x9F, 0xD9, 0xA7, 0x76, 0x86,
		 0x50, 0x9D, 0x28, 0x13);
SPCF_CPARAM_INIT(X9_62_c2pnb163v3, 0x06, 0x55, 0xC4, 0x54, 0xE4, 0x1E, 0x38,
		 0x0C, 0x7A, 0x60, 0xB6, 0x67, 0x9A, 0x5B, 0x7A, 0x3F, 0x3A,
		 0xF6, 0x8E, 0x22, 0xC5);
SPCF_CPARAM_INIT(X9_62_c2pnb176v1, 0x00, 0x69, 0xF7, 0xDA, 0x36, 0x19, 0xA7,
		 0x42, 0xA3, 0x82, 0xFF, 0x05, 0x08, 0x8F, 0xD3, 0x99, 0x42,
		 0xCA, 0x0F, 0x1D, 0x90, 0xB6, 0x5B);
SPCF_CPARAM_INIT(X9_62_c2tnb191v1, 0x4C, 0x45, 0x25, 0xAB, 0x0B, 0x68, 0x4A,
		 0x64, 0x44, 0x62, 0x0A, 0x86, 0x45, 0xEF, 0x54, 0x6D, 0x54,
		 0x69, 0x39, 0x68, 0xC2, 0xAE, 0x84, 0xAC);
SPCF_CPARAM_INIT(X9_62_c2tnb191v2, 0x03, 0x7C, 0x8F, 0x57, 0xA2, 0x25, 0xC7,
		 0xB3, 0xD4, 0xED, 0xD5, 0x88, 0x0F, 0x38, 0x0A, 0xCC, 0x55,
		 0x74, 0xEC, 0xB3, 0x6C, 0x9F, 0x51, 0x21);
SPCF_CPARAM_INIT(X9_62_c2tnb191v3, 0x37, 0x39, 0xFF, 0x98, 0xB4, 0xD1, 0x69,
		 0x3E, 0xCF, 0x52, 0x7A, 0x98, 0x51, 0xED, 0xCF, 0x99, 0x9D,
		 0x9E, 0x75, 0x05, 0x43, 0x33, 0x43, 0x24);
SPCF_CPARAM_INIT(X9_62_c2pnb208w1, 0x00, 0xDB, 0x05, 0x3C, 0x41, 0x76, 0xCC,
		 0x1D, 0xA1, 0x27, 0x85, 0x2C, 0xA6, 0xD9, 0x88, 0xBE, 0x1A,
		 0xCC, 0xD1, 0x5B, 0x2A, 0xC1, 0xC1, 0x07, 0x42, 0x57, 0x34);
SPCF_CPARAM_INIT(X9_62_c2tnb239v1, 0x24, 0x59, 0xFC, 0xF4, 0x51, 0x7B, 0xC5,
		 0xA6, 0xB9, 0x9B, 0xE5, 0xC6, 0xC5, 0x62, 0x85, 0xC0, 0x21,
		 0xFE, 0x32, 0xEE, 0x2B, 0x6F, 0x1C, 0x22, 0xEA, 0x5B, 0xE1,
		 0xB8, 0x4B, 0x93);
SPCF_CPARAM_INIT(X9_62_c2tnb239v2, 0x64, 0x98, 0x84, 0x19, 0x3B, 0x56, 0x2D,
		 0x4A, 0x50, 0xB4, 0xFA, 0x56, 0x34, 0xE0, 0x34, 0x41, 0x3F,
		 0x94, 0xC4, 0x59, 0xDA, 0x7C, 0xDB, 0x16, 0x64, 0x9D, 0xDD,
		 0xF7, 0xE6, 0x0A);
SPCF_CPARAM_INIT(X9_62_c2tnb239v3, 0x32, 0x63, 0x2E, 0x65, 0x2B, 0xEE, 0x91,
		 0xC2, 0xE4, 0xA2, 0xF5, 0x42, 0xA3, 0x2D, 0x67, 0xA8, 0xB5,
		 0xB4, 0x5F, 0x21, 0xA0, 0x81, 0x02, 0xFB, 0x1F, 0x2A, 0xFB,
		 0xB6, 0xAC, 0xDA);
SPCF_CPARAM_INIT(X9_62_c2pnb272w1, 0x00, 0xDA, 0x7B, 0x60, 0x28, 0xF4, 0xC8,
		 0x09, 0xA0, 0xB9, 0x78, 0x81, 0xC3, 0xA5, 0x7E, 0x4D, 0x71,
		 0x81, 0x34, 0xD1, 0x3F, 0xEC, 0xE0, 0x90, 0x85, 0x8A, 0xC3,
		 0x1A, 0xE2, 0xDC, 0x2E, 0xDF, 0x8E, 0x3C, 0x8B);
SPCF_CPARAM_INIT(X9_62_c2pnb304w1, 0x00, 0x3C, 0x67, 0xB4, 0x07, 0xC6, 0xF3,
		 0x3F, 0x81, 0x0B, 0x17, 0xDC, 0x16, 0xE2, 0x14, 0x8A, 0x2C,
		 0x9C, 0xE2, 0x9D, 0x56, 0x05, 0x23, 0x69, 0x6A, 0x55, 0x93,
		 0x8A, 0x15, 0x40, 0x81, 0xE3, 0xE3, 0xAE, 0xFB, 0xCE, 0x45,
		 0x70, 0xC9);
SPCF_CPARAM_INIT(X9_62_c2tnb359v1, 0x22, 0x39, 0xAA, 0x58, 0x4A, 0xC5, 0x9A,
		 0xF9, 0x61, 0xD0, 0xFA, 0x2D, 0x52, 0x85, 0xB6, 0xFD, 0xF7,
		 0x34, 0x9B, 0xC6, 0x0E, 0x91, 0xE3, 0x20, 0xF4, 0x71, 0x64,
		 0xCE, 0x11, 0xF5, 0x18, 0xEF, 0xB4, 0xC0, 0x8B, 0x9B, 0xDA,
		 0x99, 0x9A, 0x8A, 0x37, 0xF8, 0x2A, 0x22, 0x61);
SPCF_CPARAM_INIT(X9_62_c2pnb368w1, 0x00, 0xC0, 0x6C, 0xCF, 0x42, 0x89, 0x3A,
		 0x8A, 0xAA, 0x00, 0x1E, 0x0B, 0xC0, 0xD2, 0xA2, 0x27, 0x66,
		 0xEF, 0x3E, 0x41, 0x88, 0x7C, 0xC6, 0x77, 0x6F, 0x4A, 0x04,
		 0x1E, 0xE4, 0x45, 0x14, 0xB2, 0x0A, 0xFC, 0x4E, 0x5C, 0x30,
		 0x40, 0x60, 0x06, 0x5B, 0xC8, 0xD6, 0xCF, 0x04, 0xD3, 0x25);
SPCF_CPARAM_INIT(X9_62_c2tnb431r1, 0x64, 0xF5, 0xBB, 0xE9, 0xBB, 0x31, 0x66,
		 0xA3, 0xA0, 0x2F, 0x2F, 0x22, 0xBF, 0x05, 0xD9, 0xF7, 0xDA,
		 0x43, 0xEE, 0x70, 0xC1, 0x79, 0x03, 0x15, 0x2B, 0x70, 0xA0,
		 0xB4, 0x25, 0x9B, 0xD2, 0xFC, 0xB2, 0x20, 0x3B, 0x7F, 0xB8,
		 0xD3, 0x39, 0x4E, 0x20, 0xEB, 0x0E, 0xA9, 0x84, 0xDD, 0xB1,
		 0xE1, 0xF1, 0x4C, 0x67, 0xB1, 0x36, 0x2B);
SPCF_CPARAM_INIT(wap_wsg_idm_ecid_wtls1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01);
SPCF_CPARAM_INIT(wap_wsg_idm_ecid_wtls3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x01);
SPCF_CPARAM_INIT(wap_wsg_idm_ecid_wtls4, 0x01, 0x73, 0xE8, 0x34, 0xAF, 0x28,
		 0xEC, 0x76, 0xCB, 0x83, 0xBD, 0x8D, 0xFE, 0xB2, 0xD5);
SPCF_CPARAM_INIT(wap_wsg_idm_ecid_wtls5, 0x04, 0x53, 0xE1, 0xE4, 0xB7, 0x29,
		 0x1F, 0x5C, 0x2D, 0x53, 0xCE, 0x18, 0x48, 0x3F, 0x00, 0x70,
		 0x81, 0xE7, 0xEA, 0x26, 0xEC);
SPCF_CPARAM_INIT(wap_wsg_idm_ecid_wtls10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x01);
SPCF_CPARAM_INIT(wap_wsg_idm_ecid_wtls11, 0x00, 0x07, 0xD5, 0xEF, 0x43, 0x89,
		 0xDF, 0xF1, 0x1E, 0xCD, 0xBA, 0x39, 0xC3, 0x09, 0x70, 0xD3,
		 0xCE, 0x35, 0xCE, 0xBB, 0xA5, 0x84, 0x73, 0xF6, 0x4B, 0x4D,
		 0xC0, 0xF2, 0x68, 0x6C);
/* Oakley curve #3 over 155 bit binary filed */
SPCF_CPARAM_INIT(ipsec3, 0x00, 0x31, 0x10, 0x00, 0x00, 0x02, 0x23, 0xA0, 0x00,
		 0xC4, 0x47, 0x40, 0x00, 0x08, 0x8E, 0x80, 0x00, 0x11, 0x1D,
		 0x1D);
/* Oakley curve #4 over 185 bit binary filed */
SPCF_CPARAM_INIT(ipsec4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
		 0x01, 0x80, 0x00, 0xC0, 0x0C, 0x00, 0x00, 0x00, 0x63, 0x80,
		 0x30, 0x00, 0x1C, 0x00, 0x09);

static inline int
eng_ec_get_cparam(int nid, unsigned char *buf, unsigned int buf_len)
{
	int ret = 0;
	switch (nid) {
		SPCF_CPARAM_CASE(sect113r1);
		SPCF_CPARAM_CASE(sect113r2);
		SPCF_CPARAM_CASE(sect131r1);
		SPCF_CPARAM_CASE(sect131r2);
		SPCF_CPARAM_CASE(sect163k1);
		SPCF_CPARAM_CASE(sect163r1);
		SPCF_CPARAM_CASE(sect163r2);
		SPCF_CPARAM_CASE(sect193r1);
		SPCF_CPARAM_CASE(sect193r2);
		SPCF_CPARAM_CASE(sect233k1);
		SPCF_CPARAM_CASE(sect233r1);
		SPCF_CPARAM_CASE(sect239k1);
		SPCF_CPARAM_CASE(sect283k1);
		SPCF_CPARAM_CASE(sect283r1);
		SPCF_CPARAM_CASE(sect409k1);
		SPCF_CPARAM_CASE(sect409r1);
		SPCF_CPARAM_CASE(sect571k1);
		SPCF_CPARAM_CASE(sect571r1);
		SPCF_CPARAM_CASE(X9_62_c2pnb163v1);
		SPCF_CPARAM_CASE(X9_62_c2pnb163v2);
		SPCF_CPARAM_CASE(X9_62_c2pnb163v3);
		SPCF_CPARAM_CASE(X9_62_c2pnb176v1);
		SPCF_CPARAM_CASE(X9_62_c2tnb191v1);
		SPCF_CPARAM_CASE(X9_62_c2tnb191v2);
		SPCF_CPARAM_CASE(X9_62_c2tnb191v3);
		SPCF_CPARAM_CASE(X9_62_c2pnb208w1);
		SPCF_CPARAM_CASE(X9_62_c2tnb239v1);
		SPCF_CPARAM_CASE(X9_62_c2tnb239v2);
		SPCF_CPARAM_CASE(X9_62_c2tnb239v3);
		SPCF_CPARAM_CASE(X9_62_c2pnb272w1);
		SPCF_CPARAM_CASE(X9_62_c2pnb304w1);
		SPCF_CPARAM_CASE(X9_62_c2tnb359v1);
		SPCF_CPARAM_CASE(X9_62_c2pnb368w1);
		SPCF_CPARAM_CASE(X9_62_c2tnb431r1);
		SPCF_CPARAM_CASE(wap_wsg_idm_ecid_wtls1);
		SPCF_CPARAM_CASE(wap_wsg_idm_ecid_wtls3);
		SPCF_CPARAM_CASE(wap_wsg_idm_ecid_wtls4);
		SPCF_CPARAM_CASE(wap_wsg_idm_ecid_wtls5);
		SPCF_CPARAM_CASE(wap_wsg_idm_ecid_wtls10);
		SPCF_CPARAM_CASE(wap_wsg_idm_ecid_wtls11);
		/* Oakley curve #3 over 155 bit binary filed */
		SPCF_CPARAM_CASE(ipsec3);
		/* Oakley curve #4 over 185 bit binary filed */
		SPCF_CPARAM_CASE(ipsec4);
	default:
		ret = -EINVAL;
		break;
	}
	return ret;
}

/* Copies the curve points to a flat buffer with appropriate padding */
static inline unsigned char *eng_copy_curve_points(BIGNUM * x, BIGNUM * y,
						   int xy_len, int crv_len)
{
	unsigned char *xy = NULL;
	int len1 = 0, len2 = 0;

	len1 = BN_num_bytes(x);
	len2 = BN_num_bytes(y);

	if (!(xy = malloc(xy_len))) {
		return NULL;
	}

	memset(xy, 0, xy_len);

	if (len1 < crv_len) {
		if (!BN_is_zero(x))
			BN_bn2bin(x, xy + (crv_len - len1));
	}  else {
		BN_bn2bin(x, xy);
	}

	if (len2 < crv_len) {
		if (!BN_is_zero(y))
			BN_bn2bin(y, xy+crv_len+(crv_len-len2));
	} else {
		BN_bn2bin(y, xy+crv_len);
	}

	return xy;
}
#endif
