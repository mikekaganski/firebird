/*
 * The contents of this file are subject to the Interbase Public
 * License Version 1.0 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy
 * of the License at http://www.Inprise.com/IPL.html
 *
 * Software distributed under the License is distributed on an
 * "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either express
 * or implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The content of this file was generated by the Firebird project
 * using the program jrd/codes.epp
 */
/*
 *
 * *** WARNING *** - This file is automatically generated by codes.epp - do not edit!
 *
 */
/*
 *	MODULE:		msg_facs.h
 *	DESCRIPTION:	ISC message facilities
 *
 */



/******************************/
/*   ISC message facilities   */
/******************************/

struct _facilities
{
	int fac_code;
	const char* facility;
};

static const struct _facilities facilities[] =
{
	{0,  "JRD       "},
	{3,  "GFIX      "},
	{7,  "DSQL      "},
	{8,  "DYN       "},
	{12,  "GBAK      "},
	{13,  "SQLERR    "},
	{18,  "GSEC      "},
	{21,  "GSTAT     "},
	{22,  "FBSVCMGR  "},
	{23,  "UTL       "},
	{24,  "NBACKUP   "},
	{25,  "FBTRACEMGR"},
	{0, NULL}
};


