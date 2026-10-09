// /Script/Icarus.CharacterTrap
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Characters/Interfaces/CharacterTrap.h

UCLASS(Abstract)
class UCharacterTrap : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FVector GetBaitLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) ACharacter* GetCurrentlyTrappedCharacter() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) TArray<ACharacter*> GetCurrentlyTrappedCharacters() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FVector GetTrapOrigin() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) float GetTrapRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void NotifyDynamicCharacterSpawned();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void RemoveTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetCurrentlyTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool WantsDynamicSpawn() const;  // parameters 0x1
};
