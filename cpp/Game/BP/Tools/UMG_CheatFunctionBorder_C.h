// /Game/BP/Tools/UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x338, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CheatFunctionBorder_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ContentBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0270, size 0x8
    UPROPERTY(Instanced) UTextBlock* Title;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TitleBorder;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCheatFunctionBase* CheatFunction;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TSoftObjectPtr<UUMG_CheatOverlay_C> ParentOverlay;  // 0x02A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TitleColor;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor AreaColor;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CheatDescription;  // 0x02F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor HighlightColor;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TitleTextColor;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TitleDescriptionColor;  // 0x0328, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CheatFunctionBorder(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateDisplayName();
    UFUNCTION(BlueprintCallable) void Set_Function(UCheatFunctionBase* CheatFunction);  // parameters 0x8, named "Set Function"
    UFUNCTION(BlueprintCallable) void Set_Top_Function(bool IsTop);  // parameters 0x1, named "Set Top Function"
    UFUNCTION(BlueprintCallable, BlueprintPure) void UpperChar(FString Char, bool& IsUpper, FString& UpperChar);  // parameters 0x28
};
