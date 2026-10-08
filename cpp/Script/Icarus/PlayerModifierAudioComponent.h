// /Script/Icarus.PlayerModifierAudioComponent
// Derives from: UActorComponent > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Audio/Player/PlayerModifierAudioComponent.h

UCLASS(Config=Engine)
class UPlayerModifierAudioComponent : public UActorComponent
{
public:
    UPROPERTY() TArray<UPlayerModifierSound*> Sounds;  // 0x00B0, size 0x10

    UFUNCTION() void HandleModifierEffectivenessUpdated(UModifierStateComponent* Modifier);  // parameters 0x8
};
