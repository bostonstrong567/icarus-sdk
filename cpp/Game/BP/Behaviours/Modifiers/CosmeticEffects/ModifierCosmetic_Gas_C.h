// /Game/BP/Behaviours/Modifiers/CosmeticEffects/ModifierCosmetic_Gas.ModifierCosmetic_Gas_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x218, a blueprint class, blueprint

UCLASS(Config=Engine)
class UModifierCosmetic_Gas_C : public USceneComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ExpandSulfurLarge;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* ParticleSystem;  // 0x0210, size 0x8

    UFUNCTION() void ExecuteUbergraph_ModifierCosmetic_Gas(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnOwnerDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
