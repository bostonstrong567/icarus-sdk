// /Script/Engine.SplineCurves
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Components/SplineComponent.h

USTRUCT()
struct FSplineCurves
{
public:
    UPROPERTY() FInterpCurveVector Position;  // 0x0000, size 0x18
    UPROPERTY() FInterpCurveQuat Rotation;  // 0x0018, size 0x18
    UPROPERTY() FInterpCurveVector Scale;  // 0x0030, size 0x18
    UPROPERTY() FInterpCurveFloat ReparamTable;  // 0x0048, size 0x18
    UPROPERTY(Deprecated) USplineMetadata* Metadata;  // 0x0060, size 0x8
    UPROPERTY(Transient) uint32 Version;  // 0x0068, size 0x4
};
