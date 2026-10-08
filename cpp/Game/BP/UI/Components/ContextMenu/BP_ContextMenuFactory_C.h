// /Game/BP/UI/Components/ContextMenu/BP_ContextMenuFactory.BP_ContextMenuFactory_C
// Derives from: AContextMenuFactory > AActor > UObject
// size 0x298, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ContextMenuFactory_C : public AContextMenuFactory
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_ContextMenu_List_C> ContextMenuClass;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_ContextMenu_Radial_C> RadialMenuClass;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ContextMenuName;  // 0x0258, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> ContextMenuIcon;  // 0x0270, size 0x28

    UFUNCTION() void ExecuteUbergraph_BP_ContextMenuFactory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinaliseMenu(TSubclassOf<UUMG_ContextMenu_Base_C> MenuClass, FVector2D ScreenPosition, UUMG_ContextMenu_Base_C*& ContextMenu);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetContextMenuData(const FText& Name, const TSoftObjectPtr<UTexture2D>& Icon);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShow(bool& ShouldShow);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UContextMenuWidget* ShowAsContextMenu(FVector2D ScreenPosition);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UContextMenuWidget* ShowAsRadialMenu();  // parameters 0x8
};
