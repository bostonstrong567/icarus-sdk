// /Script/AIModule.EnvQueryGenerator_OnCircle
// Derives from: UEnvQueryGenerator_ProjectedPoints > UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x210, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue CircleRadius;  // 0x0080, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue SpaceBetween;  // 0x00B8, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderIntValue NumberOfPoints;  // 0x00F0, size 0x38
    UPROPERTY(EditAnywhere) EPointOnCircleSpacingMethod PointOnCircleSpacingMethod;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere) FEnvDirection ArcDirection;  // 0x0130, size 0x20
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ArcAngle;  // 0x0150, size 0x38
    UPROPERTY() float AngleRadians;  // 0x0188, size 0x4
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> CircleCenter;  // 0x0190, size 0x8
    UPROPERTY(EditAnywhere) bool bIgnoreAnyContextActorsWhenGeneratingCircle;  // 0x0198, size 0x1
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue CircleCenterZOffset;  // 0x01A0, size 0x38
    UPROPERTY(EditAnywhere) FEnvTraceData TraceData;  // 0x01D8, size 0x30
    UPROPERTY(EditAnywhere) uint8 bDefineArc : 1;  // 0x0208, mask 0x01

    // Virtual functions that start here:
    //   AddItemDataForCircle
};
