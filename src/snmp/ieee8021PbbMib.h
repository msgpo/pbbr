/*****************************************************************************

 @(#) src/snmp/ieee8021pbbmib.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef __LOCAL_IEEE8021PBBMIB_H__
#define __LOCAL_IEEE8021PBBMIB_H__

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */

extern const char sa_program[];
extern int sa_fclose;			/* default close files between requests */
extern int sa_changed;			/* indication to reread MIB configuration */
extern int sa_stats_refresh;		/* indications that statistics, the mib or its tables need to be refreshed */
extern int sa_request;			/* request number for per-request actions */

/* our storage structure(s) */
struct ieee8021PbbMib_data {
	struct ieee8021PbbMib_data *ieee8021PbbMib_old;
	uint ieee8021PbbMib_rsvs;
	uint ieee8021PbbMib_tsts;
	uint ieee8021PbbMib_sets;
	uint ieee8021PbbMib_request;
	uint8_t *ieee8021PbbBackboneEdgeBridgeAddress;	/* ReadOnly */
	size_t ieee8021PbbBackboneEdgeBridgeAddressLen;
	uint8_t *ieee8021PbbBackboneEdgeBridgeName;	/* ReadWrite */
	size_t ieee8021PbbBackboneEdgeBridgeNameLen;
	ulong ieee8021PbbNumberOfIComponents;	/* ReadOnly */
	ulong ieee8021PbbNumberOfBComponents;	/* ReadOnly */
	ulong ieee8021PbbNumberOfBebPorts;	/* ReadOnly */
	long ieee8021PbbNextAvailablePipIfIndex;	/* ReadOnly */
};
struct ieee8021PbbVipTable_data {
	struct ieee8021PbbVipTable_data *ieee8021PbbVipTable_old;
	uint ieee8021PbbVipTable_rsvs;
	uint ieee8021PbbVipTable_tsts;
	uint ieee8021PbbVipTable_sets;
	uint ieee8021PbbVipTable_request;
	uint ieee8021PbbVipTable_refs;
	uint ieee8021PbbVipTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbbVipPipIfIndex;	/* ReadOnly */
	ulong ieee8021PbbVipISid;	/* Create */
	uint8_t *ieee8021PbbVipDefaultDstBMAC;	/* ReadOnly */
	size_t ieee8021PbbVipDefaultDstBMACLen;
	uint8_t *ieee8021PbbVipType;	/* Create */
	size_t ieee8021PbbVipTypeLen;
	long ieee8021PbbVipRowStatus;	/* Create */
	long ieee8021PbbVipEnableConnectionId;	/* Create */
};
struct ieee8021PbbISidToVipTable_data {
	struct ieee8021PbbISidToVipTable_data *ieee8021PbbISidToVipTable_old;
	uint ieee8021PbbISidToVipTable_rsvs;
	uint ieee8021PbbISidToVipTable_tsts;
	uint ieee8021PbbISidToVipTable_sets;
	uint ieee8021PbbISidToVipTable_request;
	uint ieee8021PbbISidToVipTable_refs;
	uint ieee8021PbbISidToVipTable_id;
	ulong ieee8021PbbISidToVipISid;	/* NoAccess */
	ulong ieee8021PbbISidToVipComponentId;	/* ReadOnly */
	ulong ieee8021PbbISidToVipPort;	/* ReadOnly */
};
struct ieee8021PbbPipTable_data {
	struct ieee8021PbbPipTable_data *ieee8021PbbPipTable_old;
	uint ieee8021PbbPipTable_rsvs;
	uint ieee8021PbbPipTable_tsts;
	uint ieee8021PbbPipTable_sets;
	uint ieee8021PbbPipTable_request;
	uint ieee8021PbbPipTable_refs;
	uint ieee8021PbbPipTable_id;
	long ieee8021PbbPipIfIndex;	/* NoAccess */
	uint8_t *ieee8021PbbPipBMACAddress;	/* Create */
	size_t ieee8021PbbPipBMACAddressLen;
	uint8_t *ieee8021PbbPipName;	/* Create */
	size_t ieee8021PbbPipNameLen;
	ulong ieee8021PbbPipComponentId;	/* ReadOnly */
	uint8_t *ieee8021PbbPipVipMap;	/* Create */
	size_t ieee8021PbbPipVipMapLen;
	uint8_t *ieee8021PbbPipVipMap1;	/* Create */
	size_t ieee8021PbbPipVipMap1Len;
	uint8_t *ieee8021PbbPipVipMap2;	/* Create */
	size_t ieee8021PbbPipVipMap2Len;
	uint8_t *ieee8021PbbPipVipMap3;	/* Create */
	size_t ieee8021PbbPipVipMap3Len;
	uint8_t *ieee8021PbbPipVipMap4;	/* Create */
	size_t ieee8021PbbPipVipMap4Len;
	long ieee8021PbbPipRowStatus;	/* Create */
};
struct ieee8021PbbPipPriorityTable_data {
	struct ieee8021PbbPipPriorityTable_data *ieee8021PbbPipPriorityTable_old;
	uint ieee8021PbbPipPriorityTable_rsvs;
	uint ieee8021PbbPipPriorityTable_tsts;
	uint ieee8021PbbPipPriorityTable_sets;
	uint ieee8021PbbPipPriorityTable_request;
	uint ieee8021PbbPipPriorityTable_refs;
	uint ieee8021PbbPipPriorityTable_id;
	long ieee8021PbbPipIfIndex;	/* NoAccess */
	long ieee8021PbbPipPriorityCodePointSelection;	/* ReadWrite */
	long ieee8021PbbPipUseDEI;	/* ReadWrite */
	long ieee8021PbbPipRequireDropEncoding;	/* ReadWrite */
};
struct ieee8021PbbPipDecodingTable_data {
	struct ieee8021PbbPipDecodingTable_data *ieee8021PbbPipDecodingTable_old;
	uint ieee8021PbbPipDecodingTable_rsvs;
	uint ieee8021PbbPipDecodingTable_tsts;
	uint ieee8021PbbPipDecodingTable_sets;
	uint ieee8021PbbPipDecodingTable_request;
	uint ieee8021PbbPipDecodingTable_refs;
	uint ieee8021PbbPipDecodingTable_id;
	long ieee8021PbbPipIfIndex;	/* NoAccess */
	long ieee8021PbbPipDecodingPriorityCodePointRow;	/* NoAccess */
	long ieee8021PbbPipDecodingPriorityCodePoint;	/* NoAccess */
	ulong ieee8021PbbPipDecodingPriority;	/* ReadWrite */
	long ieee8021PbbPipDecodingDropEligible;	/* ReadWrite */
};
struct ieee8021PbbPipEncodingTable_data {
	struct ieee8021PbbPipEncodingTable_data *ieee8021PbbPipEncodingTable_old;
	uint ieee8021PbbPipEncodingTable_rsvs;
	uint ieee8021PbbPipEncodingTable_tsts;
	uint ieee8021PbbPipEncodingTable_sets;
	uint ieee8021PbbPipEncodingTable_request;
	uint ieee8021PbbPipEncodingTable_refs;
	uint ieee8021PbbPipEncodingTable_id;
	long ieee8021PbbPipIfIndex;	/* NoAccess */
	long ieee8021PbbPipEncodingPriorityCodePointRow;	/* NoAccess */
	long ieee8021PbbPipEncodingPriorityCodePoint;	/* NoAccess */
	long ieee8021PbbPipEncodingDropEligible;	/* NoAccess */
	ulong ieee8021PbbPipEncodingPriority;	/* ReadWrite */
};
struct ieee8021PbbVipToPipMappingTable_data {
	struct ieee8021PbbVipToPipMappingTable_data *ieee8021PbbVipToPipMappingTable_old;
	uint ieee8021PbbVipToPipMappingTable_rsvs;
	uint ieee8021PbbVipToPipMappingTable_tsts;
	uint ieee8021PbbVipToPipMappingTable_sets;
	uint ieee8021PbbVipToPipMappingTable_request;
	uint ieee8021PbbVipToPipMappingTable_refs;
	uint ieee8021PbbVipToPipMappingTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbbVipToPipMappingPipIfIndex;	/* Create */
	long ieee8021PbbVipToPipMappingStorageType;	/* Create */
	long ieee8021PbbVipToPipMappingRowStatus;	/* Create */
};
struct ieee8021PbbCBPServiceMappingTable_data {
	struct ieee8021PbbCBPServiceMappingTable_data *ieee8021PbbCBPServiceMappingTable_old;
	uint ieee8021PbbCBPServiceMappingTable_rsvs;
	uint ieee8021PbbCBPServiceMappingTable_tsts;
	uint ieee8021PbbCBPServiceMappingTable_sets;
	uint ieee8021PbbCBPServiceMappingTable_request;
	uint ieee8021PbbCBPServiceMappingTable_refs;
	uint ieee8021PbbCBPServiceMappingTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021PbbCBPServiceMappingBackboneSid;	/* NoAccess */
	long ieee8021PbbCBPServiceMappingBVid;	/* Create */
	uint8_t *ieee8021PbbCBPServiceMappingDefaultBackboneDest;	/* Create */
	size_t ieee8021PbbCBPServiceMappingDefaultBackboneDestLen;
	uint8_t *ieee8021PbbCBPServiceMappingType;	/* Create */
	size_t ieee8021PbbCBPServiceMappingTypeLen;
	ulong ieee8021PbbCBPServiceMappingLocalSid;	/* Create */
	long ieee8021PbbCBPServiceMappingRowStatus;	/* Create */
};
struct ieee8021PbbCbpTable_data {
	struct ieee8021PbbCbpTable_data *ieee8021PbbCbpTable_old;
	uint ieee8021PbbCbpTable_rsvs;
	uint ieee8021PbbCbpTable_tsts;
	uint ieee8021PbbCbpTable_sets;
	uint ieee8021PbbCbpTable_request;
	uint ieee8021PbbCbpTable_refs;
	uint ieee8021PbbCbpTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbbCbpRowStatus;	/* Create */
};

/* storage declarations */
extern struct ieee8021PbbMib_data *ieee8021PbbMibStorage;
extern struct header_complex_index *ieee8021PbbVipTableStorage;
extern struct header_complex_index *ieee8021PbbISidToVipTableStorage;
extern struct header_complex_index *ieee8021PbbPipTableStorage;
extern struct header_complex_index *ieee8021PbbPipPriorityTableStorage;
extern struct header_complex_index *ieee8021PbbPipDecodingTableStorage;
extern struct header_complex_index *ieee8021PbbPipEncodingTableStorage;
extern struct header_complex_index *ieee8021PbbVipToPipMappingTableStorage;
extern struct header_complex_index *ieee8021PbbCBPServiceMappingTableStorage;
extern struct header_complex_index *ieee8021PbbCbpTableStorage;

/* enum definitions from the covered mib sections */

#define IEEE8021PBBVIPTYPE_INGRESS               0
#define IEEE8021PBBVIPTYPE_EGRESS                1

#define IEEE8021PBBVIPENABLECONNECTIONID_TRUE    1
#define IEEE8021PBBVIPENABLECONNECTIONID_FALSE   2

#define IEEE8021PBBPIPPRIORITYCODEPOINTSELECTION_CODEPOINT8P0D 1
#define IEEE8021PBBPIPPRIORITYCODEPOINTSELECTION_CODEPOINT7P1D 2
#define IEEE8021PBBPIPPRIORITYCODEPOINTSELECTION_CODEPOINT6P2D 3
#define IEEE8021PBBPIPPRIORITYCODEPOINTSELECTION_CODEPOINT5P3D 4

#define IEEE8021PBBPIPUSEDEI_TRUE                1
#define IEEE8021PBBPIPUSEDEI_FALSE               2

#define IEEE8021PBBPIPREQUIREDROPENCODING_TRUE   1
#define IEEE8021PBBPIPREQUIREDROPENCODING_FALSE  2

#define IEEE8021PBBPIPDECODINGPRIORITYCODEPOINTROW_CODEPOINT8P0D 1
#define IEEE8021PBBPIPDECODINGPRIORITYCODEPOINTROW_CODEPOINT7P1D 2
#define IEEE8021PBBPIPDECODINGPRIORITYCODEPOINTROW_CODEPOINT6P2D 3
#define IEEE8021PBBPIPDECODINGPRIORITYCODEPOINTROW_CODEPOINT5P3D 4

#define IEEE8021PBBPIPDECODINGDROPELIGIBLE_TRUE  1
#define IEEE8021PBBPIPDECODINGDROPELIGIBLE_FALSE 2

#define IEEE8021PBBPIPENCODINGPRIORITYCODEPOINTROW_CODEPOINT8P0D 1
#define IEEE8021PBBPIPENCODINGPRIORITYCODEPOINTROW_CODEPOINT7P1D 2
#define IEEE8021PBBPIPENCODINGPRIORITYCODEPOINTROW_CODEPOINT6P2D 3
#define IEEE8021PBBPIPENCODINGPRIORITYCODEPOINTROW_CODEPOINT5P3D 4

#define IEEE8021PBBPIPENCODINGDROPELIGIBLE_TRUE  1
#define IEEE8021PBBPIPENCODINGDROPELIGIBLE_FALSE 2

#define IEEE8021PBBCBPSERVICEMAPPINGTYPE_INGRESS 0
#define IEEE8021PBBCBPSERVICEMAPPINGTYPE_EGRESS  1

/* notifications */

/* scalars accessible only for notify */

/* object id definitions */
extern oid ieee8021PbbBackboneEdgeBridgeGroup_oid[11];
extern oid ieee8021PbbVipGroup_oid[11];
extern oid ieee8021PbbPipGroup_oid[11];
extern oid ieee8021PbbDefaultPriorityGroup_oid[11];
extern oid ieee8021PbbPipDecodingGroup_oid[11];
extern oid ieee8021PbbPipEncodingGroup_oid[11];
extern oid ieee8021PbbVipToPipMappingGroup_oid[11];
extern oid ieee8021PbbCBPServiceMappingGroup_oid[11];
extern oid ieee8021PbbDynamicCbpGroup_oid[11];
extern oid ieee8021PbbVipPbbTeGroup_oid[11];
extern oid ieee8021PbbCompliance_oid[11];
extern oid ieee8021PbbWIthPbbTeCompliance_oid[11];

/* function prototypes */
/* trap function prototypes */

/* variable function prototypes */
void init_ieee8021PbbMib(void);
void deinit_ieee8021PbbMib(void);
int term_ieee8021PbbMib(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ieee8021PbbMib;
struct ieee8021PbbMib_data *ieee8021PbbMib_create(void);
struct ieee8021PbbMib_data *ieee8021PbbMib_duplicate(struct ieee8021PbbMib_data *);
int ieee8021PbbMib_destroy(struct ieee8021PbbMib_data **);
int ieee8021PbbMib_add(struct ieee8021PbbMib_data *);
void parse_ieee8021PbbMib(const char *, char *);
SNMPCallback store_ieee8021PbbMib;
void refresh_ieee8021PbbMib(int);
FindVarMethod var_ieee8021PbbVipTable;
struct ieee8021PbbVipTable_data *ieee8021PbbVipTable_create(void);
struct ieee8021PbbVipTable_data *ieee8021PbbVipTable_duplicate(struct ieee8021PbbVipTable_data *);
int ieee8021PbbVipTable_destroy(struct ieee8021PbbVipTable_data **);
int ieee8021PbbVipTable_add(struct ieee8021PbbVipTable_data *);
int ieee8021PbbVipTable_del(struct ieee8021PbbVipTable_data *);
void parse_ieee8021PbbVipTable(const char *, char *);
SNMPCallback store_ieee8021PbbVipTable;
void refresh_ieee8021PbbVipTable(int);
FindVarMethod var_ieee8021PbbISidToVipTable;
struct ieee8021PbbISidToVipTable_data *ieee8021PbbISidToVipTable_create(void);
struct ieee8021PbbISidToVipTable_data *ieee8021PbbISidToVipTable_duplicate(struct ieee8021PbbISidToVipTable_data *);
int ieee8021PbbISidToVipTable_destroy(struct ieee8021PbbISidToVipTable_data **);
int ieee8021PbbISidToVipTable_add(struct ieee8021PbbISidToVipTable_data *);
int ieee8021PbbISidToVipTable_del(struct ieee8021PbbISidToVipTable_data *);
void parse_ieee8021PbbISidToVipTable(const char *, char *);
SNMPCallback store_ieee8021PbbISidToVipTable;
void refresh_ieee8021PbbISidToVipTable(int);
FindVarMethod var_ieee8021PbbPipTable;
struct ieee8021PbbPipTable_data *ieee8021PbbPipTable_create(void);
struct ieee8021PbbPipTable_data *ieee8021PbbPipTable_duplicate(struct ieee8021PbbPipTable_data *);
int ieee8021PbbPipTable_destroy(struct ieee8021PbbPipTable_data **);
int ieee8021PbbPipTable_add(struct ieee8021PbbPipTable_data *);
int ieee8021PbbPipTable_del(struct ieee8021PbbPipTable_data *);
void parse_ieee8021PbbPipTable(const char *, char *);
SNMPCallback store_ieee8021PbbPipTable;
void refresh_ieee8021PbbPipTable(int);
FindVarMethod var_ieee8021PbbPipPriorityTable;
struct ieee8021PbbPipPriorityTable_data *ieee8021PbbPipPriorityTable_create(void);
struct ieee8021PbbPipPriorityTable_data *ieee8021PbbPipPriorityTable_duplicate(struct ieee8021PbbPipPriorityTable_data *);
int ieee8021PbbPipPriorityTable_destroy(struct ieee8021PbbPipPriorityTable_data **);
int ieee8021PbbPipPriorityTable_add(struct ieee8021PbbPipPriorityTable_data *);
int ieee8021PbbPipPriorityTable_del(struct ieee8021PbbPipPriorityTable_data *);
void parse_ieee8021PbbPipPriorityTable(const char *, char *);
SNMPCallback store_ieee8021PbbPipPriorityTable;
void refresh_ieee8021PbbPipPriorityTable(int);
FindVarMethod var_ieee8021PbbPipDecodingTable;
struct ieee8021PbbPipDecodingTable_data *ieee8021PbbPipDecodingTable_create(void);
struct ieee8021PbbPipDecodingTable_data *ieee8021PbbPipDecodingTable_duplicate(struct ieee8021PbbPipDecodingTable_data *);
int ieee8021PbbPipDecodingTable_destroy(struct ieee8021PbbPipDecodingTable_data **);
int ieee8021PbbPipDecodingTable_add(struct ieee8021PbbPipDecodingTable_data *);
int ieee8021PbbPipDecodingTable_del(struct ieee8021PbbPipDecodingTable_data *);
void parse_ieee8021PbbPipDecodingTable(const char *, char *);
SNMPCallback store_ieee8021PbbPipDecodingTable;
void refresh_ieee8021PbbPipDecodingTable(int);
FindVarMethod var_ieee8021PbbPipEncodingTable;
struct ieee8021PbbPipEncodingTable_data *ieee8021PbbPipEncodingTable_create(void);
struct ieee8021PbbPipEncodingTable_data *ieee8021PbbPipEncodingTable_duplicate(struct ieee8021PbbPipEncodingTable_data *);
int ieee8021PbbPipEncodingTable_destroy(struct ieee8021PbbPipEncodingTable_data **);
int ieee8021PbbPipEncodingTable_add(struct ieee8021PbbPipEncodingTable_data *);
int ieee8021PbbPipEncodingTable_del(struct ieee8021PbbPipEncodingTable_data *);
void parse_ieee8021PbbPipEncodingTable(const char *, char *);
SNMPCallback store_ieee8021PbbPipEncodingTable;
void refresh_ieee8021PbbPipEncodingTable(int);
FindVarMethod var_ieee8021PbbVipToPipMappingTable;
struct ieee8021PbbVipToPipMappingTable_data *ieee8021PbbVipToPipMappingTable_create(void);
struct ieee8021PbbVipToPipMappingTable_data *ieee8021PbbVipToPipMappingTable_duplicate(struct ieee8021PbbVipToPipMappingTable_data *);
int ieee8021PbbVipToPipMappingTable_destroy(struct ieee8021PbbVipToPipMappingTable_data **);
int ieee8021PbbVipToPipMappingTable_add(struct ieee8021PbbVipToPipMappingTable_data *);
int ieee8021PbbVipToPipMappingTable_del(struct ieee8021PbbVipToPipMappingTable_data *);
void parse_ieee8021PbbVipToPipMappingTable(const char *, char *);
SNMPCallback store_ieee8021PbbVipToPipMappingTable;
void refresh_ieee8021PbbVipToPipMappingTable(int);
FindVarMethod var_ieee8021PbbCBPServiceMappingTable;
struct ieee8021PbbCBPServiceMappingTable_data *ieee8021PbbCBPServiceMappingTable_create(void);
struct ieee8021PbbCBPServiceMappingTable_data *ieee8021PbbCBPServiceMappingTable_duplicate(struct ieee8021PbbCBPServiceMappingTable_data *);
int ieee8021PbbCBPServiceMappingTable_destroy(struct ieee8021PbbCBPServiceMappingTable_data **);
int ieee8021PbbCBPServiceMappingTable_add(struct ieee8021PbbCBPServiceMappingTable_data *);
int ieee8021PbbCBPServiceMappingTable_del(struct ieee8021PbbCBPServiceMappingTable_data *);
void parse_ieee8021PbbCBPServiceMappingTable(const char *, char *);
SNMPCallback store_ieee8021PbbCBPServiceMappingTable;
void refresh_ieee8021PbbCBPServiceMappingTable(int);
FindVarMethod var_ieee8021PbbCbpTable;
struct ieee8021PbbCbpTable_data *ieee8021PbbCbpTable_create(void);
struct ieee8021PbbCbpTable_data *ieee8021PbbCbpTable_duplicate(struct ieee8021PbbCbpTable_data *);
int ieee8021PbbCbpTable_destroy(struct ieee8021PbbCbpTable_data **);
int ieee8021PbbCbpTable_add(struct ieee8021PbbCbpTable_data *);
int ieee8021PbbCbpTable_del(struct ieee8021PbbCbpTable_data *);
void parse_ieee8021PbbCbpTable(const char *, char *);
SNMPCallback store_ieee8021PbbCbpTable;
void refresh_ieee8021PbbCbpTable(int);

WriteMethod write_ieee8021PbbBackboneEdgeBridgeName;
WriteMethod write_ieee8021PbbVipISid;
WriteMethod write_ieee8021PbbVipType;
WriteMethod write_ieee8021PbbVipRowStatus;
WriteMethod write_ieee8021PbbVipEnableConnectionId;
WriteMethod write_ieee8021PbbPipBMACAddress;
WriteMethod write_ieee8021PbbPipName;
WriteMethod write_ieee8021PbbPipVipMap;
WriteMethod write_ieee8021PbbPipVipMap1;
WriteMethod write_ieee8021PbbPipVipMap2;
WriteMethod write_ieee8021PbbPipVipMap3;
WriteMethod write_ieee8021PbbPipVipMap4;
WriteMethod write_ieee8021PbbPipRowStatus;
WriteMethod write_ieee8021PbbPipPriorityCodePointSelection;
WriteMethod write_ieee8021PbbPipUseDEI;
WriteMethod write_ieee8021PbbPipRequireDropEncoding;
WriteMethod write_ieee8021PbbPipDecodingPriority;
WriteMethod write_ieee8021PbbPipDecodingDropEligible;
WriteMethod write_ieee8021PbbPipEncodingPriority;
WriteMethod write_ieee8021PbbVipToPipMappingPipIfIndex;
WriteMethod write_ieee8021PbbVipToPipMappingStorageType;
WriteMethod write_ieee8021PbbVipToPipMappingRowStatus;
WriteMethod write_ieee8021PbbCBPServiceMappingBVid;
WriteMethod write_ieee8021PbbCBPServiceMappingDefaultBackboneDest;
WriteMethod write_ieee8021PbbCBPServiceMappingType;
WriteMethod write_ieee8021PbbCBPServiceMappingLocalSid;
WriteMethod write_ieee8021PbbCBPServiceMappingRowStatus;
WriteMethod write_ieee8021PbbCbpRowStatus;
#endif				/* __LOCAL_IEEE8021PBBMIB_H__ */
