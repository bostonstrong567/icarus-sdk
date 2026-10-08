// /Game/BP/MiscConstructs/BP_PlayerProgressionFunctionLibrary.BP_PlayerProgressionFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerProgressionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void CalculatePlayerLevelFromExp(int32 Experience, UObject* __WorldContext, int32& Level, int32& RemainingXP, float& PercentageToNextLevel);  // parameters 0x1C
};
