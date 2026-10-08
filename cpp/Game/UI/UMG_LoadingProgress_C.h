// /Game/UI/UMG_LoadingProgress.UMG_LoadingProgress_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LoadingProgress_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* LoadingIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText LoadingText;  // 0x0278, size 0x18

    UFUNCTION() void ExecuteUbergraph_UMG_LoadingProgress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LoadingStateChanged(bool HideLoadingIcon, FText StateText);  // parameters 0x20
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
