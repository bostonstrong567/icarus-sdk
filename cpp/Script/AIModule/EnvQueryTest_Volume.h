// /Script/AIModule.EnvQueryTest_Volume
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x210, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Volume.h

UCLASS(MinimalAPI)
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> VolumeContext;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<AVolume> VolumeClass;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere) uint8 bDoComplexVolumeTest : 1;  // 0x0208, mask 0x01
};
