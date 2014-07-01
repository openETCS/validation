#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

#include "avl.h"

typedef int bool;  /* 0 or 1     */
typedef int comp;  /* -1, 0 or 1 */


/* DATA STURCUTURE */

typedef struct {
	int root__TrainInterfaceInput_EmergencyBrakeCommand;
	int root__ServiceBrakeCommand;
	int root__AbstractPosition_dLocation;
	bool root__isTargetUpdated;
	bool root__displayPermittedSpeed;
	int root__SpeedSupervisionStatus;
	bool root__displaySBI;
	float root__V_mrspmin;
	float root__SimulatedTrainSpeed;
	float root__permittedSpeed;
	float root__dV_warning;
	float root__targetSpeed;
	float root__V_mrsp;
	int root__dLocation;
	int root__DriveCommand;
	float root__OdometrySerialInterface_SimulatedTrainSpeed;
	bool root__AbstractPosition_isTargetUpdated;
	float root__DMIInput_targetSpeed;
	float root__DMIInput_permittedSpeed;
	int root__TrainInterfaceInput_ServiceBrakeCommand;
	float root__currentSpeed;
	float root__dV_ebi;
	float root__SupervisionLimits_V_mrsp;
	bool root__TracksideInputs_RevocationEmergencyBrake;
	float root__dV_sbi;
	bool root__DMIInput_displayPermittedSpeed;
	int root__DMIInput_SpeedSupervisionStatus;
	int root__ControlSUTCommand_SUTCommand;
	bool root__SBAvailable;
	int root__SUTCommand;
	bool root__sbCmd;
	bool root__RevocationEmergencyBrake;
	bool root__DMIInput_displaySBI;
	int root__EmergencyBrakeCommand;
	bool root__TrainInputs_SBAvailable;
	float root__DMIInput_currentSpeed;
} value;

/* makes a new value, unitialized */
value *new_value () {
	return (value *)malloc(sizeof(value));
}

/* makes a value out of components */
value *make_value (int root__TrainInterfaceInput_EmergencyBrakeCommand, int root__ServiceBrakeCommand, int root__AbstractPosition_dLocation, bool root__isTargetUpdated, bool root__displayPermittedSpeed, int root__SpeedSupervisionStatus, bool root__displaySBI, float root__V_mrspmin, float root__SimulatedTrainSpeed, float root__permittedSpeed, float root__dV_warning, float root__targetSpeed, float root__V_mrsp, int root__dLocation, int root__DriveCommand, float root__OdometrySerialInterface_SimulatedTrainSpeed, bool root__AbstractPosition_isTargetUpdated, float root__DMIInput_targetSpeed, float root__DMIInput_permittedSpeed, int root__TrainInterfaceInput_ServiceBrakeCommand, float root__currentSpeed, float root__dV_ebi, float root__SupervisionLimits_V_mrsp, bool root__TracksideInputs_RevocationEmergencyBrake, float root__dV_sbi, bool root__DMIInput_displayPermittedSpeed, int root__DMIInput_SpeedSupervisionStatus, int root__ControlSUTCommand_SUTCommand, bool root__SBAvailable, int root__SUTCommand, bool root__sbCmd, bool root__RevocationEmergencyBrake, bool root__DMIInput_displaySBI, int root__EmergencyBrakeCommand, bool root__TrainInputs_SBAvailable, float root__DMIInput_currentSpeed) {
	value *w = new_value ();

	w->root__TrainInterfaceInput_EmergencyBrakeCommand = root__TrainInterfaceInput_EmergencyBrakeCommand;
	w->root__ServiceBrakeCommand = root__ServiceBrakeCommand;
	w->root__AbstractPosition_dLocation = root__AbstractPosition_dLocation;
	w->root__isTargetUpdated = root__isTargetUpdated;
	w->root__displayPermittedSpeed = root__displayPermittedSpeed;
	w->root__SpeedSupervisionStatus = root__SpeedSupervisionStatus;
	w->root__displaySBI = root__displaySBI;
	w->root__V_mrspmin = root__V_mrspmin;
	w->root__SimulatedTrainSpeed = root__SimulatedTrainSpeed;
	w->root__permittedSpeed = root__permittedSpeed;
	w->root__dV_warning = root__dV_warning;
	w->root__targetSpeed = root__targetSpeed;
	w->root__V_mrsp = root__V_mrsp;
	w->root__dLocation = root__dLocation;
	w->root__DriveCommand = root__DriveCommand;
	w->root__OdometrySerialInterface_SimulatedTrainSpeed = root__OdometrySerialInterface_SimulatedTrainSpeed;
	w->root__AbstractPosition_isTargetUpdated = root__AbstractPosition_isTargetUpdated;
	w->root__DMIInput_targetSpeed = root__DMIInput_targetSpeed;
	w->root__DMIInput_permittedSpeed = root__DMIInput_permittedSpeed;
	w->root__TrainInterfaceInput_ServiceBrakeCommand = root__TrainInterfaceInput_ServiceBrakeCommand;
	w->root__currentSpeed = root__currentSpeed;
	w->root__dV_ebi = root__dV_ebi;
	w->root__SupervisionLimits_V_mrsp = root__SupervisionLimits_V_mrsp;
	w->root__TracksideInputs_RevocationEmergencyBrake = root__TracksideInputs_RevocationEmergencyBrake;
	w->root__dV_sbi = root__dV_sbi;
	w->root__DMIInput_displayPermittedSpeed = root__DMIInput_displayPermittedSpeed;
	w->root__DMIInput_SpeedSupervisionStatus = root__DMIInput_SpeedSupervisionStatus;
	w->root__ControlSUTCommand_SUTCommand = root__ControlSUTCommand_SUTCommand;
	w->root__SBAvailable = root__SBAvailable;
	w->root__SUTCommand = root__SUTCommand;
	w->root__sbCmd = root__sbCmd;
	w->root__RevocationEmergencyBrake = root__RevocationEmergencyBrake;
	w->root__DMIInput_displaySBI = root__DMIInput_displaySBI;
	w->root__EmergencyBrakeCommand = root__EmergencyBrakeCommand;
	w->root__TrainInputs_SBAvailable = root__TrainInputs_SBAvailable;
	w->root__DMIInput_currentSpeed = root__DMIInput_currentSpeed;

	return w;
}

/* AVL */

void free_value (value *v) {
	free(v);
}

comp compare_value (value *v1, value *v2) {
	/* root__TrainInterfaceInput_EmergencyBrakeCommand */
	if (v1->root__TrainInterfaceInput_EmergencyBrakeCommand > v2->root__TrainInterfaceInput_EmergencyBrakeCommand) return 1;
	if (v1->root__TrainInterfaceInput_EmergencyBrakeCommand < v2->root__TrainInterfaceInput_EmergencyBrakeCommand) return -1;

	/* root__ServiceBrakeCommand */
	if (v1->root__ServiceBrakeCommand > v2->root__ServiceBrakeCommand) return 1;
	if (v1->root__ServiceBrakeCommand < v2->root__ServiceBrakeCommand) return -1;

	/* root__AbstractPosition_dLocation */
	if (v1->root__AbstractPosition_dLocation > v2->root__AbstractPosition_dLocation) return 1;
	if (v1->root__AbstractPosition_dLocation < v2->root__AbstractPosition_dLocation) return -1;

	/* root__isTargetUpdated */
	if (v1->root__isTargetUpdated > v2->root__isTargetUpdated) return 1;
	if (v1->root__isTargetUpdated < v2->root__isTargetUpdated) return -1;

	/* root__displayPermittedSpeed */
	if (v1->root__displayPermittedSpeed > v2->root__displayPermittedSpeed) return 1;
	if (v1->root__displayPermittedSpeed < v2->root__displayPermittedSpeed) return -1;

	/* root__SpeedSupervisionStatus */
	if (v1->root__SpeedSupervisionStatus > v2->root__SpeedSupervisionStatus) return 1;
	if (v1->root__SpeedSupervisionStatus < v2->root__SpeedSupervisionStatus) return -1;

	/* root__displaySBI */
	if (v1->root__displaySBI > v2->root__displaySBI) return 1;
	if (v1->root__displaySBI < v2->root__displaySBI) return -1;

	/* root__V_mrspmin */
	if (v1->root__V_mrspmin > v2->root__V_mrspmin) return 1;
	if (v1->root__V_mrspmin < v2->root__V_mrspmin) return -1;

	/* root__SimulatedTrainSpeed */
	if (v1->root__SimulatedTrainSpeed > v2->root__SimulatedTrainSpeed) return 1;
	if (v1->root__SimulatedTrainSpeed < v2->root__SimulatedTrainSpeed) return -1;

	/* root__permittedSpeed */
	if (v1->root__permittedSpeed > v2->root__permittedSpeed) return 1;
	if (v1->root__permittedSpeed < v2->root__permittedSpeed) return -1;

	/* root__dV_warning */
	if (v1->root__dV_warning > v2->root__dV_warning) return 1;
	if (v1->root__dV_warning < v2->root__dV_warning) return -1;

	/* root__targetSpeed */
	if (v1->root__targetSpeed > v2->root__targetSpeed) return 1;
	if (v1->root__targetSpeed < v2->root__targetSpeed) return -1;

	/* root__V_mrsp */
	if (v1->root__V_mrsp > v2->root__V_mrsp) return 1;
	if (v1->root__V_mrsp < v2->root__V_mrsp) return -1;

	/* root__dLocation */
	if (v1->root__dLocation > v2->root__dLocation) return 1;
	if (v1->root__dLocation < v2->root__dLocation) return -1;

	/* root__DriveCommand */
	if (v1->root__DriveCommand > v2->root__DriveCommand) return 1;
	if (v1->root__DriveCommand < v2->root__DriveCommand) return -1;

	/* root__OdometrySerialInterface_SimulatedTrainSpeed */
	if (v1->root__OdometrySerialInterface_SimulatedTrainSpeed > v2->root__OdometrySerialInterface_SimulatedTrainSpeed) return 1;
	if (v1->root__OdometrySerialInterface_SimulatedTrainSpeed < v2->root__OdometrySerialInterface_SimulatedTrainSpeed) return -1;

	/* root__AbstractPosition_isTargetUpdated */
	if (v1->root__AbstractPosition_isTargetUpdated > v2->root__AbstractPosition_isTargetUpdated) return 1;
	if (v1->root__AbstractPosition_isTargetUpdated < v2->root__AbstractPosition_isTargetUpdated) return -1;

	/* root__DMIInput_targetSpeed */
	if (v1->root__DMIInput_targetSpeed > v2->root__DMIInput_targetSpeed) return 1;
	if (v1->root__DMIInput_targetSpeed < v2->root__DMIInput_targetSpeed) return -1;

	/* root__DMIInput_permittedSpeed */
	if (v1->root__DMIInput_permittedSpeed > v2->root__DMIInput_permittedSpeed) return 1;
	if (v1->root__DMIInput_permittedSpeed < v2->root__DMIInput_permittedSpeed) return -1;

	/* root__TrainInterfaceInput_ServiceBrakeCommand */
	if (v1->root__TrainInterfaceInput_ServiceBrakeCommand > v2->root__TrainInterfaceInput_ServiceBrakeCommand) return 1;
	if (v1->root__TrainInterfaceInput_ServiceBrakeCommand < v2->root__TrainInterfaceInput_ServiceBrakeCommand) return -1;

	/* root__currentSpeed */
	if (v1->root__currentSpeed > v2->root__currentSpeed) return 1;
	if (v1->root__currentSpeed < v2->root__currentSpeed) return -1;

	/* root__dV_ebi */
	if (v1->root__dV_ebi > v2->root__dV_ebi) return 1;
	if (v1->root__dV_ebi < v2->root__dV_ebi) return -1;

	/* root__SupervisionLimits_V_mrsp */
	if (v1->root__SupervisionLimits_V_mrsp > v2->root__SupervisionLimits_V_mrsp) return 1;
	if (v1->root__SupervisionLimits_V_mrsp < v2->root__SupervisionLimits_V_mrsp) return -1;

	/* root__TracksideInputs_RevocationEmergencyBrake */
	if (v1->root__TracksideInputs_RevocationEmergencyBrake > v2->root__TracksideInputs_RevocationEmergencyBrake) return 1;
	if (v1->root__TracksideInputs_RevocationEmergencyBrake < v2->root__TracksideInputs_RevocationEmergencyBrake) return -1;

	/* root__dV_sbi */
	if (v1->root__dV_sbi > v2->root__dV_sbi) return 1;
	if (v1->root__dV_sbi < v2->root__dV_sbi) return -1;

	/* root__DMIInput_displayPermittedSpeed */
	if (v1->root__DMIInput_displayPermittedSpeed > v2->root__DMIInput_displayPermittedSpeed) return 1;
	if (v1->root__DMIInput_displayPermittedSpeed < v2->root__DMIInput_displayPermittedSpeed) return -1;

	/* root__DMIInput_SpeedSupervisionStatus */
	if (v1->root__DMIInput_SpeedSupervisionStatus > v2->root__DMIInput_SpeedSupervisionStatus) return 1;
	if (v1->root__DMIInput_SpeedSupervisionStatus < v2->root__DMIInput_SpeedSupervisionStatus) return -1;

	/* root__ControlSUTCommand_SUTCommand */
	if (v1->root__ControlSUTCommand_SUTCommand > v2->root__ControlSUTCommand_SUTCommand) return 1;
	if (v1->root__ControlSUTCommand_SUTCommand < v2->root__ControlSUTCommand_SUTCommand) return -1;

	/* root__SBAvailable */
	if (v1->root__SBAvailable > v2->root__SBAvailable) return 1;
	if (v1->root__SBAvailable < v2->root__SBAvailable) return -1;

	/* root__SUTCommand */
	if (v1->root__SUTCommand > v2->root__SUTCommand) return 1;
	if (v1->root__SUTCommand < v2->root__SUTCommand) return -1;

	/* root__sbCmd */
	if (v1->root__sbCmd > v2->root__sbCmd) return 1;
	if (v1->root__sbCmd < v2->root__sbCmd) return -1;

	/* root__RevocationEmergencyBrake */
	if (v1->root__RevocationEmergencyBrake > v2->root__RevocationEmergencyBrake) return 1;
	if (v1->root__RevocationEmergencyBrake < v2->root__RevocationEmergencyBrake) return -1;

	/* root__DMIInput_displaySBI */
	if (v1->root__DMIInput_displaySBI > v2->root__DMIInput_displaySBI) return 1;
	if (v1->root__DMIInput_displaySBI < v2->root__DMIInput_displaySBI) return -1;

	/* root__EmergencyBrakeCommand */
	if (v1->root__EmergencyBrakeCommand > v2->root__EmergencyBrakeCommand) return 1;
	if (v1->root__EmergencyBrakeCommand < v2->root__EmergencyBrakeCommand) return -1;

	/* root__TrainInputs_SBAvailable */
	if (v1->root__TrainInputs_SBAvailable > v2->root__TrainInputs_SBAvailable) return 1;
	if (v1->root__TrainInputs_SBAvailable < v2->root__TrainInputs_SBAvailable) return -1;

	/* root__DMIInput_currentSpeed */
	if (v1->root__DMIInput_currentSpeed > v2->root__DMIInput_currentSpeed) return 1;
	if (v1->root__DMIInput_currentSpeed < v2->root__DMIInput_currentSpeed) return -1;

	return 0;
}

/* TINA APIs */

key initial () {
	init_storage(compare_value,free_value,sizeof(value));
	return store (make_value (0, 0, 0, 1, 1, 6, 1, 110, 0, 0, 4.0, 0, 160, 0, 1, 0, 1, 0, 0, 0, 0, 7.5, 0, 1, 5.5, 1, 0, 0, 1, 3, 0, 1, 1, 0, 1, 0));
}

/* 
int root__TrainInterfaceInput_EmergencyBrakeCommand: 0
int root__ServiceBrakeCommand: 0
int root__AbstractPosition_dLocation: 0
bool root__isTargetUpdated: 1
bool root__displayPermittedSpeed: 1
int root__SpeedSupervisionStatus: 6
bool root__displaySBI: 1
float root__V_mrspmin: 110
float root__SimulatedTrainSpeed: 0
float root__permittedSpeed: 0
float root__dV_warning: 4.0
float root__targetSpeed: 0
float root__V_mrsp: 160
int root__dLocation: 0
int root__DriveCommand: 1
float root__OdometrySerialInterface_SimulatedTrainSpeed: 0
bool root__AbstractPosition_isTargetUpdated: 1
float root__DMIInput_targetSpeed: 0
float root__DMIInput_permittedSpeed: 0
int root__TrainInterfaceInput_ServiceBrakeCommand: 0
float root__currentSpeed: 0
float root__dV_ebi: 7.5
float root__SupervisionLimits_V_mrsp: 0
bool root__TracksideInputs_RevocationEmergencyBrake: 1
float root__dV_sbi: 5.5
bool root__DMIInput_displayPermittedSpeed: 1
int root__DMIInput_SpeedSupervisionStatus: 0
int root__ControlSUTCommand_SUTCommand: 0
bool root__SBAvailable: 1
int root__SUTCommand: 3
bool root__sbCmd: 0
bool root__RevocationEmergencyBrake: 1
bool root__DMIInput_displaySBI: 1
int root__EmergencyBrakeCommand: 0
bool root__TrainInputs_SBAvailable: 1
float root__DMIInput_currentSpeed: 0
*/

/* -- Transition APIs -- */

/* trans table */
char *transtable[119] = {"root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BETWEEN_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MIN_0_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MIN_0_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MAX_1_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MAX_1_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2MAX_2_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2MAX_2_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2BTW_3_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2BTW_3_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_INIT_4_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2MIN_5_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2MIN_5_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2BTW_6_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2BTW_6_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BETWEEN_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MAX_0_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MAX_0_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MIN_1_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MIN_1_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2MIN_2_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2MIN_2_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2BTW_3_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2BTW_3_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_INIT_4_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2MAX_5_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2MAX_5_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2BTW_6_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2BTW_6_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BETWEEN_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_INIT_0_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2MIN_1_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2MIN_1_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2BTW_2_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2BTW_2_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MIN_3_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MIN_3_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MAX_4_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MAX_4_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2MAX_5_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2MAX_5_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2BTW_6_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2BTW_6_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_NORMAL_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVERSPEED_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SERVICE_BRAKE_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARNING_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_EMER_BRAKE_doactivity", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_N2OVP_0_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_N2OVP_0_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_1_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_2_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_3_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2WARN_4_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2WARN_4_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2N_5_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2N_5_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_6_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_7_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_8_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2RSM_10_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2RSM_10_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2CSM_11_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2CSM_11_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2EB_12_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2EB_12_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2N_13_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2N_13_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_14_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_15_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_16_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2SB_17_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2SB_17_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2N_18_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2N_18_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_19_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_20_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_21_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_EB2N_22_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_EB2N_22_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_23_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_24_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_25_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_START_CSM_26_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_START_CSM_26_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_RSM2CSM_27_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_RSM2CSM_27_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1__NAME_80_28_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2EB_30_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2EB_30_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2N_31_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2N_31_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2SB_32_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2SB_32_beh", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_33_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_34_guard", "root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_35_guard", "root__SysMLmodel_SYSTEM_TestDriver_TestDriver_Region1_T2_0_beh", "root__SysMLmodel_SYSTEM_TestDriver_TestDriver_Region1_T1_2_beh", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_EBrake_doactivity", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_Dec_doactivity", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_Acc_doactivity", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_SBrake_doactivity", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_EB2R_0_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_EB2SB_1_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_D2N_2_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2S_3_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2EB_4_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2SB_5_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_A2N_6_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2S_7_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2EB_8_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2SB_9_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_SB2EB_10_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_SB2R_11_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_N2A_13_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_N2D_14_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2S_15_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2EB_16_guard", "root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2SB_17_guard"};
char **transitions (int *sz) {*sz = 119; return transtable;}


/* -- PREDICATES -- */

/* !((V_mrsp<=110)||(V_mrsp>210)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BETWEEN_doactivity */
bool pre_0 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__V_mrsp<=110)||(v->root__V_mrsp>210)))?1:0;
}

/* V_mrsp<=110 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MIN_0_guard */
bool pre_1 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp<=110)?1:0;
}

/* V_mrsp>210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MAX_1_guard */
bool pre_3 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp>210)?1:0;
}

/* V_mrsp>210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2MAX_2_guard */
bool pre_5 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp>210)?1:0;
}

/* 110<V_mrsp&&V_mrsp<=210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2BTW_3_guard */
bool pre_7 (key s) 
{
	value *v = lookup(s);
	return (110<v->root__V_mrsp&&v->root__V_mrsp<=210)?1:0;
}

/* V_mrsp<=110 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2MIN_5_guard */
bool pre_10 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp<=110)?1:0;
}

/* 110<V_mrsp&&V_mrsp<=210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2BTW_6_guard */
bool pre_12 (key s) 
{
	value *v = lookup(s);
	return (110<v->root__V_mrsp&&v->root__V_mrsp<=210)?1:0;
}

/* !((V_mrsp>210)||(V_mrsp<=110)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BETWEEN_doactivity */
bool pre_14 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__V_mrsp>210)||(v->root__V_mrsp<=110)))?1:0;
}

/* V_mrsp>210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MAX_0_guard */
bool pre_15 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp>210)?1:0;
}

/* V_mrsp<=110 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MIN_1_guard */
bool pre_17 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp<=110)?1:0;
}

/* V_mrsp<=110 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2MIN_2_guard */
bool pre_19 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp<=110)?1:0;
}

/* 110<V_mrsp&&V_mrsp<=210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2BTW_3_guard */
bool pre_21 (key s) 
{
	value *v = lookup(s);
	return (110<v->root__V_mrsp&&v->root__V_mrsp<=210)?1:0;
}

/* V_mrsp>210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2MAX_5_guard */
bool pre_24 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp>210)?1:0;
}

/* 110<V_mrsp&&V_mrsp<=210 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2BTW_6_guard */
bool pre_26 (key s) 
{
	value *v = lookup(s);
	return (110<v->root__V_mrsp&&v->root__V_mrsp<=210)?1:0;
}

/* !((V_mrsp<=110)||(V_mrsp>140)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BETWEEN_doactivity */
bool pre_28 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__V_mrsp<=110)||(v->root__V_mrsp>140)))?1:0;
}

/* V_mrsp<=110 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2MIN_1_guard */
bool pre_30 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp<=110)?1:0;
}

/* 110<V_mrsp&&V_mrsp<=140 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2BTW_2_guard */
bool pre_32 (key s) 
{
	value *v = lookup(s);
	return (110<v->root__V_mrsp&&v->root__V_mrsp<=140)?1:0;
}

/* V_mrsp<=110 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MIN_3_guard */
bool pre_34 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp<=110)?1:0;
}

/* V_mrsp>140 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MAX_4_guard */
bool pre_36 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp>140)?1:0;
}

/* V_mrsp>140 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2MAX_5_guard */
bool pre_38 (key s) 
{
	value *v = lookup(s);
	return (v->root__V_mrsp>140)?1:0;
}

/* 110<V_mrsp&&V_mrsp<=140 : root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2BTW_6_guard */
bool pre_40 (key s) 
{
	value *v = lookup(s);
	return (110<v->root__V_mrsp&&v->root__V_mrsp<=140)?1:0;
}

/* !((SimulatedTrainSpeed>V_mrsp)||(SUTCommand==5)||(dLocation==1)||(dLocation==2&&isTargetUpdated)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_NORMAL_doactivity */
bool pre_42 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__SimulatedTrainSpeed>v->root__V_mrsp)||(v->root__SUTCommand==5)||(v->root__dLocation==1)||(v->root__dLocation==2&&v->root__isTargetUpdated)))?1:0;
}

/* !((SimulatedTrainSpeed>V_mrsp+dV_warning)||(SimulatedTrainSpeed<=V_mrsp)||(SUTCommand==5)||(dLocation==1)||(dLocation==2&&isTargetUpdated)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVERSPEED_doactivity */
bool pre_43 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__SimulatedTrainSpeed>v->root__V_mrsp+v->root__dV_warning)||(v->root__SimulatedTrainSpeed<=v->root__V_mrsp)||(v->root__SUTCommand==5)||(v->root__dLocation==1)||(v->root__dLocation==2&&v->root__isTargetUpdated)))?1:0;
}

/* !((SimulatedTrainSpeed>V_mrsp+dV_ebi)||(SimulatedTrainSpeed<=V_mrsp)||(SUTCommand==5)||(dLocation==1)||(dLocation==2&&isTargetUpdated)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SERVICE_BRAKE_doactivity */
bool pre_44 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__SimulatedTrainSpeed>v->root__V_mrsp+v->root__dV_ebi)||(v->root__SimulatedTrainSpeed<=v->root__V_mrsp)||(v->root__SUTCommand==5)||(v->root__dLocation==1)||(v->root__dLocation==2&&v->root__isTargetUpdated)))?1:0;
}

/* !((SimulatedTrainSpeed>V_mrsp+dV_sbi)||(SimulatedTrainSpeed<=V_mrsp)||(SUTCommand==5)||(dLocation==1)||(dLocation==2&&isTargetUpdated)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARNING_doactivity */
bool pre_45 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__SimulatedTrainSpeed>v->root__V_mrsp+v->root__dV_sbi)||(v->root__SimulatedTrainSpeed<=v->root__V_mrsp)||(v->root__SUTCommand==5)||(v->root__dLocation==1)||(v->root__dLocation==2&&v->root__isTargetUpdated)))?1:0;
}

/* !(((SimulatedTrainSpeed<=V_mrsp&&RevocationEmergencyBrake)||(SimulatedTrainSpeed==0))||(SUTCommand==5)||(dLocation==1)||(dLocation==2&&isTargetUpdated)) : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_EMER_BRAKE_doactivity */
bool pre_46 (key s) 
{
	value *v = lookup(s);
	return (!(((v->root__SimulatedTrainSpeed<=v->root__V_mrsp&&v->root__RevocationEmergencyBrake)||(v->root__SimulatedTrainSpeed==0))||(v->root__SUTCommand==5)||(v->root__dLocation==1)||(v->root__dLocation==2&&v->root__isTargetUpdated)))?1:0;
}

/* SimulatedTrainSpeed>V_mrsp : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_N2OVP_0_guard */
bool pre_47 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed>v->root__V_mrsp)?1:0;
}

/* SUTCommand==5 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_1_guard */
bool pre_49 (key s) 
{
	value *v = lookup(s);
	return (v->root__SUTCommand==5)?1:0;
}

/* dLocation==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_2_guard */
bool pre_50 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==1)?1:0;
}

/* dLocation==2&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_3_guard */
bool pre_51 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==2&&v->root__isTargetUpdated)?1:0;
}

/* SimulatedTrainSpeed>V_mrsp+dV_warning : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2WARN_4_guard */
bool pre_52 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed>v->root__V_mrsp+v->root__dV_warning)?1:0;
}

/* SimulatedTrainSpeed<=V_mrsp : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2N_5_guard */
bool pre_54 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed<=v->root__V_mrsp)?1:0;
}

/* SUTCommand==5 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_6_guard */
bool pre_56 (key s) 
{
	value *v = lookup(s);
	return (v->root__SUTCommand==5)?1:0;
}

/* dLocation==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_7_guard */
bool pre_57 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==1)?1:0;
}

/* dLocation==2&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_8_guard */
bool pre_58 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==2&&v->root__isTargetUpdated)?1:0;
}

/* dLocation==2 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2RSM_10_guard */
bool pre_59 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==2)?1:0;
}

/* dLocation==0&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2CSM_11_guard */
bool pre_61 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==0&&v->root__isTargetUpdated)?1:0;
}

/* SimulatedTrainSpeed>V_mrsp+dV_ebi : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2EB_12_guard */
bool pre_63 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed>v->root__V_mrsp+v->root__dV_ebi)?1:0;
}

/* SimulatedTrainSpeed<=V_mrsp : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2N_13_guard */
bool pre_65 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed<=v->root__V_mrsp)?1:0;
}

/* SUTCommand==5 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_14_guard */
bool pre_67 (key s) 
{
	value *v = lookup(s);
	return (v->root__SUTCommand==5)?1:0;
}

/* dLocation==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_15_guard */
bool pre_68 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==1)?1:0;
}

/* dLocation==2&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_16_guard */
bool pre_69 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==2&&v->root__isTargetUpdated)?1:0;
}

/* SimulatedTrainSpeed>V_mrsp+dV_sbi : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2SB_17_guard */
bool pre_70 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed>v->root__V_mrsp+v->root__dV_sbi)?1:0;
}

/* SimulatedTrainSpeed<=V_mrsp : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2N_18_guard */
bool pre_72 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed<=v->root__V_mrsp)?1:0;
}

/* SUTCommand==5 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_19_guard */
bool pre_74 (key s) 
{
	value *v = lookup(s);
	return (v->root__SUTCommand==5)?1:0;
}

/* dLocation==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_20_guard */
bool pre_75 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==1)?1:0;
}

/* dLocation==2&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_21_guard */
bool pre_76 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==2&&v->root__isTargetUpdated)?1:0;
}

/* (SimulatedTrainSpeed<=V_mrsp&&RevocationEmergencyBrake)||(SimulatedTrainSpeed==0) : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_EB2N_22_guard */
bool pre_77 (key s) 
{
	value *v = lookup(s);
	return ((v->root__SimulatedTrainSpeed<=v->root__V_mrsp&&v->root__RevocationEmergencyBrake)||(v->root__SimulatedTrainSpeed==0))?1:0;
}

/* SUTCommand==5 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_23_guard */
bool pre_79 (key s) 
{
	value *v = lookup(s);
	return (v->root__SUTCommand==5)?1:0;
}

/* dLocation==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_24_guard */
bool pre_80 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==1)?1:0;
}

/* dLocation==2&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_25_guard */
bool pre_81 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==2&&v->root__isTargetUpdated)?1:0;
}

/* SUTCommand==3 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_START_CSM_26_guard */
bool pre_82 (key s) 
{
	value *v = lookup(s);
	return (v->root__SUTCommand==3)?1:0;
}

/* dLocation==0&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_RSM2CSM_27_guard */
bool pre_84 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==0&&v->root__isTargetUpdated)?1:0;
}

/* dLocation==1&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1__NAME_80_28_guard */
bool pre_86 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==1&&v->root__isTargetUpdated)?1:0;
}

/* EmergencyBrakeCommand==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2EB_30_guard */
bool pre_87 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand==1)?1:0;
}

/* EmergencyBrakeCommand!=1&&ServiceBrakeCommand!=1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2N_31_guard */
bool pre_89 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand!=1&&v->root__ServiceBrakeCommand!=1)?1:0;
}

/* EmergencyBrakeCommand!=1&&ServiceBrakeCommand==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2SB_32_guard */
bool pre_91 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand!=1&&v->root__ServiceBrakeCommand==1)?1:0;
}

/* SUTCommand==5 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_STOP_CSM_33_guard */
bool pre_93 (key s) 
{
	value *v = lookup(s);
	return (v->root__SUTCommand==5)?1:0;
}

/* dLocation==1 : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2TSM_34_guard */
bool pre_94 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==1)?1:0;
}

/* dLocation==2&&isTargetUpdated : root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM2RSM_35_guard */
bool pre_95 (key s) 
{
	value *v = lookup(s);
	return (v->root__dLocation==2&&v->root__isTargetUpdated)?1:0;
}

/* !((EmergencyBrakeCommand==0&&ServiceBrakeCommand==0)||(ServiceBrakeCommand==1&&EmergencyBrakeCommand==0)) : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_EBrake_doactivity */
bool pre_98 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__EmergencyBrakeCommand==0&&v->root__ServiceBrakeCommand==0)||(v->root__ServiceBrakeCommand==1&&v->root__EmergencyBrakeCommand==0)))?1:0;
}

/* !((DriveCommand!=2)||(SimulatedTrainSpeed<=1)||(EmergencyBrakeCommand==1)||(ServiceBrakeCommand==1&&EmergencyBrakeCommand==0)) : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_Dec_doactivity */
bool pre_99 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__DriveCommand!=2)||(v->root__SimulatedTrainSpeed<=1)||(v->root__EmergencyBrakeCommand==1)||(v->root__ServiceBrakeCommand==1&&v->root__EmergencyBrakeCommand==0)))?1:0;
}

/* !((DriveCommand!=1)||(SimulatedTrainSpeed<=1)||(EmergencyBrakeCommand==1)||(ServiceBrakeCommand==1&&EmergencyBrakeCommand==0)) : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_Acc_doactivity */
bool pre_100 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__DriveCommand!=1)||(v->root__SimulatedTrainSpeed<=1)||(v->root__EmergencyBrakeCommand==1)||(v->root__ServiceBrakeCommand==1&&v->root__EmergencyBrakeCommand==0)))?1:0;
}

/* !((EmergencyBrakeCommand==1)||(ServiceBrakeCommand==0&&EmergencyBrakeCommand==0)) : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_SBrake_doactivity */
bool pre_101 (key s) 
{
	value *v = lookup(s);
	return (!((v->root__EmergencyBrakeCommand==1)||(v->root__ServiceBrakeCommand==0&&v->root__EmergencyBrakeCommand==0)))?1:0;
}

/* EmergencyBrakeCommand==0&&ServiceBrakeCommand==0 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_EB2R_0_guard */
bool pre_102 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand==0&&v->root__ServiceBrakeCommand==0)?1:0;
}

/* ServiceBrakeCommand==1&&EmergencyBrakeCommand==0 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_EB2SB_1_guard */
bool pre_103 (key s) 
{
	value *v = lookup(s);
	return (v->root__ServiceBrakeCommand==1&&v->root__EmergencyBrakeCommand==0)?1:0;
}

/* DriveCommand!=2 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_D2N_2_guard */
bool pre_104 (key s) 
{
	value *v = lookup(s);
	return (v->root__DriveCommand!=2)?1:0;
}

/* SimulatedTrainSpeed<=1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2S_3_guard */
bool pre_105 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed<=1)?1:0;
}

/* EmergencyBrakeCommand==1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2EB_4_guard */
bool pre_106 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand==1)?1:0;
}

/* ServiceBrakeCommand==1&&EmergencyBrakeCommand==0 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2SB_5_guard */
bool pre_107 (key s) 
{
	value *v = lookup(s);
	return (v->root__ServiceBrakeCommand==1&&v->root__EmergencyBrakeCommand==0)?1:0;
}

/* DriveCommand!=1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_A2N_6_guard */
bool pre_108 (key s) 
{
	value *v = lookup(s);
	return (v->root__DriveCommand!=1)?1:0;
}

/* SimulatedTrainSpeed<=1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2S_7_guard */
bool pre_109 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed<=1)?1:0;
}

/* EmergencyBrakeCommand==1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2EB_8_guard */
bool pre_110 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand==1)?1:0;
}

/* ServiceBrakeCommand==1&&EmergencyBrakeCommand==0 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2SB_9_guard */
bool pre_111 (key s) 
{
	value *v = lookup(s);
	return (v->root__ServiceBrakeCommand==1&&v->root__EmergencyBrakeCommand==0)?1:0;
}

/* EmergencyBrakeCommand==1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_SB2EB_10_guard */
bool pre_112 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand==1)?1:0;
}

/* ServiceBrakeCommand==0&&EmergencyBrakeCommand==0 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_SB2R_11_guard */
bool pre_113 (key s) 
{
	value *v = lookup(s);
	return (v->root__ServiceBrakeCommand==0&&v->root__EmergencyBrakeCommand==0)?1:0;
}

/* DriveCommand==1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_N2A_13_guard */
bool pre_114 (key s) 
{
	value *v = lookup(s);
	return (v->root__DriveCommand==1)?1:0;
}

/* DriveCommand==2 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_N2D_14_guard */
bool pre_115 (key s) 
{
	value *v = lookup(s);
	return (v->root__DriveCommand==2)?1:0;
}

/* SimulatedTrainSpeed<=1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2S_15_guard */
bool pre_116 (key s) 
{
	value *v = lookup(s);
	return (v->root__SimulatedTrainSpeed<=1)?1:0;
}

/* EmergencyBrakeCommand==1 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2EB_16_guard */
bool pre_117 (key s) 
{
	value *v = lookup(s);
	return (v->root__EmergencyBrakeCommand==1)?1:0;
}

/* ServiceBrakeCommand==1&&EmergencyBrakeCommand==0 : root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_R2SB_17_guard */
bool pre_118 (key s) 
{
	value *v = lookup(s);
	return (v->root__ServiceBrakeCommand==1&&v->root__EmergencyBrakeCommand==0)?1:0;
}

/* -- ACTIONS -- */

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BETWEEN_doactivity:
	dV_sbi = 0.045*V_mrsp + 0.55;
*/
key act_0 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=0.045*old->root__V_mrsp+0.55;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MIN_0_beh:
	dV_sbi = 5.5;
*/
key act_2 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=5.5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_BTW2MAX_1_beh:
	dV_sbi = 10;
*/
key act_4 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=10;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2MAX_2_beh:
	dV_sbi = 10;
*/
key act_6 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=10;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MIN2BTW_3_beh:
	dV_sbi = 0.045*V_mrsp + 0.55;
*/
key act_8 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=0.045*old->root__V_mrsp+0.55;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_INIT_4_beh:
	dV_sbi = 5.5;
*/
key act_9 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=5.5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2MIN_5_beh:
	dV_sbi = 5.5;
*/
key act_11 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=5.5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_SBICalc_SBICalc__NAME_129_MAX2BTW_6_beh:
	dV_sbi = 0.045*V_mrsp + 0.55;
*/
key act_13 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_sbi = old->root__dV_sbi;

	/* original statements */
	dV_sbi=0.045*old->root__V_mrsp+0.55;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BETWEEN_doactivity:
	dV_ebi = 0.075*V_mrsp - 0.75;
*/
key act_14 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=0.075*old->root__V_mrsp-0.75;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MAX_0_beh:
	dV_ebi = 15;
*/
key act_16 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=15;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_BTW2MIN_1_beh:
	dV_ebi = 7.5;
*/
key act_18 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=7.5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2MIN_2_beh:
	dV_ebi = 7.5;
*/
key act_20 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=7.5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MAX2BTW_3_beh:
	dV_ebi = 0.075*V_mrsp - 0.75;
*/
key act_22 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=0.075*old->root__V_mrsp-0.75;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_INIT_4_beh:
	dV_ebi = 7.5;
*/
key act_23 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=7.5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2MAX_5_beh:
	dV_ebi = 15;
*/
key act_25 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=15;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_EBICalc_EBICalc_Region1_MIN2BTW_6_beh:
	dV_ebi = 0.075*V_mrsp - 0.75;
*/
key act_27 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_ebi = old->root__dV_ebi;

	/* original statements */
	dV_ebi=0.075*old->root__V_mrsp-0.75;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BETWEEN_doactivity:
	dV_warning = (V_mrsp/30) + (1/3);
*/
key act_28 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=(old->root__V_mrsp/30)+(1/3);

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_INIT_0_beh:
	dV_warning = 4;
*/
key act_29 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=4;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2MIN_1_beh:
	dV_warning = 4;
*/
key act_31 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=4;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MAX2BTW_2_beh:
	dV_warning = (V_mrsp/30) + (1/3);
*/
key act_33 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=(old->root__V_mrsp/30)+(1/3);

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MIN_3_beh:
	dV_warning = 4;
*/
key act_35 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=4;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_BTW2MAX_4_beh:
	dV_warning = 5;
*/
key act_37 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2MAX_5_beh:
	dV_warning = 5;
*/
key act_39 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SupervisionLimitsCalc_WarningCalc_WarningCalc_Region1_MIN2BTW_6_beh:
	dV_warning = (V_mrsp/30) + (1/3);
*/
key act_41 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float dV_warning = old->root__dV_warning;

	/* original statements */
	dV_warning=(old->root__V_mrsp/30)+(1/3);

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_NORMAL_doactivity:
	permittedSpeed = V_mrsp;
	displayPermittedSpeed=true;
	displaySBI = false;
*/
key act_42 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;
	bool displayPermittedSpeed = old->root__displayPermittedSpeed;
	bool displaySBI = old->root__displaySBI;

	/* original statements */
	permittedSpeed=old->root__V_mrsp;
	displayPermittedSpeed=1;
	displaySBI=0;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, displayPermittedSpeed, old->root__SpeedSupervisionStatus, displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVERSPEED_doactivity:
	permittedSpeed = V_mrsp;
	displayPermittedSpeed=true;
	displaySBI = true;
*/
key act_43 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;
	bool displayPermittedSpeed = old->root__displayPermittedSpeed;
	bool displaySBI = old->root__displaySBI;

	/* original statements */
	permittedSpeed=old->root__V_mrsp;
	displayPermittedSpeed=1;
	displaySBI=1;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, displayPermittedSpeed, old->root__SpeedSupervisionStatus, displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SERVICE_BRAKE_doactivity:
	permittedSpeed  = V_mrsp;
	displayPermittedSpeed=true;
	displaySBI = true;
*/
key act_44 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;
	bool displayPermittedSpeed = old->root__displayPermittedSpeed;
	bool displaySBI = old->root__displaySBI;

	/* original statements */
	permittedSpeed=old->root__V_mrsp;
	displayPermittedSpeed=1;
	displaySBI=1;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, displayPermittedSpeed, old->root__SpeedSupervisionStatus, displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARNING_doactivity:
	permittedSpeed = V_mrsp;
	
displayPermittedSpeed=true;
	
displaySBI = true;
*/
key act_45 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;
	bool displayPermittedSpeed = old->root__displayPermittedSpeed;
	bool displaySBI = old->root__displaySBI;

	/* original statements */
	permittedSpeed=old->root__V_mrsp;
	displayPermittedSpeed=1;
	displaySBI=1;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, displayPermittedSpeed, old->root__SpeedSupervisionStatus, displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_EMER_BRAKE_doactivity:
	permittedSpeed  = V_mrsp;
	displayPermittedSpeed=true;
	displaySBI = true;
*/
key act_46 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;
	bool displayPermittedSpeed = old->root__displayPermittedSpeed;
	bool displaySBI = old->root__displaySBI;

	/* original statements */
	permittedSpeed=old->root__V_mrsp;
	displayPermittedSpeed=1;
	displaySBI=1;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, displayPermittedSpeed, old->root__SpeedSupervisionStatus, displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_N2OVP_0_beh:
	SpeedSupervisionStatus = OverspeedStatus;
*/
key act_48 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;

	/* original statements */
	SpeedSupervisionStatus=8;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2WARN_4_beh:
	SpeedSupervisionStatus = WarningStatus;
	
;
*/
key act_53 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;

	/* original statements */
	SpeedSupervisionStatus=9;
	;;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_OVP2N_5_beh:
	SpeedSupervisionStatus = NormalStatus;
	
EmergencyBrakeCommand=0;
	
ServiceBrakeCommand=0;
	

;
*/
key act_55 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=6;
	EmergencyBrakeCommand=0;
	ServiceBrakeCommand=0;
	;;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2RSM_10_beh:
	ServiceBrakeCommand = 0;
*/
key act_60 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;

	/* original statements */
	ServiceBrakeCommand=0;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_TSM2CSM_11_beh:
	permittedSpeed=V_mrsp;
*/
key act_62 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;

	/* original statements */
	permittedSpeed=old->root__V_mrsp;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2EB_12_beh:
	SpeedSupervisionStatus = InterventionStatus;
	
EmergencyBrakeCommand= 1;
	
ServiceBrakeCommand= 0;
*/
key act_64 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=10;
	EmergencyBrakeCommand=1;
	ServiceBrakeCommand=0;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_SB2N_13_beh:
	SpeedSupervisionStatus = NormalStatus;
	
EmergencyBrakeCommand=0;
	
ServiceBrakeCommand=0;
	

;
*/
key act_66 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=6;
	EmergencyBrakeCommand=0;
	ServiceBrakeCommand=0;
	;;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2SB_17_beh:
	SpeedSupervisionStatus = InterventionStatus;
	
EmergencyBrakeCommand= !SBAvailable;
	
ServiceBrakeCommand= SBAvailable;
*/
key act_71 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=10;
	EmergencyBrakeCommand=!old->root__SBAvailable;
	ServiceBrakeCommand=old->root__SBAvailable;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_WARN2N_18_beh:
	SpeedSupervisionStatus = NormalStatus;
	
EmergencyBrakeCommand=0;
	
ServiceBrakeCommand=0;
	

;
*/
key act_73 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=6;
	EmergencyBrakeCommand=0;
	ServiceBrakeCommand=0;
	;;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_EB2N_22_beh:
	SpeedSupervisionStatus = NormalStatus;
	
EmergencyBrakeCommand=0;
	
ServiceBrakeCommand=0;
	

;
*/
key act_78 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=6;
	EmergencyBrakeCommand=0;
	ServiceBrakeCommand=0;
	;;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_START_CSM_26_beh:
	sbCmd=SBAvailable;
	permittedSpeed=V_mrsp;
*/
key act_83 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;
	bool sbCmd = old->root__sbCmd;

	/* original statements */
	sbCmd=old->root__SBAvailable;
	permittedSpeed=old->root__V_mrsp;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_RSM2CSM_27_beh:
	permittedSpeed=V_mrsp;
*/
key act_85 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float permittedSpeed = old->root__permittedSpeed;

	/* original statements */
	permittedSpeed=old->root__V_mrsp;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2EB_30_beh:
	SpeedSupervisionStatus = InterventionStatus;
	
EmergencyBrakeCommand= 1;
	
ServiceBrakeCommand= 0;
*/
key act_88 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=10;
	EmergencyBrakeCommand=1;
	ServiceBrakeCommand=0;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2N_31_beh:
	SpeedSupervisionStatus = NormalStatus;
	
EmergencyBrakeCommand=0;
	
ServiceBrakeCommand=0;
	

;
*/
key act_90 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=6;
	EmergencyBrakeCommand=0;
	ServiceBrakeCommand=0;
	;;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_SystemUnderTest_SpeedAndDistanceMonitoringCommand_SpeedAndDistanceMonitoring_Region1_CSM_CSM_ON_CSM2SB_32_beh:
	SpeedSupervisionStatus = InterventionStatus;
	
EmergencyBrakeCommand= !SBAvailable;
	
ServiceBrakeCommand= SBAvailable;
*/
key act_92 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int ServiceBrakeCommand = old->root__ServiceBrakeCommand;
	int SpeedSupervisionStatus = old->root__SpeedSupervisionStatus;
	int EmergencyBrakeCommand = old->root__EmergencyBrakeCommand;

	/* original statements */
	SpeedSupervisionStatus=10;
	EmergencyBrakeCommand=!old->root__SBAvailable;
	ServiceBrakeCommand=old->root__SBAvailable;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_TestDriver_TestDriver_Region1_T2_0_beh:
	DriveCommand = 0;
*/
key act_96 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int DriveCommand = old->root__DriveCommand;

	/* original statements */
	DriveCommand=0;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_TestDriver_TestDriver_Region1_T1_2_beh:
	DriveCommand = 1;
*/
key act_97 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	int DriveCommand = old->root__DriveCommand;

	/* original statements */
	DriveCommand=1;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, old->root__SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_EBrake_doactivity:
	SimulatedTrainSpeed = SimulatedTrainSpeed - 10;
*/
key act_98 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float SimulatedTrainSpeed = old->root__SimulatedTrainSpeed;

	/* original statements */
	SimulatedTrainSpeed=old->root__SimulatedTrainSpeed-10;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_Dec_doactivity:
	SimulatedTrainSpeed = SimulatedTrainSpeed - 2;
*/
key act_99 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float SimulatedTrainSpeed = old->root__SimulatedTrainSpeed;

	/* original statements */
	SimulatedTrainSpeed=old->root__SimulatedTrainSpeed-2;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_Running_Region0_Acc_doactivity:
	SimulatedTrainSpeed = SimulatedTrainSpeed + 2;
*/
key act_100 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float SimulatedTrainSpeed = old->root__SimulatedTrainSpeed;

	/* original statements */
	SimulatedTrainSpeed=old->root__SimulatedTrainSpeed+2;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/*
	root__SysMLmodel_SYSTEM_TestEnv2_TestEnv2_Region1_SBrake_doactivity:
	SimulatedTrainSpeed = SimulatedTrainSpeed - 5;
*/
key act_101 (key s) 
{
	value *old = lookup(s);
	/* updatable variable declaration */
	float SimulatedTrainSpeed = old->root__SimulatedTrainSpeed;

	/* original statements */
	SimulatedTrainSpeed=old->root__SimulatedTrainSpeed-5;

	/* Set value */
	return store (make_value (old->root__TrainInterfaceInput_EmergencyBrakeCommand, old->root__ServiceBrakeCommand, old->root__AbstractPosition_dLocation, old->root__isTargetUpdated, old->root__displayPermittedSpeed, old->root__SpeedSupervisionStatus, old->root__displaySBI, old->root__V_mrspmin, SimulatedTrainSpeed, old->root__permittedSpeed, old->root__dV_warning, old->root__targetSpeed, old->root__V_mrsp, old->root__dLocation, old->root__DriveCommand, old->root__OdometrySerialInterface_SimulatedTrainSpeed, old->root__AbstractPosition_isTargetUpdated, old->root__DMIInput_targetSpeed, old->root__DMIInput_permittedSpeed, old->root__TrainInterfaceInput_ServiceBrakeCommand, old->root__currentSpeed, old->root__dV_ebi, old->root__SupervisionLimits_V_mrsp, old->root__TracksideInputs_RevocationEmergencyBrake, old->root__dV_sbi, old->root__DMIInput_displayPermittedSpeed, old->root__DMIInput_SpeedSupervisionStatus, old->root__ControlSUTCommand_SUTCommand, old->root__SBAvailable, old->root__SUTCommand, old->root__sbCmd, old->root__RevocationEmergencyBrake, old->root__DMIInput_displaySBI, old->root__EmergencyBrakeCommand, old->root__TrainInputs_SBAvailable, old->root__DMIInput_currentSpeed));
}

/* independance relation for actions, for partial order and resets in timed modes */
bool independant (int t1, int t2) { return 1; }

/* -- State APIs -- */

/* state representation function for verbose output */
int sprint_state (int sz, char *buff, key s) {
	char tmp[2212];
	value *v = lookup(s);
	sprintf(tmp,"root__TrainInterfaceInput_EmergencyBrakeCommand=%d, root__ServiceBrakeCommand=%d, root__AbstractPosition_dLocation=%d, root__isTargetUpdated=%d, root__displayPermittedSpeed=%d, root__SpeedSupervisionStatus=%d, root__displaySBI=%d, root__V_mrspmin=%f, root__SimulatedTrainSpeed=%f, root__permittedSpeed=%f, root__dV_warning=%f, root__targetSpeed=%f, root__V_mrsp=%f, root__dLocation=%d, root__DriveCommand=%d, root__OdometrySerialInterface_SimulatedTrainSpeed=%f, root__AbstractPosition_isTargetUpdated=%d, root__DMIInput_targetSpeed=%f, root__DMIInput_permittedSpeed=%f, root__TrainInterfaceInput_ServiceBrakeCommand=%d, root__currentSpeed=%f, root__dV_ebi=%f, root__SupervisionLimits_V_mrsp=%f, root__TracksideInputs_RevocationEmergencyBrake=%d, root__dV_sbi=%f, root__DMIInput_displayPermittedSpeed=%d, root__DMIInput_SpeedSupervisionStatus=%d, root__ControlSUTCommand_SUTCommand=%d, root__SBAvailable=%d, root__SUTCommand=%d, root__sbCmd=%d, root__RevocationEmergencyBrake=%d, root__DMIInput_displaySBI=%d, root__EmergencyBrakeCommand=%d, root__TrainInputs_SBAvailable=%d, root__DMIInput_currentSpeed=%f",v->root__TrainInterfaceInput_EmergencyBrakeCommand, v->root__ServiceBrakeCommand, v->root__AbstractPosition_dLocation, v->root__isTargetUpdated, v->root__displayPermittedSpeed, v->root__SpeedSupervisionStatus, v->root__displaySBI, v->root__V_mrspmin, v->root__SimulatedTrainSpeed, v->root__permittedSpeed, v->root__dV_warning, v->root__targetSpeed, v->root__V_mrsp, v->root__dLocation, v->root__DriveCommand, v->root__OdometrySerialInterface_SimulatedTrainSpeed, v->root__AbstractPosition_isTargetUpdated, v->root__DMIInput_targetSpeed, v->root__DMIInput_permittedSpeed, v->root__TrainInterfaceInput_ServiceBrakeCommand, v->root__currentSpeed, v->root__dV_ebi, v->root__SupervisionLimits_V_mrsp, v->root__TracksideInputs_RevocationEmergencyBrake, v->root__dV_sbi, v->root__DMIInput_displayPermittedSpeed, v->root__DMIInput_SpeedSupervisionStatus, v->root__ControlSUTCommand_SUTCommand, v->root__SBAvailable, v->root__SUTCommand, v->root__sbCmd, v->root__RevocationEmergencyBrake, v->root__DMIInput_displaySBI, v->root__EmergencyBrakeCommand, v->root__TrainInputs_SBAvailable, v->root__DMIInput_currentSpeed);
	if (sz >= strlen(tmp) + 2) {sprintf(buff,"%s,",tmp);return strlen(buff);} else {return -1;}
}

/* state representation functions for transition system output */
char *obsnames[36] = {"root__TrainInterfaceInput_EmergencyBrakeCommand", "root__ServiceBrakeCommand", "root__AbstractPosition_dLocation", "root__isTargetUpdated", "root__displayPermittedSpeed", "root__SpeedSupervisionStatus", "root__displaySBI", "root__V_mrspmin", "root__SimulatedTrainSpeed", "root__permittedSpeed", "root__dV_warning", "root__targetSpeed", "root__V_mrsp", "root__dLocation", "root__DriveCommand", "root__OdometrySerialInterface_SimulatedTrainSpeed", "root__AbstractPosition_isTargetUpdated", "root__DMIInput_targetSpeed", "root__DMIInput_permittedSpeed", "root__TrainInterfaceInput_ServiceBrakeCommand", "root__currentSpeed", "root__dV_ebi", "root__SupervisionLimits_V_mrsp", "root__TracksideInputs_RevocationEmergencyBrake", "root__dV_sbi", "root__DMIInput_displayPermittedSpeed", "root__DMIInput_SpeedSupervisionStatus", "root__ControlSUTCommand_SUTCommand", "root__SBAvailable", "root__SUTCommand", "root__sbCmd", "root__RevocationEmergencyBrake", "root__DMIInput_displaySBI", "root__EmergencyBrakeCommand", "root__TrainInputs_SBAvailable", "root__DMIInput_currentSpeed"};
char **obs_names (int *count) {*count = 36; return obsnames;}

/* obs_values returns the array of values of observables for state s (non-integer should be abstracted)*/
int ovalues[36];
int *obs_values (key s) {
	value *v = lookup(s);

	ovalues[0] = v->root__TrainInterfaceInput_EmergencyBrakeCommand;
	ovalues[1] = v->root__ServiceBrakeCommand;
	ovalues[2] = v->root__AbstractPosition_dLocation;
	ovalues[3] = v->root__isTargetUpdated;
	ovalues[4] = v->root__displayPermittedSpeed;
	ovalues[5] = v->root__SpeedSupervisionStatus;
	ovalues[6] = v->root__displaySBI;
	ovalues[7] = rint(v->root__V_mrspmin * 10000);
	ovalues[8] = rint(v->root__SimulatedTrainSpeed * 10000);
	ovalues[9] = rint(v->root__permittedSpeed * 10000);
	ovalues[10] = rint(v->root__dV_warning * 10000);
	ovalues[11] = rint(v->root__targetSpeed * 10000);
	ovalues[12] = rint(v->root__V_mrsp * 10000);
	ovalues[13] = v->root__dLocation;
	ovalues[14] = v->root__DriveCommand;
	ovalues[15] = rint(v->root__OdometrySerialInterface_SimulatedTrainSpeed * 10000);
	ovalues[16] = v->root__AbstractPosition_isTargetUpdated;
	ovalues[17] = rint(v->root__DMIInput_targetSpeed * 10000);
	ovalues[18] = rint(v->root__DMIInput_permittedSpeed * 10000);
	ovalues[19] = v->root__TrainInterfaceInput_ServiceBrakeCommand;
	ovalues[20] = rint(v->root__currentSpeed * 10000);
	ovalues[21] = rint(v->root__dV_ebi * 10000);
	ovalues[22] = rint(v->root__SupervisionLimits_V_mrsp * 10000);
	ovalues[23] = v->root__TracksideInputs_RevocationEmergencyBrake;
	ovalues[24] = rint(v->root__dV_sbi * 10000);
	ovalues[25] = v->root__DMIInput_displayPermittedSpeed;
	ovalues[26] = v->root__DMIInput_SpeedSupervisionStatus;
	ovalues[27] = v->root__ControlSUTCommand_SUTCommand;
	ovalues[28] = v->root__SBAvailable;
	ovalues[29] = v->root__SUTCommand;
	ovalues[30] = v->root__sbCmd;
	ovalues[31] = v->root__RevocationEmergencyBrake;
	ovalues[32] = v->root__DMIInput_displaySBI;
	ovalues[33] = v->root__EmergencyBrakeCommand;
	ovalues[34] = v->root__TrainInputs_SBAvailable;
	ovalues[35] = rint(v->root__DMIInput_currentSpeed * 10000);

	return ovalues;
}

