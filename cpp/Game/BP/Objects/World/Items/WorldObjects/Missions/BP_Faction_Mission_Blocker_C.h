// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Blocker.BP_Faction_Mission_Blocker_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x37C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Blocker_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* JerryDrop;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DrillDrop;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Preview;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Blocker;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Faction_Cave_Blocker_Destroy;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Progress;  // 0x0378, size 0x4

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Blocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideMesh();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void PositionDroppedItems(AIcarusActor* Drill, AIcarusActor* Biofuel);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TriggerDestroy();
    UFUNCTION(BlueprintCallable) void UpdateTime(float Current, float Total);  // parameters 0x8
};
