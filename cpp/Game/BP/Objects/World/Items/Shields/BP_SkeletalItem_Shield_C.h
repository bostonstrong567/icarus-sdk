// /Game/BP/Objects/World/Items/Shields/BP_SkeletalItem_Shield.BP_SkeletalItem_Shield_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Shield_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AudioLocation;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* DamagedSound;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* BrokenSound;  // 0x0598, size 0x8

    UFUNCTION(BlueprintCallable) void CacheAudioRefs();
    UFUNCTION(BlueprintCallable) void EventBroken();
    UFUNCTION(BlueprintCallable) void EventDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Shield(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayBrokenEffects();
    UFUNCTION(BlueprintCallable) void PlayBrokenAudio();
    UFUNCTION(BlueprintCallable) void PlayDamagedAudio(int32 DamageAmount, EIcarusDamageType DamageType);  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
