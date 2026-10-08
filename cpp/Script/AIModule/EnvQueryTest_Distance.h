// /Script/AIModule.EnvQueryTest_Distance
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x208, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h

UCLASS()
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTestDistance> TestMode;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> DistanceTo;  // 0x0200, size 0x8
};
