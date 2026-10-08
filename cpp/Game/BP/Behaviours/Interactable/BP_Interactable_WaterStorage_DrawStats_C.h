// /Game/BP/Behaviours/Interactable/BP_Interactable_WaterStorage_DrawStats.BP_Interactable_WaterStorage_DrawStats_C
// Derives from: UBP_Interactable_Rain_Reservior_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_WaterStorage_DrawStats_C : public UBP_Interactable_Rain_Reservior_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetWaterModifiers(TArray<FAlterationsEnum>& Array);  // parameters 0x10
};
