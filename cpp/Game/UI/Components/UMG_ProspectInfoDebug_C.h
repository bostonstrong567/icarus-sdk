// /Game/UI/Components/UMG_ProspectInfoDebug.UMG_ProspectInfoDebug_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2A9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectInfoDebug_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Info;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02A8, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_ProspectInfoDebug(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
