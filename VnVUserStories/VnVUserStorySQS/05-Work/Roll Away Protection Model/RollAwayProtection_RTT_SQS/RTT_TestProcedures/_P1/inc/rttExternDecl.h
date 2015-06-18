#ifndef _XXX_RTTEXTERN_DECL_H_XXX_
#define _XXX_RTTEXTERN_DECL_H_XXX_

extern unsigned long long _timeTick;
extern unsigned long long _timeResolution;
extern int          _timeTickDiff;
extern int          rttHaveDiscreteTrans;

extern void         stimulator();

extern char        *sut_RollAwayProtection_tags;
extern void         _ora_RollAwayProtection();
extern int          BrakeCommand_rtt_Ctr;
extern int          BrakeCommand_rtt_Psd;
extern int          BrakeCommand_rtt_Fld;
extern int          BrakeCommand_rtt_Epd;
extern int          BrakeCommand_rtt_EpdOld;
extern int          BrakingIndicator_rtt_Ctr;
extern int          BrakingIndicator_rtt_Psd;
extern int          BrakingIndicator_rtt_Fld;
extern int          BrakingIndicator_rtt_Epd;
extern int          BrakingIndicator_rtt_EpdOld;
extern int          RAPAckReq_rtt_Ctr;
extern int          RAPAckReq_rtt_Psd;
extern int          RAPAckReq_rtt_Fld;
extern int          RAPAckReq_rtt_Epd;
extern int          RAPAckReq_rtt_EpdOld;

#endif
