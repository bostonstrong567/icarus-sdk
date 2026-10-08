// /Game/UI/Components/FillableProgress/UMG_FillableProgressBar.UMG_FillableProgressBar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FillableProgressBar_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Base;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Progress;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Type;  // 0x0280, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FillableProgressBar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetContainerType(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetProgress(float Percent);  // parameters 0x4
};
