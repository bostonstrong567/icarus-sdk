// /Script/Engine.TimelineLinearColorTrack
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Components/TimelineComponent.h

USTRUCT()
struct FTimelineLinearColorTrack
{
public:
    UPROPERTY() UCurveLinearColor* LinearColorCurve;  // 0x0000, size 0x8
    UPROPERTY() FOnTimelineLinearColor InterpFunc;  // 0x0008, size 0x10
    UPROPERTY() FName TrackName;  // 0x0018, size 0x8
    UPROPERTY() FName LinearColorPropertyName;  // 0x0020, size 0x8
    FStructProperty * LinearColorProperty;  // 0x0028, not reflected
    TDelegate<void __cdecl(FLinearColor),FDefaultDelegateUserPolicy> InterpFuncStatic;  // 0x0030, not reflected
};
