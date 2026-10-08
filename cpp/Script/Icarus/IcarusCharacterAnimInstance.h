// /Script/Icarus.IcarusCharacterAnimInstance
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Animation/IcarusCharacterAnimInstance.h

UCLASS(Transient)
class UIcarusCharacterAnimInstance : public UIcarusAnimInstance
{
public:
    UPROPERTY(BlueprintReadOnly) AIcarusItem* FocusedItem;  // 0x02D0, size 0x8
    UPROPERTY(BlueprintReadWrite) AIcarusPlayerCharacter* OwningCharacter;  // 0x02D8, size 0x8

    UFUNCTION(BlueprintNativeEvent) void OnFocusedItemUpdated(AIcarusItem* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetFocusedItem(AIcarusItem* Item);  // parameters 0x8
};
