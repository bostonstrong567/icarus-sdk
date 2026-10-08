// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Radial_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UContextMenuWidget* CurrentRadialMenu;  // 0x0320, size 0x8

    UFUNCTION(BlueprintCallable) void CloseRadialMenu();
    UFUNCTION(BlueprintCallable) void CreateMenuItem(AContextMenuFactory* ContextMenuFactory, FContextMenuItemData& ContextMenuItemData, int32 ItemIndex);  // parameters 0xBC
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Radial(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetContextMenuInfo(FText& MenuName, TSoftObjectPtr<UTexture2D>& MenuIcon);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void GetContextMenuItems(TArray<FContextMenuItemData>& MenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void LocalOrServer(bool& Local, bool& Server);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void MenuItemSelected(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OpenRadialMenu();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetupPlayer();
};
