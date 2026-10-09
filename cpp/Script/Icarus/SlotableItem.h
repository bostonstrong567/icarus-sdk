// /Script/Icarus.SlotableItem
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Traits/Behaviours/SlotableData.h

UCLASS(Abstract)
class USlotableItem : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) void GetSpawnTransformOffset(FTransform& OutTransformOffset) const;  // parameters 0x30
};
