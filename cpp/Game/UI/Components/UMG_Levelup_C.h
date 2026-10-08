// /Game/UI/Components/UMG_Levelup.UMG_Levelup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x349, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Levelup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LevelUp_TierUnlock;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LevelUp_Default;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Arrow;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Arrow_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* BarBase;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Base;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintPointText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_5;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_6;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_7;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_275;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LevelText;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SoloPoints;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SoloPointsText;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Star;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TalentPoints;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TalentPointText;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TierUnlockImage;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TierUnlockName;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentLevel;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InitialExperienceSet;  // 0x0334, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_LevelUp;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_LevelUpTierUnlock;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool firstExperienceCheck;  // 0x0348, size 0x1

    UFUNCTION(BlueprintCallable) void ConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Levelup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise_Player();  // named "Initialise Player"
    UFUNCTION(BlueprintCallable) void OnExperienceUpdated();
    UFUNCTION(BlueprintCallable) bool UnlockCheck(int32 Level, FItemableRowHandle& Itemable);  // parameters 0x20
};
