// /Game/UI/Components/UMG_ProspectRewardTalent.UMG_ProspectRewardTalent_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2ED, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectRewardTalent_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Blueprint;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Check;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountBorder;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* IconSizeBox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_46;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Numerator;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* UnlockedBar;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* UnlockedCount;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Points;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUnlocked;  // 0x02EC, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectRewardTalent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Reward(int32 Points);  // parameters 0x4, named "Set Reward"
};
