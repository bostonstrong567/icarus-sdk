// /Script/Icarus.ModifiableInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Modifiers/ModifiableInterface.h

UCLASS(Abstract)
class UModifiableInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) int32 GetNextUID();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
};
