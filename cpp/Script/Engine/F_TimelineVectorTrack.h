// /Script/Engine.TimelineVectorTrack
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Components/TimelineComponent.h

USTRUCT()
struct FTimelineVectorTrack
{
public:
    UPROPERTY() UCurveVector* VectorCurve;  // 0x0000, size 0x8
    UPROPERTY() FOnTimelineVector InterpFunc;  // 0x0008, size 0x10
    UPROPERTY() FName TrackName;  // 0x0018, size 0x8
    UPROPERTY() FName VectorPropertyName;  // 0x0020, size 0x8
    FStructProperty * VectorProperty;  // 0x0028, not reflected
    TDelegate<void __cdecl(FVector),FDefaultDelegateUserPolicy> InterpFuncStatic;  // 0x0030, not reflected
};
