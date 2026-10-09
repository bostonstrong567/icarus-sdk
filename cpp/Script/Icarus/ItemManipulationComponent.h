// /Script/Icarus.ItemManipulationComponent
// Derives from: UActorComponent > UObject
// size 0xB0, declared in Icarus/Source/Icarus/Systems/ItemManipulation/ItemManipulationComponent.h

UCLASS(Config=Engine)
class UItemManipulationComponent : public UActorComponent
{
public:
    UFUNCTION(BlueprintCallable) bool CanRepairItem(UInventory* SourceInventory, int32 SourceLocation, AIcarusPlayerCharacter* Target);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) ECanUseItemResult CanUseItem(UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use, FUseCondition UseCondition, AIcarusPlayerCharacter* Target);  // parameters 0x79
    UFUNCTION(BlueprintCallable) bool ConsumeItem(AIcarusPlayerCharacter* Source, UInventory* SourceInventory, int32 SourceLocation, AIcarusCharacter* Target, FItemData& ItemConsumed);  // parameters 0x211
    UFUNCTION(BlueprintCallable) static TArray<FQueueItem> FindItemsRequiredForRepair(const FItemData& ItemData, TArray<UInventory*> Inventories);  // parameters 0x210
    UFUNCTION(BlueprintCallable) int32 GetTotalFoodRecovery(USurvivalCharacterState* TargetPlayer, FItemData& ItemData);  // parameters 0x1FC
    UFUNCTION(BlueprintCallable) bool PlaceItem(UInventory* SourceInventory, int32 SourceLocation, AIcarusPlayerCharacter* Target);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool RepairItem(UInventory* SourceInventory, int32 SourceLocation, AIcarusPlayerCharacter* Target);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool UseItem(AIcarusPlayerCharacter* Source, UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use, AIcarusCharacter* Target, FItemData& ItemConsumed);  // parameters 0x221
};
