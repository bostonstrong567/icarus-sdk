// /Game/BP/AI/GOAP/Misc/BP_RadBoss_Web.BP_RadBoss_Web_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x3C4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RadBoss_Web_C : public AIcarusActor, public ICharacterTrap
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Trigger;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource8;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource7;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource6;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource5;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource4;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource3;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource2;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSource1;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableSourceLocations;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AuraUID;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<ACharacter*> TrappedCharacters;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ACharacter*, ActorComponentStruct> AttachedActorCableMapping;  // 0x0340, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TrapRadius;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ACharacter*> TempTrappedCharacters;  // 0x0398, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeoutStartTime;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ACharacter*> PreviouslyTrappedCharacters;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WebLifespan;  // 0x03C0, size 0x4

    UFUNCTION() void BndEvt__BP_RadBoss_Web_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void DisableWebEffects();
    UFUNCTION() void ExecuteUbergraph_BP_RadBoss_Web(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetBaitLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetBestAttachBone(ACharacter* TargetCharacter, FName& OutItem) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) ACharacter* GetCurrentlyTrappedCharacter() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<ACharacter*> GetCurrentlyTrappedCharacters() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTrapOrigin() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetTrapRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void NotifyDynamicCharacterSpawned();
    UFUNCTION(BlueprintCallable) void OnRep_TrappedCharacters();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetCurrentlyTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool WantsDynamicSpawn() const;  // parameters 0x1
};
