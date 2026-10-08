// /Game/BP/World/PersistentBlockers/BP_Destructible_Blocker.BP_Destructible_Blocker_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x378, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Destructible_Blocker_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* NiagaraSystemTransform;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bDestroyed;  // 0x0340, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bCanDamage;  // 0x0341, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierUID;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInitialised;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle BoundMission;  // 0x034C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReloaded;  // 0x0364, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* BlockerDestroyedAudio;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* NiagaraSystem;  // 0x0370, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Destructible_Blocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnActorDestroyed(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_bCanDamage();
    UFUNCTION(BlueprintCallable) void OnRep_bDestroyed();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateBlockerState();
    UFUNCTION(BlueprintCallable) void UpdateDestroyed();
    UFUNCTION(BlueprintCallable) void UpdateModifier();
};
