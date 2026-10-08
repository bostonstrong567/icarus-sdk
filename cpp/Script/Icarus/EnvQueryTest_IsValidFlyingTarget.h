// /Script/Icarus.EnvQueryTest_IsValidFlyingTarget
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x238, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_IsValidFlyingTarget.h

UCLASS()
class UEnvQueryTest_IsValidFlyingTarget : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue MaximumHeightDifference;  // 0x01F8, size 0x38
    UPROPERTY(EditAnywhere) bool bPassNonFlyingTargets;  // 0x0230, size 0x1
};
