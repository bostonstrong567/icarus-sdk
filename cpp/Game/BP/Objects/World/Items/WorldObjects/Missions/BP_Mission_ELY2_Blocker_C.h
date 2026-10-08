// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_ELY2_Blocker.BP_Mission_ELY2_Blocker_C
// Derives from: ABP_Destructible_Blocker_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3A1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_ELY2_Blocker_C : public ABP_Destructible_Blocker_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ExplosionPoint;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Snap;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bShowSnap;  // 0x03A0, size 0x1

    UFUNCTION(BlueprintCallable) void DealDamage();
    UFUNCTION() void ExecuteUbergraph_BP_Mission_ELY2_Blocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_bShowSnap();
    UFUNCTION(BlueprintCallable) void TriggerDestroy();
    UFUNCTION(BlueprintCallable) void UpdateBlockerState();
    UFUNCTION(BlueprintCallable) void UpdateDestroyed();
    UFUNCTION(BlueprintCallable) void UpdateSnapState();
};
