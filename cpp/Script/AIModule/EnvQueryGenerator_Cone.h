// /Script/AIModule.EnvQueryGenerator_Cone
// Derives from: UEnvQueryGenerator_ProjectedPoints > UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x170, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue AlignedPointsDistance;  // 0x0080, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ConeDegrees;  // 0x00B8, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue AngleStep;  // 0x00F0, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue Range;  // 0x0128, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> CenterActor;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere) uint8 bIncludeContextLocation : 1;  // 0x0168, mask 0x01
};
