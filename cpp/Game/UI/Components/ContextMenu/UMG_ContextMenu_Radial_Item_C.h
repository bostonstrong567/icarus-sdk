// /Game/UI/Components/ContextMenu/UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextMenu_Radial_Item_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ContentBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* ContentCanvas;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ContentImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CountText;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LockImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_ContentContainer;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RadialSegmentImage;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* MaterialInstance;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartPoint;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DegreeValue;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MouseMin;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MouseMax;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Number;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSegmentSelected SegmentSelected;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Selected_Text;  // 0x02D8, size 0x18, named "Selected Text"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D PointToRotate;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Disabled;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FContextItemSelected ContextItemSelected;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextMenuItemIdentifier;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ContextMenuItemPayload;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinHighlightDistanceThreshold;  // 0x031C, size 0x4

    UFUNCTION(BlueprintCallable) void AsyncLoadImage(TSoftObjectPtr<UTexture2D> Texture);  // parameters 0x28
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void ContextItemSelected__DelegateSignature(FName ItemId, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CreateStyle();
    UFUNCTION() void ExecuteUbergraph_UMG_ContextMenu_Radial_Item(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_F90C4F064D1EE4ED4FA90A802A59BE4C(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SegmentClicked();
    UFUNCTION(BlueprintCallable) void SegmentSelected__DelegateSignature(UUMG_ContextMenu_Radial_Item_C* Selected);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetContextMenuItemData(FContextMenuItemData ContextMenuItemData);  // parameters 0xB0
    UFUNCTION(BlueprintCallable) void SetHighlighted(bool Highlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShouldHighlight(float Angle, float Distance, bool& ShouldHighlight);  // parameters 0x9
};
