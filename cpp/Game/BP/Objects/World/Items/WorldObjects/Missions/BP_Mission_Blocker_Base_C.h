// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Blocker_Base.BP_Mission_Blocker_Base_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Blocker_Base_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Faction_Cave_Blocker_Destroy;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BlockerMesh;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* DestructionAudio;  // 0x0360, size 0x8

    UFUNCTION(BlueprintCallable) void BlockerRemovedEvent();
    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DestroyDMComponent();
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Blocker_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBlockerRemoved();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TriggerDestroy();
};
