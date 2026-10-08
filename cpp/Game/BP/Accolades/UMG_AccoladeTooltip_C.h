// /Game/BP/Accolades/UMG_AccoladeTooltip.UMG_AccoladeTooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3A5, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AccoladeTooltip_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AccoladeImage;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_0;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_2;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CompleteDate;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Gradient;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProgressText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RankProgressBar;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RankProgressBorder;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_0;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_1;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Status;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StatusBorder;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TalentName;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* TaskGrid;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* TooltipSizeBox;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccoladesRowHandle Accolade;  // 0x02E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor CompletedTitle_Colour;  // 0x0300, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) F_ChallengeState Base;  // 0x0328, size 0x70
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TaskGridColumns;  // 0x0398, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultTooltipWidth;  // 0x039C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TaskListTooltipWidth;  // 0x03A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Achievement;  // 0x03A4, size 0x1

    UFUNCTION(BlueprintCallable) void Init(FAccoladesRowHandle Accolade);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateState(int32 CurrentValue, int32 MaxValue, FDateTime CompletedTime, bool Complete, TArray<FAccoladeTaskState>& TaskStates);  // parameters 0x28
};
