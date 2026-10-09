// /Script/Icarus.IcarusNavigationFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Navigation/IcarusNavigationFunctionLibrary.h

UCLASS()
class UIcarusNavigationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void SpawnIcarusNavLink(AActor* WorldContextObject, FTransform SpawnTransform, FVector LeftLinkLocation, FVector RightLinkLocation, AActor*& OutNavLink, TEnumAsByte<ENavLinkDirection> LinkDirection, TSubclassOf<AIcarusNavLink> LinkClass, TSubclassOf<UNavArea> AreaClass, bool bDirtyNavigationOnBeginPlay);  // parameters 0x79
};
