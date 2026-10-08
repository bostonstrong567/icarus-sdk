// /Game/UI/Components/UMG_DLCBadge.UMG_DLCBadge_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DLCBadge_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Hover;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLCPackage;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FDLCPackageDataRowHandle, UTexture2D*> DLCPackageAvailable;  // 0x0298, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FDLCPackageDataRowHandle, UTexture2D*> DLCPackageUnavailable;  // 0x02E8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHoverUpdated HoverUpdated;  // 0x0338, size 0x10

    UFUNCTION() void BndEvt__UMG_DLCBadge_ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_DLCBadge_ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_DLCBadge_ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_DLCBadge(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HoverUpdated__DelegateSignature(bool IsHovered, UUMG_DLCBadge_C* Widget);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
