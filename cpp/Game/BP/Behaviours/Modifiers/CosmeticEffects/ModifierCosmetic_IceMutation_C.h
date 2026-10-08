// /Game/BP/Behaviours/Modifiers/CosmeticEffects/ModifierCosmetic_IceMutation.ModifierCosmetic_IceMutation_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Engine)
class UModifierCosmetic_IceMutation_C : public USceneComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UParticleSystemComponent* FireParticle;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioComponent;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Player;  // 0x0218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FMODEvent_Creature;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* AttachToComponent;  // 0x0228, size 0x8

    UFUNCTION() void ExecuteUbergraph_ModifierCosmetic_IceMutation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
