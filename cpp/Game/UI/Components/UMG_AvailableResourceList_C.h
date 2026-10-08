// /Game/UI/Components/UMG_AvailableResourceList.UMG_AvailableResourceList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x291, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AvailableResourceList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_ResourceInfoContainer;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Mid_Border;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Mid_Fill;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_L;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_R;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideBorder;  // 0x0290, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_AvailableResourceList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
