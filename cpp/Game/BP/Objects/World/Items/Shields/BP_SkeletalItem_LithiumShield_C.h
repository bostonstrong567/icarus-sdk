// /Game/BP/Objects/World/Items/Shields/BP_SkeletalItem_LithiumShield.BP_SkeletalItem_LithiumShield_C
// Derives from: ABP_SkeletalItem_LithiumBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_LithiumShield_C : public ABP_SkeletalItem_LithiumBase_C, public IShieldBlockedDamageInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LithiumShield_Zap;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AudioLocation;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* DamagedSound;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* BrokenSound;  // 0x05C8, size 0x8

    UFUNCTION(BlueprintCallable) void CacheAudioRefs();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ConsumeFuel(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ConsumeZapEnergy(FHitResult HitResult);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void EventBroken();
    UFUNCTION(BlueprintCallable) void EventDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_LithiumShield(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayBrokenEffects();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ZapFX(AActor* HitActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayBrokenAudio();
    UFUNCTION(BlueprintCallable) void PlayDamagedAudio(int32 DamageAmount, EIcarusDamageType DamageType);  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShieldBlockedDamage(const FIcarusDamagePacket& DamagePacket);  // parameters 0xD8
};
