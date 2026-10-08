// /Game/UI/Components/UMG_DifficultySelect.UMG_DifficultySelect_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x289, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DifficultySelect_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DifficultyOptions;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty Difficulty;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDifficultyUpdated DifficultyUpdated;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideRewards;  // 0x0288, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DifficultyUpdated__DelegateSignature(EMissionDifficulty Difficulty);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_DifficultySelect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Select(EMissionDifficulty Difficulty);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup(TArray<EMissionDifficulty>& Difficulty);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ShowOnlyDifficulty(EMissionDifficulty Difficulty);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void WidgetChecked(bool Checked, UUMG_DifficultyButton_C* Widget);  // parameters 0x10
};
