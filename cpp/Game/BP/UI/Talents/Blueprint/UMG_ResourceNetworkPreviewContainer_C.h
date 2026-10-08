// /Game/BP/UI/Talents/Blueprint/UMG_ResourceNetworkPreviewContainer.UMG_ResourceNetworkPreviewContainer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkPreviewContainer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ResourcePreviewBox;  // 0x0268, size 0x8

    UFUNCTION(BlueprintCallable) void AddConnectionWidget(EResourceNetworkFlowType FlowType, int32 ResourceValue, FItemData ItemData, FOptionalResourceFlowsRowHandle OptionalFlowType, FIcarusResourcesRowHandle IcarusResource);  // parameters 0x228
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkPreviewContainer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryGetGeneratorFlowValues(FGeneratorRowHandle GeneratorRow, FIcarusResourcesEnum ResourceType, bool& HasFlow, EResourceNetworkFlowType& FlowType, int32& FlowAmount);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Update(FItemData Item);  // parameters 0x1F0
};
