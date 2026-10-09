// /Game/BP/Player/BP_ItemManipulationComponent.BP_ItemManipulationComponent_C
// Derives from: UItemManipulationComponent > UActorComponent > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ItemManipulationComponent_C : public UItemManipulationComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) ECanUseItemResult CanUseItem(UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use, FUseCondition UseCondition, AIcarusPlayerCharacter* Target);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UseItem(AIcarusPlayerCharacter* Source, UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use, AIcarusCharacter* Target, FItemData& ItemConsumed);  // parameters 0x221
};
