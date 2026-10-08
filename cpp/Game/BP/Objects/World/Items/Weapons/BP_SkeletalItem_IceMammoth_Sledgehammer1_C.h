// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_IceMammoth_Sledgehammer1.BP_SkeletalItem_IceMammoth_Sledgehammer1_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_IceMammoth_Sledgehammer1_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AudioLocation;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Building_C* BP_UIProjectionComponent_Building;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* DamagedSound;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* BrokenSound;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* NiagaraEmitter;  // 0x05B0, size 0x8

    UFUNCTION(BlueprintCallable) void CacheAudioRefs();
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_IceMammoth_Sledgehammer1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayBrokenEffects();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_ShowFX(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PlayBrokenAudio();
    UFUNCTION(BlueprintCallable) void PlayDamagedAudio(int32 DamageAmount, EIcarusDamageType DamageType);  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ShowFX(FVector Location);  // parameters 0xC
};
