// /Game/UI/Accolades/UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AccoladeMissionProgress_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Achieved;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AccoladeImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* AchievedBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BadgeGlow;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CountText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DisplayName;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Icon;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_45;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccoladesRowHandle Accolade;  // 0x02A8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_AccoladeTooltip_C* Tooltip;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Complete;  // 0x02C8, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_AccoladeMissionProgress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_ECE88B094DF845745D1F47869C29E97C();
    UFUNCTION(BlueprintCallable) void InitAccolade();
    UFUNCTION(BlueprintCallable) void PlayCompleteAnimation();
    UFUNCTION(BlueprintCallable) void UpdateState();
};
