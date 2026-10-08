// /Script/Icarus.PlayerMovementAudioComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Icarus/Source/Icarus/Audio/Player/PlayerMovementAudioComponent.h

UCLASS(Config=Engine)
class UPlayerMovementAudioComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintReadWrite) float CurrentWaterImmersion;  // 0x00B0, size 0x4

    UFUNCTION(BlueprintCallable) UFMODEvent* GetItemAnimSound(AIcarusItem* Item, FName ItemAnimSoundName, int32 ItemAnimSoundIndex) const;  // parameters 0x20
};
