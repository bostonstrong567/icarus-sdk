// /Game/BP/MiscConstructs/IcarusSurvivalFunctionLibrary.IcarusSurvivalFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UIcarusSurvivalFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GetBestSafeTeleportLocationForPlayer(AIcarusPlayerCharacter* PlayerCharacter, UObject* __WorldContext, FVector& OutLocation);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static ABP_IcarusPlayerCharacterSurvival_C* GetIcarusPlayerCharacterSurvivalBP(int32 PlayerIndex, UObject* __WorldContext, bool& Valid);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static ABP_IcarusPlayerControllerSurvival_C* GetIcarusPlayerControllerSurvivalBP(int32 PlayerIndex, UObject* __WorldContext, bool& Valid);  // parameters 0x19
};
