// /Game/BP/MiscConstructs/BP_AccountFlagFunctionLibrary.BP_AccountFlagFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AccountFlagFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void AccountFlagAppend(FText Base, FText New, UObject* __WorldContext, FText& Text);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static void AccountFlagGetAllRewards(FAccountFlagsRowHandle RowHandle, UObject* __WorldContext, FText& BuiltText);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static void AccountFlag_GetRequiredMissionText(FAccountFlagsRowHandle RowHandle, UObject* __WorldContext, FText& Text);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static void AccountFlag_GetTalentModifierText(FAccountFlagsRowHandle RowHandle, UObject* __WorldContext, FText& Text);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static void AccountFlag_GetUnlockedBlueprintsText(FAccountFlagsRowHandle RowHandle, UObject* __WorldContext, FText& Text);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static void AccountFlag_GetWorkshopUnlockText(FAccountFlagsRowHandle RowHandle, UObject* __WorldContext, FText& Text);  // parameters 0x38
};
