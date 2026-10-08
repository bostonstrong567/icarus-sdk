// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x668, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Fishing_Lure_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AContextMenuFactory* Context_Menu;  // 0x0320, size 0x8, named "Context Menu"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Owning_Actor;  // 0x0328, size 0x8, named "Owning Actor"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UContextMenuWidget* CurrentContextMenu;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RadialOpen;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFindAllStacksResult> All_Lure_Types;  // 0x0340, size 0x10, named "All Lure Types"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> Lure_Types;  // 0x0350, size 0x10, named "Lure Types"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Backpack_Inventory_Action_Id;  // 0x0360, size 0x8, named "Backpack Inventory Action Id"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Quickbar_Inventory_Action_Id;  // 0x0368, size 0x8, named "Quickbar Inventory Action Id"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableData Itemable;  // 0x0378, size 0xF8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* As_Icarus_Item;  // 0x0470, size 0x8, named "As Icarus Item"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x0478, size 0x1F0

    UFUNCTION(BlueprintCallable) void ContextMenu_OpenForLure(bool AsRadial, bool& Opened);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ContextMenu_RemoveLure(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ContextMenu_SetLure(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Lure(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FName Get_Name_for_Inventory(UInventory* Inventory);  // parameters 0x10, named "Get Name for Inventory"
    UFUNCTION(BlueprintCallable) UInventory* GetInventoryFromName(FName Inventory_Name);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLure(FItemData& LureItem);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void LocalOrServer(bool& Local, bool& Server);  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void QuickReel();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveLure();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_RequestSetLure(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLure(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
};
