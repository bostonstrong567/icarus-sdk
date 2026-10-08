// /Script/Icarus.MutableGameplayTagInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Tags/MutableGameplayTagInterface.h

UCLASS(Abstract, MinimalAPI)
class UMutableGameplayTagInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) FGameplayTagContainer GetGameplayTags() const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetGameplayTags(const FGameplayTagContainer& InGameplayTags);  // parameters 0x20
};
