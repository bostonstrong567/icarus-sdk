// /Script/Icarus.SlotableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/SlotableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class USlotableComponent : public UTraitComponent
{
public:

    UFUNCTION(BlueprintNativeEvent) AIcarusActor* GetActorInSlot(int32 Index);  // parameters 0x10
};
