// /Game/BP/Mounts/BP_SheepFunctionLibrary.BP_SheepFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SheepFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void UpdateWoolCosmetics(USkeletalMeshComponent* MeshComponent, UGFurComponent* GFurComponent, bool HasWool, bool IsRam, UObject* __WorldContext);  // parameters 0x20
};
