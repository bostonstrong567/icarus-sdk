// /Script/Icarus.StomachFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Food/StomachFunctionLibrary.h

UCLASS()
class UStomachFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool ResolveStomachComponent(AActor* ActorConsuming, FItemData& ItemConsumed);  // parameters 0x1F9
};
