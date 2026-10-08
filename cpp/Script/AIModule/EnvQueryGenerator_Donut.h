// /Script/AIModule.EnvQueryGenerator_Donut
// Derives from: UEnvQueryGenerator_ProjectedPoints > UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x1D0, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue InnerRadius;  // 0x0080, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue OuterRadius;  // 0x00B8, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderIntValue NumberOfRings;  // 0x00F0, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderIntValue PointsPerRing;  // 0x0128, size 0x38
    UPROPERTY(EditAnywhere) FEnvDirection ArcDirection;  // 0x0160, size 0x20
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ArcAngle;  // 0x0180, size 0x38
    UPROPERTY(EditAnywhere) bool bUseSpiralPattern;  // 0x01B8, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Center;  // 0x01C0, size 0x8
    UPROPERTY(EditAnywhere) uint8 bDefineArc : 1;  // 0x01C8, mask 0x01
};
