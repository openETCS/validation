#ifndef _XXX_RTTINTERFACE_H_XXX_
#define _XXX_RTTINTERFACE_H_XXX_
typedef struct
{

  int                 BrakeCommand;
  int                 BrakingIndicator;
  signed int          ControllerPosition;
  signed int          D_NVROLL;
  int                 RAPAck;
  int                 RAPAckReq;
  signed int          SpeedDirection;
  float               TrainLocation;
  float               TrainLocationLastStandstill;
  float               TrainSpeed;

} rttInterface_t;

extern rttInterface_t *rttIOPre;
extern rttInterface_t *rttIOPost;
#endif
