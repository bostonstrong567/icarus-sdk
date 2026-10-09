// /Script/LiveLinkInterface.LiveLinkCurveElement
// size 0xC, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkCurveElement
{
public:
    UPROPERTY() FName CurveName;  // 0x0000, size 0x8
    UPROPERTY() float CurveValue;  // 0x0008, size 0x4
};
