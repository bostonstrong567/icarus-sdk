// /Script/AIModule.EnvQueryTest_Dot
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x240, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h

UCLASS(MinimalAPI)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) FEnvDirection LineA;  // 0x01F8, size 0x20
    UPROPERTY(EditAnywhere) FEnvDirection LineB;  // 0x0218, size 0x20
    UPROPERTY(EditAnywhere) EEnvTestDot TestMode;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere) bool bAbsoluteValue;  // 0x0239, size 0x1
};
