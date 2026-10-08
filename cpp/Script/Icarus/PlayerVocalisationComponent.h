// /Script/Icarus.PlayerVocalisationComponent
// Derives from: UVocalisationComponent > UActorComponent > UObject
// size 0x1A0, declared in Icarus/Source/Icarus/Audio/Player/PlayerVocalisationComponent.h

UCLASS(Config=Engine)
class UPlayerVocalisationComponent : public UVocalisationComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle BreathingVocalisation;  // 0x0108, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle LowHealthVocalisation;  // 0x0120, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LowHealthVocalisationThreshold;  // 0x0138, size 0x4
    UPROPERTY() TSet<UModifierStateComponent*> ActiveModifiers;  // 0x0140, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    UPlayerVocalisationComponent::EBreathingState CurrentBreathingState;  // 0x0190, private
    float CurrentHealth;  // 0x0194, private
    FTimerHandle RemoveModifierTimerHandle;  // 0x0198, private

    UFUNCTION() void HandleModifierEffectivenessUpdated(UModifierStateComponent* Component);  // parameters 0x8
    UFUNCTION() void OnHealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetDamageParameter(int32 DamageAmount);  // parameters 0x4
    UFUNCTION() void UpdatePerspective(bool bIsThirdPerson);  // parameters 0x1
};
