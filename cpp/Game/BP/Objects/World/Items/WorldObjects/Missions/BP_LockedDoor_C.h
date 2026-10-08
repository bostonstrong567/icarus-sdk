// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_LockedDoor.BP_LockedDoor_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x351, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LockedDoor_C : public ABP_WorldObject_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Mission_Door_Lever;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bIsOpen;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float time;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool bCanInteract;  // 0x0350, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_LockedDoor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceState();
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_FixState(bool Multi_Interact, bool Multi_Open);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnRep_bIsOpen();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateDoorState();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
