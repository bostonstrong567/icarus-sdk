// /Script/Icarus.EnvQueryTest_BoundsMask
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x228, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_BoundsMask.h

UCLASS()
class UEnvQueryTest_BoundsMask : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UGameplayTexture> OverrideBoundsMask;  // 0x01F8, size 0x28
    UPROPERTY(EditAnywhere) float TestRadius;  // 0x0220, size 0x4
};
