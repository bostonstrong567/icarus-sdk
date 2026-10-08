// /Game/UI/Debug/ResourceNetworkInspector/UMG_ResourceNetworkInspector_NetworkIcon.UMG_ResourceNetworkInspector_NetworkIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkInspector_NetworkIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NetworkIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NetworkNumberText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SelectionMarker;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum NetworkType;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSelected;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NetworkId;  // 0x0294, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkInspector_NetworkIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIconForNetworkType(UTexture2D*& Icon);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateValues(int32 NetworkId, bool IsSelected);  // parameters 0x5
};
