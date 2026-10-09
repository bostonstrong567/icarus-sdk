// /Script/ControlRig.RigUnit_SecondsToFrames
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Animation/RigUnit_TimeConversion.h

USTRUCT()
struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
public:
    UPROPERTY() float Seconds;  // 0x0008, size 0x4
    UPROPERTY() float Frames;  // 0x000C, size 0x4
};
