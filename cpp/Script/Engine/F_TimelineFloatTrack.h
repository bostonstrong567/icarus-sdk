// /Script/Engine.TimelineFloatTrack
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Components/TimelineComponent.h

USTRUCT()
struct FTimelineFloatTrack
{
    UPROPERTY() UCurveFloat* FloatCurve;  // 0x0000, size 0x8
    UPROPERTY() FOnTimelineFloat InterpFunc;  // 0x0008, size 0x10
    UPROPERTY() FName TrackName;  // 0x0018, size 0x8
    UPROPERTY() FName FloatPropertyName;  // 0x0020, size 0x8

    // Not reflected:
    FFloatProperty * FloatProperty;  // 0x0028
    TDelegate<void __cdecl(float),FDefaultDelegateUserPolicy> InterpFuncStatic;  // 0x0030
};
