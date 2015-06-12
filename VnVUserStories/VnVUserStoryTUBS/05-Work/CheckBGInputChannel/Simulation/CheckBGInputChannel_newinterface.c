#include "CheckBGInputChannel_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "2114eae6967945954937b5358d38b73d";
const char* _SCSIM_SmuTypesCheckSum = "d5b51fa9eff9683da46173266ac496c5";

/*******************************
 * Validity
 *******************************/
int valid(void * pHandle) {
	return 1;
}
int notvalid(void * pHandle) {
	return 0;
}

/*******************************
 * Simulation context
 *******************************/
inC_Listen_on_BTM_CheckBGInputChannel_Pkg inputs_ctx;
static inC_Listen_on_BTM_CheckBGInputChannel_Pkg inputs_ctx_restore;
static inC_Listen_on_BTM_CheckBGInputChannel_Pkg inputs_ctx_execute;
outC_Listen_on_BTM_CheckBGInputChannel_Pkg outputs_ctx;
static outC_Listen_on_BTM_CheckBGInputChannel_Pkg outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__2714(&(inputs_ctx.BTM_TrackMsg), &(inputs_ctx_restore.BTM_TrackMsg));
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__2714(&(inputs_ctx_execute.BTM_TrackMsg), &(inputs_ctx.BTM_TrackMsg));
	pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/*******************************
 * Cyclic function encapsulation
 *******************************/
void SimInit(void) {
	/* Context initialization */
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
	Listen_on_BTM_reset_CheckBGInputChannel_Pkg(&outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
int SimStep(void) {
#ifdef EXTENDED_SIM
	if (GraphicalInputsConnected)
		BeforeSimStep();
#endif /* EXTENDED_SIM */
	_SCSIM_ExecuteInterface();
	Listen_on_BTM_CheckBGInputChannel_Pkg(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimStep();
#endif /* EXTENDED_SIM */
	return 1;
}

void SimStop(void) {
#ifdef EXTENDED_SIM
	ExtendedSimStop();
#endif /* EXTENDED_SIM */
}

int SsmGetDumpSize(void) {
	int nSize = 0;
	nSize += sizeof(inC_Listen_on_BTM_CheckBGInputChannel_Pkg);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_Listen_on_BTM_CheckBGInputChannel_Pkg);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_Listen_on_BTM_CheckBGInputChannel_Pkg));
	pCurrent += sizeof(inC_Listen_on_BTM_CheckBGInputChannel_Pkg);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_Listen_on_BTM_CheckBGInputChannel_Pkg));
	pCurrent += sizeof(outC_Listen_on_BTM_CheckBGInputChannel_Pkg);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_Listen_on_BTM_CheckBGInputChannel_Pkg));
	pCurrent += sizeof(inC_Listen_on_BTM_CheckBGInputChannel_Pkg);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_Listen_on_BTM_CheckBGInputChannel_Pkg));
	pCurrent += sizeof(outC_Listen_on_BTM_CheckBGInputChannel_Pkg);
#ifdef EXTENDED_SIM
	ExtendedRestoreDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

const char * SsmGetCheckSum() {
	return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
	return _SCSIM_SmuTypesCheckSum;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
	UpdateValues();
#endif /* EXTENDED_SIM */
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
	GraphicalInputsConnected = bConnect;
#endif /* EXTENDED_SIM */
}

