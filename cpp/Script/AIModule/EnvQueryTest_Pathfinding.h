// /Script/AIModule.EnvQueryTest_Pathfinding
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x280, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h

UCLASS()
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTestPathfinding> TestMode;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Context;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue PathFromContext;  // 0x0208, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue SkipUnreachable;  // 0x0240, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;  // 0x0278, size 0x8
};
