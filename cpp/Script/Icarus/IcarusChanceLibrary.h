// /Script/Icarus.IcarusChanceLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Chance/IcarusChanceLibrary.h

UCLASS()
class UIcarusChanceLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void BP_RollChance(int32 Threshold, ERollResult& Paths);  // parameters 0x5
    UFUNCTION(BlueprintCallable) static void BP_RollCustom(int32 MinimumInclusive, int32 MaximumInclusive, int32 Threshold, ERollResult& Paths);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static void BP_SeededRollChance(FRandomStream& Stream, int32 Threshold, ERollResult& Paths);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static int32 Roll(int32 MinimumInclusive, int32 MaximumInclusive);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 RollMax(int32 Maximum);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static int32 SeededRoll(FRandomStream& Stream, int32 MinimumInclusive, int32 MaximumInclusive);  // parameters 0x14
};
