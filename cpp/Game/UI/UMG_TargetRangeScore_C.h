// /Game/UI/UMG_TargetRangeScore.UMG_TargetRangeScore_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TargetRangeScore_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Score;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentScore;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CurrentName;  // 0x0280, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TargetRangeScore(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateName(FString NewName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateScore(int32 NewScore);  // parameters 0x4
};
