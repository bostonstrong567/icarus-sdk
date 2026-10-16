// /Game/BP/MiscConstructs/Comfort/BP_ComfortFunctionLibrary.BP_ComfortFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ComfortFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void ApplyFishComfortEffectiveness(TArray<FItemData>& FishArray, AActor* Parent, int32& UID, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetFishComfortEffectiveness(TArray<FItemData>& Array, UObject* __WorldContext, int32& Effectiveness);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static EFishRarity GetFishRarity(const FItemData& Item, UObject* __WorldContext);  // parameters 0x1F9
};
