// /Game/UI/Components/MissionReport/UMG_DifficultyModifiers.UMG_DifficultyModifiers_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x312, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DifficultyModifiers_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Enter;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BackgroundColour;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ContentColour;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HardcoreIcon;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* InsuranceIcon;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RewardRichText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Colour_Background;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Colour_Content;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText MultiplierText;  // 0x02E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BoxText;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Insured;  // 0x0310, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Harcore;  // 0x0311, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DifficultyModifiers(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(FLinearColor BackgroundColour, FLinearColor ContentColour, FText RewardMultiplier, FText MainText, bool Insurance, bool Harcore);  // parameters 0x52
    UFUNCTION(BlueprintCallable) void PlayEnterAnimation();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateText(FText Reason, FText Modifier);  // parameters 0x30
};
