// /Script/ControlRig.RigUnit_GetWorldTime
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Animation/RigUnit_GetWorldTime.h

USTRUCT()
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
public:
    UPROPERTY() float Year;  // 0x0008, size 0x4
    UPROPERTY() float Month;  // 0x000C, size 0x4
    UPROPERTY() float Day;  // 0x0010, size 0x4
    UPROPERTY() float WeekDay;  // 0x0014, size 0x4
    UPROPERTY() float Hours;  // 0x0018, size 0x4
    UPROPERTY() float Minutes;  // 0x001C, size 0x4
    UPROPERTY() float Seconds;  // 0x0020, size 0x4
    UPROPERTY() float OverallSeconds;  // 0x0024, size 0x4
};
