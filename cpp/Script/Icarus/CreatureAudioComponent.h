// /Script/Icarus.CreatureAudioComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Icarus/Source/Icarus/Audio/Creature/CreatureAudioComponent.h

UCLASS(Config=Engine)
class UCreatureAudioComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintReadOnly) EAudioShelterState CurrentShelterState;  // 0x00B0, size 0x1
    UPROPERTY(BlueprintReadWrite) float CurrentWaterDepth;  // 0x00B4, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) float GetWaterImmersion();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateShelterState();

    // Virtual functions that start here:
    //   GetWaterImmersion_Implementation
};
