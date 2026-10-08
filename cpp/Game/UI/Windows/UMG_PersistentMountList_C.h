// /Game/UI/Windows/UMG_PersistentMountList.UMG_PersistentMountList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x360, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PersistentMountList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Container;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InventoryBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_Horizontal;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_Vertical;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_NoMounts_Horiz;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_NoMounts_Vert;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Container;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Title;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHorizontal;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMountSaveData> LoadedData;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTitle;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GenerateDataFromNearbyMounts;  // 0x02C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NewBrush;  // 0x02C8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UTextureRenderTarget2D*> GeneratedIcons;  // 0x0350, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PersistentMountList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) TArray<FMountSaveData> GenerateNearbyMountData(TArray<UTextureRenderTarget2D*>& MountIcons);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetMountInfoWidgets(TArray<UUMG_PersistentMountInfo_C*>& MountWidgets) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSelectedMounts(TArray<FMountSaveData>& SelectedMountData) const;  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
