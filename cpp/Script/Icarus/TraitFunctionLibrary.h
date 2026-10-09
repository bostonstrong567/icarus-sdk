// /Script/Icarus.TraitFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Traits/TraitFunctionLibrary.h

UCLASS()
class UTraitFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UTraitComponent* GetTrait(AActor* Actor, TSubclassOf<UTraitComponent> TraitClass, EValid& Paths);  // parameters 0x20
};
