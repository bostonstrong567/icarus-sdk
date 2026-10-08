// /Game/UI/InWorld/UMG_Inworld_ProgressBar.UMG_Inworld_ProgressBar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_ProgressBar_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_105;  // 0x0268, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_ProgressBar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateProgress(float Progress);  // parameters 0x4
};
