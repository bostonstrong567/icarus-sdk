// /Game/BP/Behaviours/Interactable/BP_Interactable_WaterStorage_DrinkStats.BP_Interactable_WaterStorage_DrinkStats_C
// Derives from: UBP_Interactable_Rain_Reservior_Drink_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_WaterStorage_DrinkStats_C : public UBP_Interactable_Rain_Reservior_Drink_C
{
public:

    UFUNCTION(BlueprintCallable) void AddAlterations(AActor* Player);  // parameters 0x8
};
