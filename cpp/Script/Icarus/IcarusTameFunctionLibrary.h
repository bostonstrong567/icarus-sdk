// /Script/Icarus.IcarusTameFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/Mounts/IcarusTameFunctionLibrary.h

UCLASS()
class UIcarusTameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AbortTamingCharacter(AIcarusNPCCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool InitialiseTamableCharacter(AIcarusNPCCharacter* Character, FTamesRowHandle TameData, bool bStartFollowing);  // parameters 0x22
    UFUNCTION(BlueprintCallable) static bool IsCharacterBeingTamed(AIcarusNPCCharacter* Character);  // parameters 0x9
};
