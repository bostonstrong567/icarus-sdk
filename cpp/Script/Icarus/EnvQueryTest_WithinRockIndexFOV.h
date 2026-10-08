// /Script/Icarus.EnvQueryTest_WithinRockIndexFOV
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x210, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_WithinRockIndexFOV.h

UCLASS()
class UEnvQueryTest_WithinRockIndexFOV : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) FName RockActorKeyName;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere) FName CurrentRockIndexKeyName;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere) bool bIncludeBuffer;  // 0x0208, size 0x1
};
