// /Script/AIModule.EnvQueryGenerator_ProjectedPoints
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x80, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h

UCLASS(Abstract, EditInlineNew)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) FEnvTraceData ProjectionData;  // 0x0050, size 0x30

    // Virtual functions that start here:
    //   ProjectAndFilterNavPoints, StoreNavPoints
};
