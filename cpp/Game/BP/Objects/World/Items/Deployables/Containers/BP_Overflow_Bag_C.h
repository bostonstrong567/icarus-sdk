// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Overflow_Bag.BP_Overflow_Bag_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3A9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Overflow_Bag_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) TSubclassOf<UUMG_IcarusLinkedActorPanel_C> Widget_Class_to_Open;  // 0x0348, size 0x8, named "Widget Class to Open"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GravestoneBag;  // 0x0350, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> In_Stats;  // 0x0358, size 0x50, named "In Stats"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NoPhysicsSimulation;  // 0x03A8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Overflow_Bag(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnItemRemoved_Event(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnTerrainAchorStateChanged();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
