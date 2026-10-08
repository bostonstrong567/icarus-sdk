// /Script/Icarus.ProspectFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Prospects/ProspectFunctionLibrary.h

UCLASS()
class UProspectFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TMap<FWorldBossesRowHandle, FVector2D> GetWorldBossesForProspect(const FProspectListRowHandle& Prospect);  // parameters 0x68
};
