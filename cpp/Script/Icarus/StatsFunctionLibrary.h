// /Script/Icarus.StatsFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Stats/StatsFunctionLibrary.h

UCLASS()
class UStatsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool CheckStatComparison(const FStatComparison& Comparison, UIcarusStatContainer* StatContainer);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void CompareItemStats(UObject* WorldContextObject, const FItemData& ItemBase, const FItemData& CompareToItem, TArray<FStatComparisonResult>& ComparisonResults);  // parameters 0x3F8
    UFUNCTION(BlueprintCallable) static int32 GetStatAdjustedDurabilityLoss(AIcarusPlayerCharacter* Player, int32 Durability);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TMap<FStatsRowHandle, int32> GetStatBoxItemStats(UObject* WorldContextObject, const FItemData& Item);  // parameters 0x248
    UFUNCTION(BlueprintCallable) static void GetStatDescriptionBP(FStatsEnum Stat, int32 Value, FText& Description, EFunctionOutcome& Outcome);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static TMap<FStatCategoriesEnum, FStatCollection> GetStatDisplay(UIcarusStatContainer* StatContainer);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void GetStatTitleBP(FStatsEnum Stat, int32 Value, FText& TitleDescription, EFunctionOutcome& Outcome);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool HasStatDescription(FStatsEnum Stat);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool IsStatHidden(const FStatsEnum& Stat);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static float ModifyValueByPlusPercent(int32 Value, int32 StatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static bool RollChanceStat(FStatsEnum Stat, UIcarusStatContainer* StatContainer);  // parameters 0x19
};
