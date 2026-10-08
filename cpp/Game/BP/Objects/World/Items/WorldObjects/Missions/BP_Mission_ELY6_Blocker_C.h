// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_ELY6_Blocker.BP_Mission_ELY6_Blocker_C
// Derives from: ABP_Destructible_Blocker_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_ELY6_Blocker_C : public ABP_Destructible_Blocker_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DoorFrame1;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* IcarusStaticMesh4;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* IcarusStaticMesh3;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* IcarusStaticMesh2;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* IcarusStaticMesh1;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DoorFrame;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Snap;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bShowSnap;  // 0x03D0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mission_ELY6_Blocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_bShowSnap();
    UFUNCTION(BlueprintCallable) void TriggerDestroy();
    UFUNCTION(BlueprintCallable) void UpdateBlockerState();
    UFUNCTION(BlueprintCallable) void UpdateDestroyed();
    UFUNCTION(BlueprintCallable) void UpdateSnapState();
};
