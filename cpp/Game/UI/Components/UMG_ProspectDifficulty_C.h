// /Game/UI/Components/UMG_ProspectDifficulty.UMG_ProspectDifficulty_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x289, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectDifficulty_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RowText;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty Difficulty;  // 0x0288, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_ProspectDifficulty(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Data(EMissionDifficulty Difficulty);  // parameters 0x1, named "Set Data"
};
