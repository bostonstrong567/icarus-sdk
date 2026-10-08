// /Game/BP/UI/Talents/Blueprint/UMG_ResourceNetworkPreview.UMG_ResourceNetworkPreview_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkPreview_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* IconValue;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* ResourceIcon;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Colour;  // 0x0280, size 0x28

    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkPreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FormatStorageLabel(int32 Stored, int32 Capacity, int32 Rate, FText Units, FText& LabelText);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFillableMaxStoredUnits(FItemData ItemData, int32& MaxStoredUnits, FIcarusResourcesEnum& ResourceType);  // parameters 0x208
    UFUNCTION(BlueprintCallable) void Update(EResourceNetworkFlowType FlowType, int32 ResourceValue, FItemData ItemData, FOptionalResourceFlowsRowHandle OptionalFlowType, FIcarusResourcesRowHandle IcarusResource);  // parameters 0x228
};
