// /Game/UI/Windows/UMG_ItemsOnDropsList.UMG_ItemsOnDropsList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x28B, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemsOnDropsList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemsOnDropsContainer;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemsOnDropsPanel;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NoItemsDeployedMessage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ClickToReclaim;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EDITOR_ShowFakeProspectData;  // 0x0289, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanReclaimLoadouts;  // 0x028A, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ItemsOnDropsList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LoadOnDropItems();
    UFUNCTION(BlueprintCallable) void OnLoadoutDeleted();
    UFUNCTION(BlueprintCallable) void OnLoadoutInsuranceClaimed();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RebuildLoadoutList();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
