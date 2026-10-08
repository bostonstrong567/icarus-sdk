// /Game/BP/Behaviours/Modifiers/CosmeticEffects/ModifierCosmetic_SmokeBoots.ModifierCosmetic_SmokeBoots_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x228, a blueprint class, blueprint

UCLASS(Config=Engine)
class UModifierCosmetic_SmokeBoots_C : public USceneComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleL;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UAudioComponent* Sound;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleR;  // 0x0218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* Owner;  // 0x0220, size 0x8

    UFUNCTION() void ExecuteUbergraph_ModifierCosmetic_SmokeBoots(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
