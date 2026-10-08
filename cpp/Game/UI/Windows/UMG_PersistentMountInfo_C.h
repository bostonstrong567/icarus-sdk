// /Game/UI/Windows/UMG_PersistentMountInfo.UMG_PersistentMountInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x358, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PersistentMountInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OnSelected;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Selected;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_SelectMount;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_MountPreview;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemDescription;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_ExtraInfo;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_MountLevelAndType;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_MountName;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopGlow;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_ExtraInfo;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMountSaveData PersistentMountData;  // 0x02C8, size 0x70
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSelected;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectedStateUpdated SelectedStateUpdated;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicPreviewMaterial;  // 0x0350, size 0x8

    UFUNCTION() void BndEvt__UMG_PersistentMountInfo_Button_SelectMount_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PersistentMountInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(FMountSaveData PersistentMountData);  // parameters 0x70
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void SelectedStateUpdated__DelegateSignature(UUMG_PersistentMountInfo_C* PersistentMountWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetMountTexture(UTexture* Value);  // parameters 0x8
};
